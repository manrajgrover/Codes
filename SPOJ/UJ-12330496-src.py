import sys

while True:
    b, e = map(int,raw_input().split());
    if not(b or e):
    	break
    print(b**e)