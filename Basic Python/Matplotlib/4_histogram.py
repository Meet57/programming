import matplotlib.pylab as plt

population_ages = [22,55,62,45,21,22,34,42,42,4,99,102,110,120,121,122,130,111,115,112,80,75,65,45,44,43,42,48]
#ids = [x for x in range(len(population_ages))]

bins = [0,10,20,30,40,50,60,70,80,90,100,110,120,130]
#bins are basically the set, which contains bars
plt.hist(population_ages,bins)

plt.xlabel('X')
plt.ylabel('Y')

plt.legend()

plt.title('Intresting Graph\nCheck it Out')
plt.show()
