import bisect
import math
import sys
sys.setrecursionlimit(10**6)

H, W = map(int, input().split())
S = [list(input()) for _ in range(H)]

dx = [1, 1, 1, 0, 0, -1, -1, -1]
dy = [-1, 0, 1, -1, 1, -1, 0, 1]

for h in range(H):
    l = ""
    for w in range(W):
        if S[h][w] == '#':
            l += '#'
            continue
        num = 0
        for d in range(8):
            nx = h + dx[d]
            ny = w + dy[d]
            if nx < 0 or ny < 0 or nx >= H or ny >= W: continue
            if S[nx][ny] == '#' : num+=1
        l+=str(num)
    S[h] = l


for i in range(H):
    print(S[i])
