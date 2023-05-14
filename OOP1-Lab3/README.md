# Practical Lab Assignment - Control Structures - Loop/Switch

1. Program to calculate sum of numbers from m to n.
    - Hint: Input two numbers m and n. Find sum of all numbers from m to n. For example m=3 and n=8 then sum will be 3 + 4 + 5 + 6 + 7 + 8 = 33.

    Use for loop or while to solve it.

    I make a mistake here, because of "=" and "==".

2. Program to print Fibonacci series up to 100. 
    - Hint: Fibonacci Series is 1, 1, 2, 3, 5, 8, 13, 21, ....

    **Integer Overflow:**

    If two number too large, the sum of them maybe to a negative number. It means the result affects the symbolic representation of the first bit. 

3. Program to input a number and then calculate sum of its digits.
    - Hint: let number = 562. Then you should print 5 + 6 + 2 = 13.

    **#include<cctype> isdigit()**

    The functions determine whether the character is an integer.

    **Using mod to get a last number of a integer**

    sum = sum + a % 10;

    a = a / 10;

    **static_cast**

    int num = static_cast<int>(c - '0');

    The function will cast character c to a ASCII value like 5 is "53".

4. Program to find whether given number is a prime number or not.

5. Program to display sum of series 1 + 1/2 + 1/3 + ... + 1/n.

6. Program to display series and find sum of 1 + 3 + 5 + ... + n.

7. Program to use switch statement. Display Monday to Sunday.

    **Cin.clear and Cin.ignore**

    if our cin input can's cast correctly like

    > int day; 
    >
    > cin>>day; //day is "cscac"

    it means our cin will into a fail state.

    We need to clear the state and remind user to enter correctly, and then clear the values we don't want.

    > cin.clear();     
    >
    > cin.ignore(std::numeric_limits< std::streamsize >::max(), '\n'); //ignore all values until to the "\n"

    Special case:

    If we have a day input which is integer, and we enter a float value(3.2), the cin will get the input 3 first and leave the .2 into the string buffer. So it means in the next cin input, we are going to handle the input ".2"

    

    ```C++
    	if (!(cin >> day)) { 
    //if the input is 2.3, it will enter the correct state first and then enter the fail state, 2 will cast correctly, .3 will enter the false state
    			cout << day << endl;
    			cin.clear();
    			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    			cout << "It's fail state" << endl;
    		}
    		else {
    			cout << day << endl;
    			cout << "It's correct state" << endl;
    		}
    
    	if (!(cin >> day0)) { 
    	//the string buffer have a .2, so it will into the fail state.
    			cout << day0 << endl;
    			cin.clear();
    			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    			cout << "It's fail state" << endl;
    		}
    		else {
    			cout << day0 << endl;
    			cout << "It's correct state" << endl;
    		}
    ```

8. Program to display arithmetic operator using switch case

    When we use cin to get input from keyboard, we will get input by type. Like cin>>char op, if we enter asasdad, we will get a first and leave the sasdad to the next cin.