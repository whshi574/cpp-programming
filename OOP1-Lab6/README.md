# Practical Lab Assignment

```
1. Write a program to calculate area of following figures using function overloading:
Circle
Rectangle
Triangle
Square
(Hint: 1. create 4 functions with same name area. 2. Each function to calculate area of one figure.)

2. Write a program to calculate circumference of the following figures using function overloading:
Circle
Rectangle
Triangle
Square

3. Write a program using function overloading:
To find largest among three integers.
To find largest among three floating point numbers.

4. Convert function template for problem 3.
```

**Do while**

do while(Var) : we need define the Var out of the main while, if we define the Var in while, it also will be have an error like:

![image-20230522170617037](D:\DeveloperKits_And_IDE\Github\cpp-programming\OOP2_Lab6\image-20230522170617037.png)

Because bIsGetArea 's action scope is not in the while block.

{ } is a block of the code.

**Function Overloading**

We can distinguish the function by function name and function parameters:

void FunctionName(VarType Var1);

void FunctionName(VarType1 Var1);

This two function will be the FunctionName_VarType and FunctionName_VarType1, so that's why this two function are different. But we can not distinguish by only different return value, like:

double FunctionName(VarType Var1);

void FunctionName(VarType Var1);

The above is error case.