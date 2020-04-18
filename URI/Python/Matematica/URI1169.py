import math
n = int (input())
for i in range (n):
    x = int (input())
    x = pow(2, x)
    x = x/12
    x = math.floor (x/1000)
    print ("%.0f" % x, "kg")
