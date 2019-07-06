from numpy.random import randn
import numpy as np

data = randn(4,4)

data.shape
data.dtype
data.ndim

arr = np.array(data)

data2 = [[1,2,3,4],[3,4,5,6]]
arr2 = np.array(data2)

r = np.ones((3,6))
q = np.zeros((2,3,4,6))
w = np.arange(15)

arr3 = np.arange(20).reshape((2,10))

arr4 = np.random.randn(6,3)
print(arr4)
