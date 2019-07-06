import matplotlib.pylab as plt

x = [1,2,3,4,5,6,7,8]
y = [5,2,4,2,1,4,5,2]

plt.scatter(x,y,label='plus',color='blue',marker='*',s=500)

#google : matplot lib marker

plt.xlabel('X')
plt.ylabel('Y')

plt.legend()

plt.title('Intresting Graph\nCheck it Out')
plt.show()
