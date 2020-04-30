# April Circuits - q2
# https://www.hackerearth.com/challenges/competitive/april-circuits-20/algorithm/ab-string-5f6b213a/


def cost(arr, i, c, carr):
    if i == -1:
        c = arr.count('A')
        carr.append(c)
    for j in range(len(arr)):
        if arr[j] == 'A':
            c -= 1
            carr.append(c)
        else:
            c += 1
            carr.append(c)
    print(min(carr))


def eval(inp):
    cost(inp, -1, 1000, [])


t = int(input())
for i in range(t):
    drop = input()
    s = input()
    eval(s)
