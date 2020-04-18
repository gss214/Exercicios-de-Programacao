def fact(n):
    if n == 0 or n == 1:
        return 1    
    else:
        fact = n
        for i in range (n-1, 0, -1):
            fact *= i
        return fact

while True:
        try:
            line = input()
            x, y = [int(n) for n in line.split()]
            print (fact(x) + fact(y))
        except EOFError:
            break
