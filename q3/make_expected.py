#!/usr/bin/env python3

import math


def eApprox(n):
    e = 0
    for i in range(n + 1):
        e += (1 / math.factorial(i))
    return e

def main():
    for i in range(1, 16):
        e = eApprox(i)
        print("n = {}\t{:1.29f}".format(i, e))
    return 0


if __name__ == '__main__':
    exit(main())
