# Question 2

Write a program that, prints a `pine tree` consisting of triangles of 
increasing sizes, filled with a character (eg. `*` or `+` or `$` etc).
Your program should interact with the user to read the number of triangles 
in the tree and the character filling the tree.

Your implementation should include the following functions:

a. `void printShiftedTriangle(int n, int m, char symbol)`
   prints an n-line triangle, filled with symbol characters, shifted m spaces 
   from the left margin.
   
   For example, if we call `printShiftedTriangle(3, 4, '+')`, the expected 
   output is:
   
    |      +
    |     +++
    |    +++++
    
   where the pipe characters depict the left margin, and the `+` characters 
   in the bottom row begin 4 spaces from the margin.

b. `void printPineTree(int n, char symbol)`
   prints a sequence of n triangles of increasing sizes (the smallest 
   triangle is a 2-line triangle), which form the shape of a pine tree. The 
   triangles are filled with the symbol character.
   
   For example, if we call `printPineTree(3, '#')`, the expected output is:
   
    |   #
    |  ###
    |   #
    |  ###
    | #####
    |   #
    |  ###
    | #####
    |#######
