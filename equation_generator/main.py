import sympy as sp
import random
import modul
import re

# Операции над числами
operations_dict = {}
config_dict = {}
function_dict ={}
bad_fun = {}
rules = {}
u, a = sp.symbols('u a')

# чтение конфига
config_txt = open("config.txt")


for line in config_txt:
    if line == "config\n":
        continue
    if line == "operators\n":
        break
    config_dict[line[:line.find("=")+1]] = int(line[line.find("= ")+2:line.find("\n")])
print("config_dict: ", config_dict)

# Создаем символы
sym = [0,0]
x = sp.symbols('x') # Функция
y = sp.symbols('y') # Уравнение
C = sp.symbols('C') # Число
# Чтение операторов
operations_dict = {}
for line in config_txt:
    if line == "operators\n":
        continue
    if line == "function\n":
        break
    operations_dict[line[:line.find("=") + 1]] = int(line[line.find("= ") + 2:line.find("\n")])

# Чтение функций
for line in config_txt:
    if line == "function\n":
        continue
    if line =="bad_fun\n":
        break
    function_dict[line[:line.find("=") + 1]] = (line[line.find("= ") + 2:line.find("\n")])

# Чтение степеней
for line in config_txt:
    if line == "bad_fun\n":
        continue
    if line =="rules\n":
        break
    bad_fun[line[:line.find("=") + 1]] = (line[line.find("= ") + 2:line.find("\n")])

# Чтение правил
for line in config_txt:
    if line == "rules\n":
        continue
    if line =="\n":
        break
    rules[line[:line.find("=") + 1]] = (line[line.find("= ") + 2:line.find("\n")])

# Закрытие файла
config_txt.close()

# Удаление неиспользуемых параметров
for key, value in function_dict.copy().items():
    if value == '0':
        del function_dict[key]
    else:
        function_dict[key] = sp.sympify(function_dict[key])

for key, value in operations_dict.copy().items():
    if value == 0:
        del operations_dict[key]

for key, value in bad_fun.copy().items():
    if value == '0':
        del bad_fun[key]
    else:
        bad_fun[key] = sp.sympify(bad_fun[key])

rules_sort = rules.copy()

for key, value in rules_sort.copy().items():
    if value == '0':
        del rules_sort[key]
# Исправление под правила
print("operations_dict:", operations_dict)
print("function_dict:", function_dict)
print("Bad_fun: ", bad_fun)
print("Rules: ", rules)
# Нахождение количества элементов
size = 1
for value in operations_dict.values():
    size += value
print(f'Количество элементов: {size}')

# Генерация U
sum_c = 0

if (rules["(C * u)'="] == '1' and len(rules_sort.keys()) == 1):
    equation = [x, random.randint(1,10)]

elif rules["(C * u)'="] == '0':
    while True:
        equation = []
        for i in range(size):
            equation.append(random.choice([x]))
        break

else:
    sum_c = random.randint(1, operations_dict['*='])
    while True:
        equation = []
        for i in range(size - sum_c):
             equation.append(random.choice([x]))
        break

print('ЗапчастиT_1:', equation)

equation2 = []
for i in range(len(equation)):
    if equation [i] == x:
        if config_dict['T_level='] < 3:
            temp = modul.gen_U(config_dict['T_level='],  random.randint(1,5))
            equation2.append(function_dict[random.choice(list(function_dict.keys()))].subs(u, temp))
        elif config_dict['T_level='] == 3:
            if random.randint(1,2) == 1:
                temp = function_dict[random.choice(list(function_dict.keys()))].subs(u, modul.gen_U(
                    config_dict['T_level='],
                    random.randint(1, 5)))
            else:
                temp = modul.gen_U(config_dict['T_level='], random.randint(1, 5))
            equation2.append(function_dict[random.choice(list(function_dict.keys()))].subs(u, temp))
print("ЗапчастиT_2 до степеней:",equation2)

if bad_fun !={}:
    for i in range(len(equation2)):
        if equation[i] == x:
            if random.randint(1,2) == 1:
                eq = random.choice(list(bad_fun.values()))
                eq = eq.subs(u, equation2[i])
                eq = eq.subs(a, random.randint(1,10))
                equation2[i] = eq
print("ЗапчастиT_2 после степеней:", equation2)

# Умножение случайных элементов на случайное число
for i in range(sum_c):
    random_index = random.randint(0, len(equation2) - 1)
    equation2[random_index] *= random.randint(1, 9)
if sum_c > 0:
    print("ЗапчастиT_2 после умножения:", equation2)

# Копирование для вывода
equation2_out = equation2.copy()
operations_dict_out = operations_dict.copy()

# Сборка запчастей в строчный тип
temp = random.choice(equation2)
result = str(temp)
result_out = result.replace(" ", "")
equation2.remove(temp)
for i in range(len(equation2)):
    temp = random.choice(list(operations_dict.keys()))
    result += temp[0:1]
    result_out += " " + temp[0:1] + " "
    operations_dict[temp] -= 1
    for key, value in operations_dict.copy().items():
        if value == 0:
            del operations_dict[key]
    if temp[0:1] == '*' or temp[0:1] == '/':
        temp = random.choice(equation2)
        if equation[equation2.index(temp)] != C:
            result += '(' + str(temp) + ')'
            result_out += '(' + str(temp).replace(" ", "") + ')'
        else:
            result += str(temp)
            result_out += '(' + str(temp).replace(" ", "") + ')'
    else:
        temp = random.choice(equation2)
        result += str(temp)
        result_out += str(temp).replace(" ", "")
    equation2.remove(temp)

# Коррекция формул
result = result.replace("**", "^")
result = result.replace("--", "+")
result = result.replace("+-", "-")
result = result.replace("-+", "-")
result = result.replace("sqrt", "√")
result = result.replace("tan", "tg")
result = result.replace("/1", "")
result = result.replace("/(1)", "")
result = re.sub(r'exp\((.*?)\)', r'e^(\1 )', result)

result = modul.replace_log_with_random(result)
print("Уравнение ворд: ", result)

# Открываем файл в режиме записи, ответ
with open('answer.txt', 'w') as file:
    # Записываем данные в файл
    file.write(f'{result}\n')

result_out = result_out.replace("**", "^")
result_out = result_out.replace("--", "+")
result_out = result_out.replace("+-", "-")
result_out = result_out.replace("-+", "-")
result_out = result_out.replace("sqrt", "√")
result_out = result_out.replace("tan", "tg")
result_out = result_out.replace("/1", "")
result_out = result_out.replace("/(1)", "")
result_out = re.sub(r'exp\((.*?)\)', r'e^(\1 )', result_out)
result_out = modul.replace_log_with_random(result_out)
print(result_out)
with open("answer_out.txt", 'w') as file:
    file.write(f'{result_out}\n')
