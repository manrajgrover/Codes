import sys
d=sys.stdin.readlines()
del d[0]
for s in d:
	n,m=s.split()
	print int(n)*int(m)