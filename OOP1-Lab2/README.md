# Practical Lab Assignment - Control Structures - if/else

1. ## Program to convert temperature from degree centigrade to Fahrenheit.

   There is nothing to summarize.

2. ## Program to show swap of two no’s without using third variable.

   He use Value numerical addition and subtraction to save data and swap data. We also can use multiplication and division to swap data.

   The other important method is using **ISO-OR operation(异或运算).**

   **ISO-OR operation**

   It can do with all one byte swap data, like integer, char, bool.

   ```c++
   a = a^b; 
   b = a^b; 
   a = a^b;
   ```

   It also can deal with Array, but the data must be these basic data structure.

   **String Type conversion**

   Because I want to get input from user as string type, some user maybe use integer,float value,char or string value. So I try to convert them to deal with different situation.

   **Why not enter into the catch code ?**

   ```c++
   void SwapWithoutVarInRandom() {
   
   string a, b;
   int I_a;
   
   string c = "12.23";
   //cin >> a >> b;
   
   try {
   
   	I_a = stoi(c);//The c is 12 now.
   
   }
   catch(invalid_argument& ia) {
   
   	cout << "invalid_argument" << endl;
   	
   }
   catch (const out_of_range& oor) {
   
   	cout << "out_of_range" << endl;
   	
   }
   
   cout << I_a << endl;
   ```
   I want to convert the string value into the integer value, but the input is a double value. Its confused that it doesn't give a exceptions. It means convert successfully. The c is converted to A integer value automatically.

   So stoi can  and convert it into 12.

   Stod can accept "12" it into 12.

   **Cin >>**

   The << like a flow, cin >>a means input flow into a, cout<<a means a flow into the cout to output.

3. ## Program to find greatest in 3 numbers.

   **Vector<>**

   To get a dynamic array of specific type.

   **Auto**

   The corresponding type can be obtained by calculating the expression.

4. ## Program to find that entered year is leap year or not.

5. ## Program to find whether given no is even or odd.