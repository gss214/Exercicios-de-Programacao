import math

def calc(p1, p2, h, V, a):
    g = 9.80665
    pi = 3.14159
    rad = a * pi/180.0
    vx = V * math.cos(rad)
    vy = V * math.sin(rad)
    t = vy + math.sqrt(pow(vy, 2) + 2 * g * h)
    max = t * vx / g
    if max < p2 + 1e-9 and max > p1 - 1e-9:
        print ("%.5f" % max, "-> DUCK")
    else: 
        print ("%.5f" % max, "-> NUCK")


while True:
        try:
            h = float (input())
            line = input()
            p1, p2 = [int(n) for n in line.split()]
            j = int (input())
            for i in range (j):
                line = input()
                a, V = [float(n) for n in line.split()]
                calc (p1, p2, h, V, a)
        except EOFError:
            break

# https://www.youtube.com/watch?v=l7IOHyt5zsM (visto em 18/04/2020)