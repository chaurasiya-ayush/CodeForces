t = int(input())
for _ in range(t):
    n = int(input())
    count2 = count3 = 0
    while n % 2 == 0:
        n //= 2
        count2 += 1
    while n % 3 == 0:
        n //= 3
        count3 += 1   
    if n != 1 or count2 > count3:
        print(-1)
    else:
        print(2 * count3 - count2)
