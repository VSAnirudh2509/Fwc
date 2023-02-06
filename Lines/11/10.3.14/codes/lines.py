import numpy as np
import matplotlib.pyplot as plt
from numpy import linalg as LA
def perp_foot(n,cn,P):
    omat=[[0,1],[-1,0]]
    m = omat@n
    N=np.block([[n],[m]])
    p = np.zeros(2)
    p[0] = cn
    p[1] = m@P
    x_0=np.linalg.inv(N)@p
    return x_0

n=np.array(([3,-4]))
p=np.array(([-1,3]))
m=np.array(([4,3]))
c=16
F=perp_foot(n,c,p)
F=np.array(F)
print(F)


# Define x and y values 
x=np.linspace(-5,5,100)
y=(16-3*x)/4
plt.plot(p,'o-g', label='perpendicular')
plt.plot(x,y, '-r',label='3x-4y-16=0')     #plt.plot(x,y2, 'o--g',label='perpendicular')
plt.xlabel('x')
plt.ylabel('y')
plt.legend(loc='upper left')
plt.text(-1,3,'p')
plt.text(2.72,-1.7,'q')
plt.axis('equal')
plt.grid()
plt.show()
