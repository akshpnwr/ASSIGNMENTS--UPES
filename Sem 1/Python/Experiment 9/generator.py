def table(num):
    for i in range(1,num+1):
        yield num*i

n = 10
a = table(n)

print('Using generator as an iterator to get table')

print('\nTable of {}'.format(n))

for i in range(1, n+1):
    print('{} X {} = {}'.format(n,i,next(a)))
