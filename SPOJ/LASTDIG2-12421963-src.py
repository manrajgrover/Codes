import math

t=raw_input()
while t:
	input=raw_input().split()
	a=input[0]
	b=input[1]
	pos=long(b)%4
	if long(a)>0 and long(b)==0:
		l=1
	elif pos==0:
		m=long(a)*long(a)*long(a)*long(a)
		l=m%10
	elif pos==1:
		l=long(a)%10
	elif pos==2:
		m=long(a)*long(a)
		l=m%10
	elif pos==3:
		m=long(a)*long(a)*long(a)
		l=m%10
	print l
	t=long(t)-1