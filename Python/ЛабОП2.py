import re


# Функция, проверяющая подходит ли введенное число условию задачи
def check(a):
    if (re.match((r"^\d+\.?\d*$"), a)):
        return float(a)
    else:
        print("Вы ввели неприемлимое значение.")
        quit()


# Ввод данных с проверкой через функцию
x = input("Введіть довжину першої сторони трикутника:")
x = check(x)
y = input("Введіть довжину другої сторони трикутника:")
y = check(y)
z = input("Введіть довжину третьої сторони трикутника:")
z = check(z)

# Проверяем, существует ли треугольник с такими сторонами и выводим ответ
if (x < y + z):
    if (z < x + y):
        if (y < x + z):
            print("Існує.")
            exit()
print("Не існує.")
quit()
