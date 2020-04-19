def solve(n):
    leds = 0
    for i in range(len(n)):
        if n[i] == '0':
            leds += 6
        elif n[i] == '1':
            leds += 2
        elif n[i] == '2':
            leds += 5
        elif n[i] == '3':
            leds += 5
        elif n[i] == '4':
            leds += 4
        elif n[i] == '5':
            leds += 5
        elif n[i] == '6':
            leds += 6
        elif n[i] == '7':
            leds += 3
        elif n[i] == '8':
            leds += 7
        else:
            leds += 6
    print (leds, "leds")

n = int (input())
for i in range (n):
    x = input()
    solve(x)
