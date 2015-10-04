import math
t=raw_input()
while t:
	n=raw_input()
	f=1
	while n>=1:
		f=long(f)*long(n)
		n=long(n)-1
	print f
	t=long(t)-1
