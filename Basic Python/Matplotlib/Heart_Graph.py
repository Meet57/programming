import matplotlib.pylab as plt
import math as ma
import numpy as np

x = []
y = []

angles = list(range(0,5050))

for t in angles:
    x_corr = 16 * (ma.sin(ma.degrees(t)))**3
    y_corr =(13*ma.cos(ma.degrees(t)) - 5*ma.cos(ma.degrees(2*t)) - 2*ma.cos(ma.degrees(3*t)) - ma.cos(ma.degrees(4*t)))
    x.append(x_corr)
    y.append(y_corr)

plt.plot(x,y,color="blue",label="Maten57")
plt.title("Specially For You !")

plt.legend()
plt.show()
