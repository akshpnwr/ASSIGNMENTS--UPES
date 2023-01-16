import math


def primeOrNot(num):
    limit = int(math.sqrt(num))+1
    for i in range(2, limit):
        if (num % i == 0):
            return False
    return True


for i in range(1, 51):
    if (primeOrNot(i)):
        print(str(i)+' is a prime number')
