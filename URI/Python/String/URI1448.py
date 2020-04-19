def solve (c, t1, t2):
    c1 = c2 = 0
    for i in range (len(c)):
        if i < len(t1) and c[i] == t1[i]: c1 += 1
        if i < len(t2) and c[i] == t2[i]: c2 += 1
    if c1 > c2: return 1
    elif c1 < c2: return 2
    else: 
        for i in range (len(c)):
            if i < len(t1) and c[i] == t1[i] and c[i] != t2[i]: return 1
            if i < len(t2) and c[i] == t2[i] and c[i] != t1[i]: return 2
        return 3

n = int (input())
for i in range (n):
    c = input()
    t1 = input()
    t2 = input()
    j = solve (c, t1, t2)
    print ("Instancia %d" % (i+1))
    if j == 1:
        print ("time 1")
    elif j == 2:
        print ("time 2")
    else:
        print ("empate")
    print ("")

# Executar o codigo em python 2, trocando input() por raw_input()
