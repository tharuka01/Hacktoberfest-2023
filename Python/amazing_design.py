### This piece of source code will create a beautiful design as output.
## Just download the file and run it to see the magic 
from turtle import *
import colorsys as cs
bgcolor("black")
speed(0)
pensize(3)
hue = 0.0
for i in range(300):
    pencolor(cs.hsv_to_rgb(hue,1,1))
    hue += 0.005
    rt(i)
    circle(50,i)
    fd(i)
    lt(91)
done()
