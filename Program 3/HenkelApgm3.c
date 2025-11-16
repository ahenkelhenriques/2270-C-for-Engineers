/***************************************************
Author   : Alexis Henkel
Course   : COP 2270-U01 (85009) Sec C Prog for Engineers-12:30PM
Professor: Michael Robinson
Program  : Program 3
Description:
* 1-dimensional and 2-dimensional arrays
* parallel arrays and pointers
* scanf for user input
* for loops and while loops
* Swapping and sorting
* Display ASCII codes useing loop
Due Date : 11/5/25

I certify that this work is my own alone.


    ..........{ Alexis Henkel }..........
**************************************************/

    #include <stdio.h>

    /* 2) Worth 2.00 points
     a) Create a two dimensional array of 10 rows by 10 columns, using x for rows and y for columns
        under the name: your lastName First letters of your firstName and 2DimArray 
        example: robinsonM2DimArray
     b) Load each index with the multiplication of its x and y location
     c) Add all the values in columns 3, 5, and 7, and print the total
     d) Add all the values in rows 2, 4, and 6, and print the total
     e) Subtract the total values (rows-columns), and print the difference.*/
	 
    void fill2DArray(int a[10][10])
{
    int x, y;

    for (x = 0; x < 10; x++)
    {
        for (y = 0; y < 10; y++)
        {
            a[x][y] = x * y;
        }
    }
}

    //print the the 10x10 array
    void print2DArray(int a[10][10])
{
    int x, y;

    printf("2. Contents of henkelA2DimArray (x * y):\n");
    for (x = 0; x < 10; x++)
    {
        printf("Row %d: ", x);
        for (y = 0; y < 10; y++)
        {
            printf("%4d", a[x][y]);
        }
        printf("\n");
    }
    printf("\n");
}

    //Sum of all values in columns 3, 5, and 7
    int sumColumns357(int a[10][10])
{
    int x;
    int total = 0;

    //columns 3, 5, 7 AKA 2, 4, 6 BECAUSE WE START AT 0
    for (x = 0; x < 10; x++)
    {
        total = total + a[x][2];
        total = total + a[x][4];
        total = total + a[x][6];
    }

    return total;
}

    /* Sum all values in rows 2, 4, and 6 (1-based) */
    int sumRows246(int a[10][10])
{
    int y;
    int total = 0;

    /* rows 2, 4, 6 AKA 1, 3, 5 STARTS AT 0!! */
    for (y = 0; y < 10; y++)
    {
        total = total + a[1][y];
        total = total + a[3][y];
        total = total + a[5][y];
    }

    return total;
}

     /* 3) Worth 1.25 points
     From the main function pass 3 numbers of your choice, to a function 
	 named ascending that will print these numbers in ascending order.
	 Example if you pass (98, 234, 6)
                     print 6 98 234
	Do NOT use any built-in sort ANSI C funtion.*/

    void ascending(int n1, int n2, int n3)
{
    int temp;

    printf("3. Original numbers ARE : %d  %d  %d\n", n1, n2, n3);

    // Swapping to order the three numbers

    if (n1 > n2)
    {
        temp = n1;
        n1   = n2;
        n2   = temp;
    }

    if (n2 > n3)
    {
        temp = n2;
        n2   = n3;
        n3   = temp;
    }

    if (n1 > n2)
    {
        temp = n1;
        n1   = n2;
        n2   = temp;
    }

    printf("Ascending order  : %d  %d  %d\n\n", n1, n2, n3);
}

/*  4) Worth 1.50 points
     Using a while(1) loop, print the upper case alphabet and its corresponding ascii values,
     from Z to A
     Note: You must terminate/stop/break this loop once you process the last letter (A)*/

    void printAlphabetReverse(void)
{
    char letter = 'Z';

    printf("4. Uppercase letters from Z to A with ASCII values:\n");

    while (1)
    {
        printf("Letter %c has ASCII value %d\n", letter, letter);

        if (letter == 'A')
        {
            //I processed A, to break out of the endless loop
            break;
        }

        letter = letter - 1;
    }
    // new line
    printf("\n");
}

/*   5) Worth 2.00 points
     Implement division by 0, with error trapping, using if and while() commands,
     make sure to use "casting" e.i. float result = (float)int/int;
  
     How:
     Create two new variables, and int name firstNumber and an int named secondNumber. 
     Using a while loop, read 2 numbers from the user.
     Using the if statement, test that the second number in not zero, if it is inform
     the user of the error, and ask for a correct second number.
     if the second number is NOT a zero, do the division, display all numbers and the
     computation using labels, the result MUST have 2 decimal places,

     example: "The first number 10 divided by the second number 5 is 2.00"
    
     To exit this while loop the user MUST enter the value 999 for the first 
	 or the second number ***ONLY****/

    void divisionProgram(void)
{
    int   firstNumber;
    int   secondNumber;
    float result;

    printf("5. Welcome to the Division Program!\n");
    printf("This program will divide the first number you enter by the\n");
    printf("second number and give the result with two decimal places!\n");
    printf("If you enter a zero for the second number, you will be asked\n");
    printf("to enter another number.\n");
    printf("You may keep dividing as many times as you like.\n");
    printf("(Press 999 at any time to quit.)\n");

    while (1) //1 means true and 0 means false so its saying while true
    {
        printf("\nEnter the first number (999 to quit): ");
        scanf("%d", &firstNumber); //scanf looks at the info entered and says store it in "firstNumber"

        if (firstNumber == 999)
        {
            break;
        }

        printf("Enter the second number (999 to quit): ");
        scanf("%d", &secondNumber);

        if (secondNumber == 999)
        {
            break;
        }

        //so as long as the number does not equal zero it continues, but if its zero there will be an error message
        while (secondNumber == 0)
        {
            printf("Error: The second number cannot be 0.\n");
            printf("Please enter a new second number (999 to quit): ");
            scanf("%d", &secondNumber);

            if (secondNumber == 999) //constantly checking for 999 for every input
            {
                break;
            }
        }

        if (secondNumber == 999)
        {
            break;
        }

        //Do the division, using casting so the result is a float
        result = (float) firstNumber / secondNumber; //this is the actual division

        printf("The first number %d divided by the second number %d is %.2f\n",
               firstNumber, secondNumber, result);
    }

    printf("\nThank you for using the Division Program. Goodbye!\n\n");
}

/*   6. Worth 1.00 point
     Using a loop of your choice, display all numbers from 0 to 100 where "x mod 5 = 3".  
     Loop x is the loop number, that when doing x mod 5, the answer is 3
     Remember x starts as 0, and in the last loop, x MUST the 100. */

    void printMod5Equals3(void)
{
    int x;

    printf("6. Numbers from 0 to 100 where x mod 5 = 3:\n");

    x = 0;
    while (x <= 100)
    {
        if (x % 5 == 3)
        {
            printf("%d\n", x);
        }
        x = x + 1;
    }

    printf("\n");
}

    /* 7) Worth 2.00 points
     Having the following TWO, ONE dimensions arrays:
	 
     one[0] = "This ANSI C ";   two[0] = "class";
     one[1] = "at ";            two[1] = "FIU";
     one[2] = "is ";            two[2] = "challenging && enjoyable";
     
	 print the results using a parallel array, made with these two one dim arrays */
	 
	 //FYI We went over pointers in class 11/5/25

    void printParallelArrays(void)
{
    const char *one[] = {"This ANSI C ", "at ", "is "}; 
    const char *two[] = {"class", "FIU", "challenging && enjoyable"};

    int i;

    printf("7. Parallel arrays output:\n");

    for (i = 0; i < 3; i++)
    {
        printf("%s%s ", one[i], two[i]); //so important!! the space after %s has to be there for the sentence to have correct spaceing!! 
    }

    printf("\n\n");
}
    //MAIN!!

    int main(void)
{
    int henkelA2DimArray[10][10];
    int columnTotal;
    int rowTotal;
    int difference;

    // Part 2
    fill2DArray(henkelA2DimArray);
    print2DArray(henkelA2DimArray);

    columnTotal = sumColumns357(henkelA2DimArray);
    rowTotal    = sumRows246(henkelA2DimArray);
    difference  = rowTotal - columnTotal;

    printf("Total of columns 3, 5, and 7 = %d\n", columnTotal);
    printf("Total of rows 2, 4, and 6    = %d\n", rowTotal);
    printf("Rows - Columns               = %d\n\n", difference);

    // Part 3
    ascending(12, 3, 92);   /* three numbers of my choice (My Birthday)*/

    //Part 4
    printAlphabetReverse();

    //Part 5
    divisionProgram();

    //Part 6
    printMod5Equals3();

    //Part 7
    printParallelArrays();

    //End of Program 3!!
}


