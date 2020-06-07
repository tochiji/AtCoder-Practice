N=int(input())
A=list(map(int, input().split()))
A=sorted(A,reverse=True)
if A[N-1] == 0:
  print(0)
  exit(0)

ans = 1
for i in range(N):
  ans*=A[i]
  if(ans>1000000000000000000):
    print(-1)
    exit(0)
print(ans)