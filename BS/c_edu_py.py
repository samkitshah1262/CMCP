# import numpy as np


def samkit(x):
    return x+1

def dummy(x):
    return x


def moduloMultiplication(a, b, mod):
	res = 0
	a %= mod

	while (b):
		if (b & 1):
			res = (res + a) % mod

		a = (2 * a) % mod
		b >>= 1 # b = b / 2

	return res

x, y = 0, 1

def gcdExtended(a, b):
	global x, y

	if (a == 0):

		x = 0
		y = 1
		return b

	gcd = gcdExtended(b % a, a)
	x1 = x
	y1 = y
	x = y1 - int(b / a) * x1
	y = x1

	return gcd


def modInverse(a, m):

	g = gcdExtended(a, m)

	if (g != 1):
		return -1
	return (x % m + m) % m


def modDivide(a, b, m):

	a = a % m
	inv = modInverse(b, m)
	if (inv == -1):
		return 0
	else:
		return (inv * a) % m


def nCr(n, r, p):
	if (r > n):
		return 0

	if (r > n - r):
		r = n - r

	x = 1

	for i in range(1, r + 1):

		x = moduloMultiplication(x, (n + 1 - i), p)

		x = modDivide(x, i, p)

	return x

l = [[1,0,1]]
MOD = 998244353

for n in range(4,61,2):
    dummy=[]
    for i in range(1,n+1):
        dummy.append(1)
    wins = nCr(n-1,n//2-1,MOD)
    wins+=l[-1][1]
    wins%=MOD
    losses = nCr(n,n//2,MOD)
    for i in range(1,n+1):
        dummy.append(i)
    losses-=wins+1
    if (losses<0):
        losses+=MOD
    l.append([wins, losses,1])

# print(list(l))
for _ in range(int(input())):
    n=int(input())
    hi=[]
    for i in range(1,n+1):
        hi.append(samkit(i))
    print(*l[n//2-1])