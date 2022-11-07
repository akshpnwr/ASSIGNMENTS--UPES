import math
import random

num =  int(input('Enter a number : '))
rootOfNum = math.sqrt(num)

randomNumber  = random.randint(1,10);

print('Random number between 1-10 '+ str(randomNumber));
print('Square root of '+str(num) + ' is ' + str(rootOfNum));