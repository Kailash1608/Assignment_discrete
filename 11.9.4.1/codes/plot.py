import numpy as np
import matplotlib.pyplot as plt

data = np.loadtxt("values.dat", skiprows=1)

plt.close("all")

n = data[0:10, 0]
y_n = data[0:10, 2]

plt.stem(n, y_n, markerfmt='bo', linefmt='b-', basefmt='r-',label='y(n)') 

plt.xlabel('n')
plt.ylabel('y(n)')
plt.title(' Simulation v/s analysis')

plt.show()
