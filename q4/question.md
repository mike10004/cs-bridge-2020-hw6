# Question 4

## Part A

Implement a function `void printDivisors(int num)`.

This function is given a positive integer num, and prints all of num’s 
divisors in an ascending order, separated by a space.

For Example, if we call `printDivisors(100)`, the expected output is:

    1 2 4 5 10 20 25 50 100

Implementation requirement: Pay attention to the running time of your 
function. An efficient implementation would run in Θ(sqrt(num)).

## Part B

Use the function above when implementing a program that reads from the 
user a positive integer (≥2), and prints all its divisors.

Your program should interact with the user exactly as it shows in the 
following example:

    Please enter a positive integer >= 2: 100
    1 2 4 5 10 20 25 50 100