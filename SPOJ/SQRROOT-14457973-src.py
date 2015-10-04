import sys
import math
import decimal

def find_sqrt(n):
    nd = decimal.Decimal(n)
    with decimal.localcontext() as ctx:
        ctx.prec=n.bit_length()
        i=int(nd.sqrt())
    return i

t=int(sys.stdin.readline())
while t:
	n=int(sys.stdin.readline())
	ans=int(find_sqrt(n))
	print(ans)
	t=t-1