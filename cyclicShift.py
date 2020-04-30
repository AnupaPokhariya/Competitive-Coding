# April Circuits- q1
# https://www.hackerearth.com/challenges/competitive/april-circuits-20/algorithm/lets-shift-2-36d90caa/

import math


def fun(n, m, c):
    # print('va')
    # ln = math.ceil(math.log(n, 2))
    # ln = 2**math.ceil(math.log(ln, 2))
    ln = 16
    # print('bin-len', ln)
    if c == 'L':
        y = 2**(ln - m)
        x1 = n % y
        x2 = n // y
        res = (x1 * (2**m)) + x2
    else:
        # print('right')
        y = 2**m
        x1 = n % y
        x2 = n // y
        res = (x1 * (2**(ln-m))) + x2
    # print('eval', x1, x2)
    # print(res)


t = int(input())
for i in range(t):
    l = input()
    l = l.split()
    fun(int(l[0]), int(l[1]), l[2])