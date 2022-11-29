import math

class Circle:
    def __init__(self, radius):
        self.radius = radius
    def area(self):
        return math.pi * self.radius*self.radius
    def circumference(self):
        return 2*math.pi*self.radius


radius = int(input('Please enter radius of the circle : '))
c1 = Circle(radius)
print('Area of the circle with radius {} is {}'.format(radius, c1.area()))
print('Circumference of the circle with radius {} is {}'.format(radius, c1.circumference()))
