# mystr = "banana"
# myit = iter(mystr)

# print(next(myit))
# print(next(myit))
# print(next(myit))
# print(next(myit))
# print(next(myit))
# print(next(myit))


class IteratorClass:
    def __init__(self, iterable):
        self.iterable = iterable
        self.index = 0
    def __iter__(self):
        return self

    def __next__(self):
        temp = self.iterable[self.index]
        self.index += 1
        return temp


str = 'banana'

myIteratorClass = IteratorClass(str)

myiter = iter(myIteratorClass)

print(next(myiter))
print(next(myiter))
print(next(myiter))
print(next(myiter))
print(next(myiter))