t=raw_input()
while t:
	s=raw_input()
	q=s[::-1]
	if(s==q):
		print "YES"
	else:
		print "NO"
	t=long(t)-1
