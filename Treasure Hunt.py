for _ in range(int(input())):
    X, Y, A = map(int, input().split())
 
    if A%(X+Y) < X:
        print("NO")
    else:
        print("YES")