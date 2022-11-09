import os

word = str(input('Enter a word to find in text file : '))

dir = os.getcwd() + '\Experiment 6'

os.chdir(r'{}'.format(dir))

temp_word = ''
count = 0
with open('intro.txt') as reader:
    for line in reader:
        for character in line:
            if character == ' ':
                if temp_word == word:
                    count+=1
                temp_word =''
            else:
                temp_word += character

print('Number of times the word "{}" occurs = {}'.format(word,count))