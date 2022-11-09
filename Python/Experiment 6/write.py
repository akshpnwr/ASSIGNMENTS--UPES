import os

content = str(input('Enter contents to insert in the file : '))

dir = os.getcwd() + '\Experiment 6'

os.chdir(r'{}'.format(dir))

with open('write.txt','w') as writer:
    writer.write(content)

with open('write.txt') as reader:
    print(reader.read())