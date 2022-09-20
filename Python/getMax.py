def getMax(n1, n2):
    return n1 if n1 > n2 else n2


num1 = int(input('Enter a number: '))
num2 = int(input('Enter another number: '))

print('Greater number is : ' + str(getMax(num1, num2)))
