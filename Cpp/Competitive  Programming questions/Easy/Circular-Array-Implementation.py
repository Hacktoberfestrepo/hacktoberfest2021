n,k,q = map(int,input().split())
k = k%n
a = list(map(int,input().split()))
for _ in range(q):
    m = int(input())
    print(a[m-k])
