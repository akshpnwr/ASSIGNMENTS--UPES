

# first pattern
"""
*
* *
* * *
* * * *
* * * * *
"""
for i in range(5):
    for j in range(i+1):
        print('*', end=' ')
    print()


#  second pattern
"""
      1
    2 1 2
  3 2 1 2 3
4 3 2 1 2 3 4
"""
spaces = 6
for i in range(1,5):
    for s in range(spaces):
        print(end=' ')
    
    temp = i
    
    while(temp>1):
        print(temp ,end=' ')
        temp-=1
    
    print(1,end=' ')

    for k in range(2,i+1):
        print(k,end=' ')
    print()
    spaces-=2
            
