import matplotlib.pylab as plt

x = [1,2,3]
y = [5,7,4]
#legends-it the comment given to the line, it is a small box in top rightcorner
x2 = [1,2,3]
y2 = [10,14,12]

plt.plot(x,y,label='line 1')
plt.plot(x2,y2,label='line 2')

plt.xlabel('X_axis')
plt.ylabel('Y_axis')

plt.title('Intresting Graph\nCheck it Out')

plt.legend()

plt.show()
