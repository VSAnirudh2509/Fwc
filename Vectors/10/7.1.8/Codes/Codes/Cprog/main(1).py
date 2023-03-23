import numpy as np
import matplotlib.pyplot as plt
import matplotlib
import subprocess
import shlex
import warnings
warnings.simplefilter(action='ignore',category=FutureWarning)


P=np.loadtxt('a.dat',dtype='float')
Q=np.loadtxt('b.dat',dtype='float')


def line_gen(P,Q):
 len=10
 dim = P.shape[0]
 x_PQ = np.zeros((dim,len))
 lam_1 = np.linspace(0,1,len)
 for i in range(len):
  temp1 = P + lam_1[i]*(Q-P)
  x_PQ[:,i]= temp1.T
 return x_PQ

x_PQ = line_gen(P,Q)

#Plotting all lines
plt.plot(x_PQ[0,:],x_PQ[1,:],label='$PQ$')


#Labeling the coordinates
tri_coords = np.vstack((P,Q)).T
plt.scatter(tri_coords[0,:],tri_coords[1,:])
vert_labels = ['P','Q']
for i, txt in enumerate(vert_labels): 
    plt.annotate(txt,(tri_coords[0,i], tri_coords[1,i]), textcoords="offset points", xytext=(0,10), ha='center')  
 
plt.xlabel('$x-axis$') 
plt.ylabel('$y-axis$') 
plt.legend(loc='best') 
plt.grid() # minor 
plt.axis('equal')
plt.text(2,-3,'   (2,-3)') 
plt.text(10,3,'   (10,3)')
plt.show()
