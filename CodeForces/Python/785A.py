sum = 0
n = int(input())
for i in range(n):
    s = input()
    if (s == 'Tetrahedron'):
        sum+=4
    elif (s == 'Cube'):
        sum+=6
    elif (s == 'Octahedron'):
        sum+=8
    elif (s == 'Dodecahedron'):
        sum+=12
    else:
        sum+=20
print(sum)
