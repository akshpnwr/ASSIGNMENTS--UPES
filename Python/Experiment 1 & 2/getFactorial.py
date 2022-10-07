def getFactorial(num):
    if num == 1:
        return 1
    else:
        return num*getFactorial(num-1)


num = int(input('Enter a number: '))
print('Factorial of ' + str(num) + ' is ' + str(getFactorial(num)))
