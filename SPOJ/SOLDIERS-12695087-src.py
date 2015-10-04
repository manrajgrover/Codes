for i in range(input()):
	x = map(int,raw_input().split())
	if x[0]%2:
		m = x[0]/2+1
	else:
		m = x[0]/2
	if x[1]%2:
		n = x[1]/2 + 1
	else:
		n = x[1]/2
	
	print max(x[0]*n,x[1]*m)