RECURSION

0-puts_recursion
this is a function that prints a string using the recursion method followed by a new line
with the base case that if the string is empty nothing is printed
the recursive case is checking each char in the string individualy as it prints it on stdout until it reaches the null terminator that the base case checks
1-print_rev_recursion
this function prints a string similar to the previours one but this time the string is reversed
the base case being that if the string is empty nothing is printed
2-strlen_recursion
this function calculates the lenth of a string using recursion
the base case being if the string is empty then 0 is printed on stdout
the recursive case calcilates the lenth of the string adding one until the null terminator is reached
3-factorial
this function finds the factorial of any number
with the base case of if the number is less than 0 a -1 is printed since we can only calculate the factorial of positive ints
on the rewcusive case the factorial of an even smaller digit is calculated this is by redusing the value of the number on each instance
4-pow
this function returns x to the power if y
the base cases being that if y is zero -1 is printed and if y is equal to 0 then 1 is printed
the recursive case muntipies x with the result of recusively calling _pow_recursion with x and y - 1 untill the base case is reached
5-srqrt
this function finds the natural squre root of a number
the base case being that if the number is 0 then -1 is printed and if the result squared is grater than the number -1 is printed
the recusive case being if the result being increased by 1 until the point where the square of the result becomes equal to the number that the recursion stops
