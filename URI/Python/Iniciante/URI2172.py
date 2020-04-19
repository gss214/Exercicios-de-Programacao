while (True):
    line = input()
    x, y = [int (i) for i in line.split()]
    if x == 0 and y == 0: break
    else: print (x*y)