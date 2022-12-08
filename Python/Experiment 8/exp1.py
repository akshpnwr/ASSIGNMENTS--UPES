class Rectangle:
    def __init__(self, length, breadth):
        self.length = length
        self.breadth = breadth
    #Overriden method
    def area(self):
        return self.length*self.breadth;


class Square(Rectangle):
    def __init__(self, side):
        self.side = side
    # Overriding method
    def area(self):
        return self.side*self.side


l = int(input('Enter length of the rectangle : '))
b = int(input('Enter breadth of the rectangle : '))

r1 = Rectangle(l,b)

print('Area of the rectangle is ' + str(r1.area()))

side = int(input('Enter side of the square : '))

s1= Square(side)
print('Area of the square is : '+str(s1.area()))