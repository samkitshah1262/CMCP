import numpy as np

def zoom(a, factor):
    a = np.asarray(a)
    slices = [slice(0, old, 1/factor) for old in a.shape]
    idxs = (np.mgrid[slices]).astype('i')
    return a[tuple(idxs)]


a=int(input())
b=int(input())
mat=[]
for i in range(b):
    t=list(map(str,input().split))
    mat.append(t)
mat=np.array(mat)
print(mat.shape)
mat.transpose()
np.rot90(mat,k=1, axes=(0, 1))
np.flip(mat,axis=1)
print(zoom(mat,2))

