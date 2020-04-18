import math
 
dollar = 0
n = int(input())
 
while (n > 0):
    if (n/100 >= 1):
        dollar += math.floor(n/100)
        n %= 100
    elif (n/20 >= 1):
        dollar += math.floor(n/20)
        n %= 20
    elif (n/10 >= 1):
        dollar += math.floor(n/10)
        n %= 10
    elif (n/5 >= 1):
        dollar += math.floor(n/5)
        n %= 5
    elif (n/1 >= 1):
        dollar += math.floor(n)
        break
print(int(dollar))