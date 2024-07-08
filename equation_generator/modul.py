
import random
from sympy import symbols, sympify
import re
import re
def gen_U(T_level, size=3):
    x = symbols('x')
    operator = ["+", "-", "*", "/"]
    equation = ""
    while True:
        values = []
        if T_level >= 2:
            for i in range(size):
                bol = random.randint(2, 3)
                if bol == 1:
                    values.append(x)
                elif bol == 2:
                    bol = random.randint(1, 2)
                    if bol == 1:
                        exp = random.randint(2, 9)
                        coef = random.randint(1, 9)
                        values.append(coef * x ** exp)
                    else:
                        coef = random.randint(1, 5)
                        values.append(coef * x)
                else:
                    values.append(random.randint(1, 10))
            equation = ""
            temp = [0, 0]
            for i in range(size):
                temp[0] = random.choice(values)
                if temp[0] == x:
                    temp[1] = random.choice(operator[:-1])  # Исключаем операцию деления '/'
                else:
                    temp[1] = random.choice(operator)
                values.remove(temp[0])
                equation += str(temp[0]) + temp[1]
            equation = equation[:len(equation) - 1]
        elif T_level == 1:
            equation = x

        if x not in sympify(equation).free_symbols:
            continue

        break
    try:
        return sympify(equation.replace(' ', ''))
    except TypeError:
        return sympify(equation)


def replace_log_with_random(result):
    # Создаем регулярное выражение для поиска "log"
    pattern = re.compile(r'log')

    # Функция для замены
    def replace_log(match):
        #return "log_" + '{' + str(random.randint(2, 9)) + '} '
        return "log_" + str(random.randint(2, 9))

    # Заменяем "log" на "log_" с помощью функции
    return pattern.sub(replace_log, result)
def replace_log_with_random(result):
    pattern = re.compile(r'log')

    def replace_log(match):
        return "log_" + str(random.randint(2, 9)) + " "

    return pattern.sub(replace_log, result)
def replace_log_with_random_out(result):
    pattern = re.compile(r'log')

    def replace_log(match):
        return "log_" + str(random.randint(2, 9)) + " "

    return pattern.sub(replace_log, result)

def convert_to_sympy_format(expression):
    # Словарь замен
    replace_dict = {
        "sqrt": "sqrt",
        "sin": "sin",
        "cos": "cos",
        "tan": "tan",
        "ctg": "cot",
        "exp": "exp",
        "log": "log",
        "ln": "ln",
        "arcsin": "asin",
        "arccos": "acos",
        "arctan": "atan",
        "arcctg": "acot"
    }

    # Замена каждого ключа в выражении на его значение из словаря
    for key, value in replace_dict.items():
        expression = expression.replace(key, value)

    return sympify(expression)
