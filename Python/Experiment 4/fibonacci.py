def fibonacci(a,b,limit):
    print(a, end=' ')
    if limit==1:
        return 
    else:
        fibonacci(b,a+b,limit-1)

limit = int(input('Enter the limit '))
fibonacci(0,1,limit)