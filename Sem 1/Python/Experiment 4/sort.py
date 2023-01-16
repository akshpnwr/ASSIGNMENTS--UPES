

from os import listdir


def selectionSort(list):
    for i in range(len(list)):
        for j in range(i+1,len(list)):
            if(list[i]>list[j]):
                list[i], list[j] = list[j], list[i]

def bubbleSort(list):
    for i in range(len(list)):
        for j in range(0,len(list)-i-1):
            if(list[j]>list[j+1]):
                list[j], list[j+1] = list[j+1], list[j]

list = [4,2,3,6,1,5]


print('Before Sorting : ', end=' ')
print(list)

selectionSort(list)
print('After Sorting (Selection sort) : ', end=' ')

print(list)

list = [4,2,3,6,1,5]

bubbleSort(list)
print('After Sorting (Bubble sort) : ', end=' ')
print(list)
