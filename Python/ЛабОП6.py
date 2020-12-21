def factorial(y):
    y = int(y)
    factorial1 = 1
    for i in range(1, y+1):
        factorial1 *= i
    return factorial1


def function1(x):
    x = float(x)
    for k in range(0, 6):
        sum1 = x**(2*k) / factorial(2*k)
        sum2 = x**(2*k + 1) / factorial(2*k + 1)
    return (sum1 / sum2)


a = float(input("а = "))
Y = (2 * function1(0.5) - 3 * function1(a-0.1))/(5 - function1(4*a - 1))
print("Y = ", Y)
