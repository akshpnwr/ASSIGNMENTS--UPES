import os

dir = os.getcwd() + '\Experiment 6'

os.chdir(r'{}'.format(dir))



lc = 0
uc = 0
v=0
cons = 0
total = 0

vowels = ['a','e','i','o','u']

with open('file.txt') as reader:
    for line in reader:
        for character in line:
            total+=1
            if character.islower():
                lc+=1
            if character.isupper():
                uc+=1
            if character in  vowels:
                v+=1
            if character not in  vowels:
                cons+=1


print('Total {}'.format(total))
print('Lower case {}'.format(lc))
print('Upper case {}'.format(uc))
print('Vowel {}'.format(v))
print('Consonants {}'.format(cons))

