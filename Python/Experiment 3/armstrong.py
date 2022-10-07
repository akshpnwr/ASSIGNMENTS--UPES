import math


def isArmstrong(num):
    temp = num
    sumOfCubes = 0
    while (temp):
        digit = int(temp % 10)
        sumOfCubes += math.pow(digit, 3)
        temp = int(temp/10)

    if sumOfCubes == num:
        return True
    return False


for i in range(1, 100):
    if (isArmstrong(i)):
        print(str(i) + ' is an armstrong')
