arr = [int(i) for i in input().split()]
max = (max(arr))

for i in range (4):
    if (max - arr[i] != 0):
        print(max-arr[i])