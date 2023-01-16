class Add:
    def __init__(self, value):
        self.value = value

    def __add__(self, obj):
        return (self.value + obj.value)%8


n1 = int(input('Enter number 1 : '))
n2 = int(input('Enter number 2 : '))

obj1 = Add(n1)
obj2 = Add(n2)

print('Sum of {} and {} = {} '.format(n1, n2, n1 + n2))
print('Restricting the sum to modulo 8')
print('Sum of {} and {} = {} '.format(obj1.value, obj2.value, obj1 + obj2))

