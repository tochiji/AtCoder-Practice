N = int(input());
A = list(map(int,input().split()))

def lcm(a):
    from fractions import gcd
    x = a[0]
    for i in a:
        x = (x * i) // gcd(x, i)
    return x

l = lcm(A)
ans = 0
for i in A:
	ans += l//i

MOD = 10**9+7
print(ans%MOD)