## Exercise 1 basic_output
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.9(a).
What the program does: The Question asked the user to output a message to the console
Concepts used:printf
How it works: The programs is executed by the printf statement receiving the message it is meant to display on the console in qoutes
Run Example:
Have a nice day

## Exercise 2 input_process_output
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.16.
What the program does:The program prompts the user to enter two integer values . It then computes their sum, product,  difference,  quotient, and remainder, displaying each calculated result to the console.
Concepts: standard input/output (printf, scanf), arithmetic operators (+, *, /, %), standard math functions (fabs).
How it works: the user is prompted to input to intgers x and y then are processed using thr arithmetic operates, stored and are displayed on the Console.
Run Example:
Enter value of x: 17
Enter value of y: 5
Sum: 22
Product: 85
Difference: 12
Quotient: 3
Remainder: 2


## Exercise 3_decsion
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.22.
What the program does: The program asks the user to enter an integer, checks whether the number is even or odd using the modulus operator within a conditional decision structure, and prints the corresponding result to the screen.
Concepts :if else  statement, modulus operator (%), equality operator (==)
How it works:The program gets an intger and then in the if statement it checks whether the number when divided by 2 leaves a reminder or not,then the message is then displayed.
Run Example:
Enter an integer: 24
24 is an even number.


## Exercise 4_basic_loops
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 3, Exercise 3.40.
What the program does:The program keeps on displaying the multiples of the integer 3 without stopping.
Concepts: For statement,(++) Increment Operator
How it Works: The For loop receives it agreements in tis brackets and it is prompted to add 3 to the intial value and increment continues without stopping creating an Infinite Loop.
Run Example:
3
6
9
12
...


## Exercise 5_loop_calculation
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 4.11
What the program does:The program  finds all the multiples of 7 between 1 and 100 and displays their sum
Concepts: For statement
How it works: The for statement starts at 7 and then gets increment of 7 not greater than 100, then values are added on to the sum, then displayed outside the loop.
Run Example:
7 14 21 28 35 42 49 56 63 70 77 84 91 98

## Exercise 6_loop_input
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 4.9
What the program does: The program prompts the user of a number of intgers and the sum and average of the calculated and displayed 
Concepts:Arithmetic operations, typeCasting
How it works:The program receives   numbers  to be executed in the for loop and for each iteration a number is inputed and added on to the sum and the average is obtained by dividing the total by the number of numbers entered
Run Example:
Enter total number of items: 4
Enter number 1: 10
Enter number 2: 20
Enter number 3: 30
Enter number 4: 40

Sum: 100
Average: 25.00


## 07_loop_decision
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 4.2 (a)
What the program does:The program calculates and prints the total sum of all odd integers from 1 to 99 using a loop and a conditional check.
Concepts:for loop, modulus operator (%), inequality operator (!=)
How it works:The program initializes an accumulator variable sum to 0, iterates a loop variable count from 1 to 99, evaluates whether count is odd using count % 2 != 0, adds count to sum whenever the condition is true, and prints the final accumulated value upon loop completion.
Run Example:
Sum of odd integers from 1 to 100 is: 2500

## 08_interactive_program
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 3, Exercise 3.19
What the program does:The program repeatedly calculates and displays the simple interest charge for multiple loans based on principal, annual interest rate, and   days, continuing until the user enters -1 for the principal amount to terminate execution.
Concepts:Sentinel value (-1),formatting specifiers(%f)
How it works:The program prompts the user for the initial loan principal and enters a while loop that continues as long as the principal does not equal -1, executing the simple interest formula (principal * rate * days) / 365.0 on each iteration before prompting for the next principal value to re-evaluate the loop condition.
Example Run:
Run Example:
Enter loan principal (-1 to end): 30000
Enter interest rate: .25
Enter term of the loan in days: 125
The interest charge is UGX 2568.493151
Enter loan principal (-1 to end): -1


