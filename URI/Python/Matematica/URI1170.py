n = int (input())
for i in range (n):
    c = 0
    x = float (input())
    while (x > 1):
        x = x/2
        c += 1
    print (c, "dias")