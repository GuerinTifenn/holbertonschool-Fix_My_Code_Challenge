#!/usr/bin/python3
"""FizzBuzz implementation that prints "FizzBuzz" for multiples of 15"""


def fizzbuzz(n):
    for i in range(1, n + 1):
        if i % 15 == 0:
            print("FizzBuzz", end=" ")
        elif i % 3 == 0:
            print("Fizz", end=" ")
        elif i % 5 == 0:
            print("Buzz", end=" ")
        else:
            print(i, end=" ")

if __name__ == "__main__":
    fizzbuzz(50)
    print()
