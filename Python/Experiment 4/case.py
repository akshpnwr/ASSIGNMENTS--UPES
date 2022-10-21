

def changeCase(string):
    if(not string.isupper()):
        return string.upper()
    if(not string.islower()):
        return string.lower()

str1 = 'This is a string'
str2 = 'THIS IS A STRING'

changedStr1 = changeCase(str1)
changedStr2 = changeCase(str2)

print(changedStr1)
print(changedStr2)