# Question 1

import os

dir = os.getcwd() + '\Experiment 6' #Gives current working directory

os.chdir(r'{}'.format(dir)) #changes current working directory 

total = 0
lowerAlphabets = 0
upperAlphabets = 0

with open('intro.txt') as reader: 
    for line in reader: #Every line
        for character in line: #Every character in every line
            total+=1
            if character.islower():
                lowerAlphabets+=1
            elif character.isupper():
                upperAlphabets+=1


print('Total alphabets in the file = '+ str(total))
print('Total spaces in the file = ' + str(total-lowerAlphabets-upperAlphabets))
print('Total lowercase alphabets = ' +str(lowerAlphabets))
print('Total uppercase alphabets = ' +str(upperAlphabets))



