
# n1 = int(input('Enter a number : '))
# n2 = int(input('Enter another number : '))

import math
from random import randint, random


n1 = 4
n2 = 9

print('Minimum of ' + str(n1) + ' and '+str(n2) + ' is ' + str(min(n1,n2)))
print('Maximum of ' + str(n1) + ' and '+str(n2) + ' is ' + str(max(n1,n2)))

print('Binary of ' + str(n1) + ' is ' + bin(n1))
print('Octal of ' + str(78) + ' is ' + oct(78))
print('Hex of ' + str(198) + ' is ' + hex(198))

print(str(n1) + ' to the power 2 = '+ str(pow(n1,2)))
print('Evaluating "1+2" through eval() : ' + str(eval('1+2')))

prog = 'print("The sum of 5 and 10 is", (5+10))'
exec(prog)

print('Unicode of 65 107 97 115 104 "using chr()"= ', end='')
print(chr(65), chr(107),chr(97),chr(115),chr(104))
print('ASCII of A K A S H "using ord()"= ', end='')
print(ord('A'), ord('k'),ord('a'),ord('s'),ord('h'))

print('Round of 6.7 : ' + str(round(6.7)))

print('Random Number : ' + str(random()))
print('Random Integer from 1-5 : ' + str(randint(1,5)))

print('Sin of π/2 : '+ str(math.sin(math.pi/2)))
print('Cos of 0 : '+ str(math.cos(0)))
print('Tan of 0 : '+ str(math.tan(0)))

print('Ceil of 7.8 : ' + str(math.ceil(7.8)))
print('Floor of 7.8 : ' + str(math.floor(7.8)))

print('Pi in degrees : '+ str(math.degrees(math.pi)))
