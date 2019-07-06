import matplotlib.pylab as plt

x = [2,4,6,8,10]
y = [6,3,7,9,2]

x2 = [1,3,5,7,9]
y2 = [1,4,8,3,1]

plt.bar(x,y,label="Bar-1",color='red')
plt.bar(x2,y2,label="Bar-2",color='blue')

plt.xlabel('X')
plt.ylabel('Y')

plt.legend()

plt.title('Intresting Graph\nCheck it Out')
plt.show()
