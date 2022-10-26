
from typing import final


n1 = int(input('Enter an integer : '))
n2 = int(input('Enter another integer : '))

print('Dividing number 1  by number 2')
try:
    res=n1/n2
except:
    print('Cannot divide by zero')
else:
    print('Result is ' + str(res))
finally:
    print('Sum of n1 and n2 = ' + str(n1+n2))