# print('Please enter a string')
enteredString = input('Please enter a string ')

print(enteredString)
spaces = 0
alphabets = 0
for i in enteredString:
    if enteredString[i] == ' ':
        spaces += 1
    else:
        alphabets += 1


print('Number of alphabets : ' + str(alphabets))
print('Number of spaces : ' + str(spaces))
