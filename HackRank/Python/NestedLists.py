if __name__ == '__main__':
    lista = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        lista.append((name, score))

lista.sort(key=lambda x: (x[1], x[0]))

print(min(lista))
for i in range(1, len(lista)):
    pass