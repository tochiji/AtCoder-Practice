from decimal import *
getcontext().prec = 50

a,b,c = map(Decimal,input().split())

if a==0 and b==0 and c==0:
    print(-1)
    exit(0)
elif a==0 and b==0:
    print(0)
    exit(0)
elif a==0:
    print(1)
    print(-c/b)
    exit(0)

D = b * b - 4 * a * c;
if D > 0:
    print(2)
    A = (-b+(b*b-4*a*c).sqrt())/(2*a)
    B = (-b-(b*b-4*a*c).sqrt())/(2*a)
    if A>B:
        print(B)
        print(A)
    else:
        print(A)
        print(B)
elif D == 0:
    print(1)
    getcontext().prec = 14
    print(-b/(2*a))
else:
    print(0)