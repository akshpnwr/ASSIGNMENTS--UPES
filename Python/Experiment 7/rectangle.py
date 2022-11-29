class Rectangle:
    def __init__(self, length, breadth):
        self.length = length
        self.breadth = breadth
    
    def area(self):
        return self.length*self.breadth;

    def perimeter(self):
        return 2*(self.length + self.breadth)


length = int(input('Please enter length of the rectangle : '))
breadth = int(input('Please enter breadth of the rectangle : '))

r1 = Rectangle(length,breadth)


print('The length and breadth of the rectangle is {} {}'.format(r1.length, r1.breadth))
print('Area of the rectangle is {}'.format(r1.area()))
print('Perimeter of the rectangle is {}'.format(r1.perimeter()))

