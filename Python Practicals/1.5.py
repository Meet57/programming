#1.5 Write a Python program to find area of a rectangle and circle.

import math

rectangle = lambda a,b : a*b
circle = lambda a : 4*math.pi*a

print("Area of rectangle : ",rectangle(5,6))
print("Area of circle : ",circle(10))

