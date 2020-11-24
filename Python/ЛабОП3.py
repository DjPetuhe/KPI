from math import fabs, sqrt, ceil

x = float(input("х ="))
k = 0
ak = 1
sum1 = 0
while (k < 10 or fabs(ak) > 10**(-4)):
    k += 1
    ak = x / (sqrt(k)*(k+2))
    sum1 += ak
    print("k=" + str(k) + ", ak=" + str(round(ak, 10)) +
          ", sum1=" + str(round(sum1, 10)))
print("Result = ", sum1)
