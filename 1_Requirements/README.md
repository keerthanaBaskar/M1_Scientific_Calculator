## M1_Scientific Calculator
# ** SCIENTIFIC CALCULATOR **
  A Scientific Calculator or digital calculator is a type of electronic calculator, usually but not handheld,designed to calculate problem in science,Engineering,Mathematics etc.,
## Introduction
In this project, a version of scientific calculator program in c which will perform basic arithmetic operation like addition,subtraction,multiplication division,modulus along with some scientific and 
trignometric operations,depending on the input from the user.
## Research
The Scientific Calculator System does not involve any complex operations. It is easy to apply the operations in the systems to find the required result rather than 
spending the time by applying the techniques and formulas. Thus by finding and studying all these facts,the necessary functions has been implemented to get the proper results in a required or better way. 
## Objective
The main objective of this project are:
* To perform the required operation mentioned by the user.
* To meet the requirement by giving the same result as output.
## Cost and Featues
### Cost
The cost implementation of this project is minimal to none. Depending on the project extensions,how it is built and all the requirement will meet the cost and it can be varied accordingly to the market and business need.
### Features
| Feature ID | Feature Name | Features |
|------------|--------------|----------|
| F01 | Addition | add();takes the input form user and returns a+b |
| F02 | Subtraction | sub();takes the input from user and returns a-b |
| F03 | Multiplication | multiply();takes the input form user and returns a * b |
| F04 | Division | divide();takes the input form user and returns a/b |
| F05 | Modulus | mod();takes the input form user and returns a%b |
| F06 | Factorial | fact();takes the input form user and returns a! |
| F07 | Power | power();takes the input form user and returns a^b |
| F08 | Square | square();takes the input form user and returns a^2 |
| F09 | Cube | cube();takes the input form user and returns a^3 |
| F10 | Squareroot | squareroot();takes the input form user and returns sqrt(a) |
| F11 | Sine | sinx();takes the input form user and returns sin(a) |
| F12 | Cosine | cosx();takes the input form user and returns cos(a) |
| F13 | Tangent | tanx();takes the input form user and returns tan(a) |
| F14 | Secant | secx();takes the input form user and returns sec(a) |
| F15 | Cosecant | cosecx();takes the input form user and returns cosec(a) |
| F16 | Cotangent | cotx();takes the input form user and returns cot(a) |
## SWOT Analysis
### Strength:

   * It can solve the basic arithmetic operations.
   * Some complex operation such as square root and trignometric operations are performed.
### Weakness:

   * In case of trignometric calculations,it invloves most complex functions which leads to missing of values.
### Oppurtunities:
 
   * Exponential , Trignometric calculations can be implemented to higher.
### Threats:
    
   * If the user enters the high data than the fixed size, it throws error and return by quitting the function.
   * The user needs to enter the same fixed data to get the required output.
## *** 4 W's and 1H ***
 ### WHAT
   
   - This project deals with solving a mathematical operation.
 ### WHERE
 
   -It is used in schools,colleges,mathematics and in technology.
 ### WHEN
  
   - This project is widely used in many situation where it can be used in needed functions like trignometric operations.
 ### WHY
 
   - As this project is a simple function, it is easy to use for begineers.
 ### HOW
 
   - Implemented using simple switch cases and other functions in c.
   - It is implemented in C language for both Windows and Linus OS.
   - It is developed using multifile approach.
## Detail Requirements:
 
 ## High_Level_Requirements:
  
  | ID | DESCRIPTION | STATUS | Category |
  |-------|-------|-------|------------------|
  | H_01 | User shall view the operations available | Implemented | Technical |
  | H_02 | Selection of user choice | Implemented | Technical |
  | H_03 | Arithmetic operations | Implemented | Technical |
  | H_04 | Single input operations | Implemented | Technical |
  | H_05 | Trignometric Operations | Implemented | Technical |
  | H_06 | Logarithmic Operations | Not Implemented | Technical |
  | H_07 | Exit the program | Implemented | Technical |
  
  ## Low_Level_Requirements
  
  | ID | DESCRIPTION | HLR-ID | STATUS (Implemented/Future) | 
  |-------|-------|-------|-------|
  | L_01 | List of operations displayed | H_01 | Implemented |
  | L_02 | Input the user | H_02 | Implemented |
  | L_03 | Perform the addition for 1 | H_03 | Implemented |
  | L_04 | Perform the subtraction for 2 | H_03 | Implemented |
  | L_05 | Perform the multiplication for 3 | H_03 | Implemented | 
  | L_06 | Perform the division for 4 | H_03 | Implemented | 
  | L_07 | Perform the modulus for 5 | H_03 | Implemented | 
  | L_08 | Perform the power for 6 | H_03 | Implemented | 
  | L_09 | Perform the factorial operation for 7 | H_04 | Implemented | 
  | L_10 | Perform the square operation for 8 | H_04 | Implemented | 
  | L_11 | Perform the cube operation for 9 | H_04 | Implemented |
  | L_12 | Perform the squareroot operation for 10 | H_04 | Implemented |
  | L_13 | Perform the sine operation for 11 | H_05 | Implemented |
  | L_14 | Perform the cosine operation for 12 | H_05 | Implemented |
  | L_15 | Perform the tangent operation for 13 | H_05 | Implemented |
  | L_16 | Perform the secant operation for 14 | H_05 | Implemented |
  | L_17 | Perform the cosecant operation for 15 | H_05 | Implemented |
  | L_18 | Perform the tangent operation for 16| H_05 | Implemented |
  | L_19 | Perform the log operation | H_06 | Not Implemented |
  | L_20 | Exit the program for 0 | H_07 | Implemented |

  ### Best methods to be followed
  * Used functions to decrease dependency on main functions.
  * Used pointers, functions and built-in functions to accept the input from user and store the values which helped in creating easy design of scientific calculator.
  * Printf statements have been placed only whenever necessary to maximum lines of code and confusions.
  * Created header file so that the function can be used else where ever required without any difficulty.
