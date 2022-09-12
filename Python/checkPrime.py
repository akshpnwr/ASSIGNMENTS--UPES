import math


def isPrime(num):
    maxVal = int(math.sqrt(num))
    for i in range(2, maxVal):
        if num % i == 0:
            return False
    return True


print(isPrime(53))
