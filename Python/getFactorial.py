def getFactorial(num):
    if num == 1:
        return 1
    else:
        return num*getFactorial(num-1)


print(getFactorial(5))
