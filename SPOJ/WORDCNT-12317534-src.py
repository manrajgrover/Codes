import math

t=raw_input()
while t:
    s=raw_input()
    token=s.split()
    maximum=0
    count=0
    savedl=0
    for sub in token:
        if len(sub)==savedl:
            count=count+1
        else:
            savedl=len(sub)
            count=1
        if count>maximum:
            maximum=count
    print maximum
    t=int(t)-1