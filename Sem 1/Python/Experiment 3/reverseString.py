import string


string = input('Please enter a string : ')

for i in reversed(range(len(string))):
    print(string[i],end='')
