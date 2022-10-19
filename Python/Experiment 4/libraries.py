
# n1 = int(input('Enter a number : '))
# n2 = int(input('Enter another number : '))

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