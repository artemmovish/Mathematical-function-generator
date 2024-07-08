import sympy as sp
import random
import modul
import modul as mod
# Операции над числами
operations_dict = {}
config_dict = {}
function_dict ={}
bad_fun = {}
rules = {}
u, a = sp.symbols('u a')
# чтение конфига
config_txt = open("config.txt")

# Чтение конфига
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

for i in range(len(equation2)):
    equation2[i] = str(mod.convert_to_sympy_format(str(equation2[i])))
print(equation2)


