import math

# Returns the number if its prime else returns False


def isPrime(num):
    maxVal = int(math.sqrt(num))+1
    for i in range(2, maxVal):
        if num % i == 0:
            return False
    return True


numbers = [5, 2, 7, 10, 13, 4, 9, 15, 19]

for num in numbers:
    if isPrime(num):
        print(str(num) + ' is Prime')
    else:
        print(str(num) + ' is not Prime')
