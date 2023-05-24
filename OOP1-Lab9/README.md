# Practical Lab Assignment - Arrays

1. Write a program to generate Pascal’s triangle.
    ```
            1
           1 1
          1 2 1
         1 3 3 1
        1 4 6 4 1
      1 5 10 10 5 1
    1 6 15 20 15 6 1
    ```

2. Write a menu driven program to read and display an m × n matrix. Also find the sum, transpose and product of two m × n matrices.

    **Cin.fail() Cin.clear() Cin.ignore(numeric_limits<streamsize>::max(), '\n')**

    ```c++
    int user_choice;
    cin >> user_choice;
    bool bIsGetInput = cin.fail();
    
    cin.clear();
    
    bIsGetInput = cin.fail();
    ```

    If the input is "a", bIsGetInput will be true, means fail.

    If the input is 2.1, The first bIsGetInput will be false, means success, but .1 has already exist in the stream buffer.

3. In a small company there are five salesman. Each salesman is supposed to sell three products. Write a program using 2D array to print the total sales by each salesman and total sales of each item.