n = int(input("Введите число, до которого мы будем искать число мерсена : "))
p = 2
while (2**p - 1 <= n):
    mers = 2**p - 1
    z = 1
    for k in range(2, mers):
        if (mers % k == 0):
            z = 0
    if (z == 1):
        print("p = ", p, ", mers = ", mers)
    j = 0
    while (j == 0):
        p += 1
        j = 1
        for i in range(2, p):
            if (p % i == 0):
                j = 0
