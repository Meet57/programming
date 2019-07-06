import matplotlib.pylab as plt

days = [1,2,3,4,5]
sleeping = [7,8,6,11,7]
eating = [2,3,4,3,2]
working = [7,8,7,2,2]
playing = [8,5,7,8,13]

slices = [7,2,2,13]
activities = ['sleeping','eating','working','playing']

cols = ['r','g','y','b']

plt.pie(slices,
        labels = activities ,
        colors = cols,
        startangle=90,
        shadow=True,
        explode=(0,0.1,0,0.2),
        autopct='%1.1f%%')

#plt.xlabel('X')
#plt.ylabel('Y')

plt.legend()

plt.title('Intresting Graph\nCheck it Out')
plt.show()
