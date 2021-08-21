#dislike

t = int(input())
for i in range(t):
    arr = []
    k = int(input())

    j =1
    count = 1

    while count <= k:
        if j%3 != 0 and j%10 != 3:
            arr.append(j)
            count += 1
        j += 1
    print(arr[-1])


