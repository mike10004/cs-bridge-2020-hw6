#!/usr/bin/env python3

import json


def main():
    test_cases = []
    d = {
        'input': "{n}",
        'expected': "Please enter a positive integer >= 2: {n}\n{divisors} \n",
        'param_names': ["n", "divisors"],
        'test_cases': test_cases,        
    }
    #for n in [2, 3, 4, 5, 12, 16, 27, 51, 99, 100, 101, 256]:
    for n in list(range(2, 101)) + [101, 169, 256, 333]:
        divisors = []
        for i in range(1, n + 1):
            if n % i == 0:
                divisors.append(str(i))
        test_cases.append((n, ' '.join(divisors)))
    print(json.dumps(d, indent=2))
    return 0


if __name__ == '__main__':
    exit(main())
