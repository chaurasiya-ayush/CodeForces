t = int(input())
for _ in range(t):
    a, b, c = map(int, input().split())
    d1 = a - 1
    d2 = abs(b - c) + c - 1
    ans = 0
    if d1 <= d2:
        ans += 1
    if d1 >= d2:
        ans += 2
    print(ans)