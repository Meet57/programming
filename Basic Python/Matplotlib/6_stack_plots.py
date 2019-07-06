import matplotlib.pylab as plt

days = [1,2,3,4,5]
sleeping = [7,8,6,11,7]
eating = [2,3,4,3,2]
working = [7,8,7,2,2]
playing = [8,5,7,8,13]

plt.plot([],[],color='red'  ,label=sleeping,linewidth=5)
plt.plot([],[],color='blue' ,label=eating  ,linewidth=5)
plt.plot([],[],color='green',label=working ,linewidth=5)
plt.plot([],[],color='black',label=playing ,linewidth=5)

plt.stackplot(days,sleeping,eating,working,playing,colors=['red','blue','green','black'])

plt.xlabel('X')
plt.ylabel('Y')

plt.legend()

plt.title('Intresting Graph\nCheck it Out')
plt.show()
