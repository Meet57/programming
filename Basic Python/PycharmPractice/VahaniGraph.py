import matplotlib.pylab as plt

x = list(range(0,10))
y = [i*i for i in x]

plt.plot(y,x)

plt.xlabel('Love')
plt.ylabel('Vahani Family')

plt.title('Vahani Scholarship')

plt.show()