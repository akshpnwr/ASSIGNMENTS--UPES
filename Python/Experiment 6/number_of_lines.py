
import os

dir = os.getcwd() + '\Experiment 6'

os.chdir(r'{}'.format(dir))

no_of_lines = 0

with open('intro.txt') as reader:
    for line in reader:
        no_of_lines +=1

print('Number of lines = ' + str(no_of_lines))
