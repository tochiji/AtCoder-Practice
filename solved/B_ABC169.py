N = int(input())
A = list(map(int, input().split()))

ans = 1
l = 0;
flag = 0

for i in range(N):
    if A[i]== 0:
        print(0)
        exit(0)

    l+=(len(str(A[i])) -1)
    if l>18:
        flag=1
        continue
    
    ans*=A[i]
    if ans > 1000000000000000000:
        flag = 1

if flag == 0:
    print(ans)
else :
    print(-1)