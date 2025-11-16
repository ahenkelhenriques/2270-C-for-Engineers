/***************************************************
Author   : Alexis Henkel
Course   : COP 2270-U01 (85009) Sec C Prog for Engineers-12:30PM
Professor: Michael Robinson
Program  : Program 1, Numerical Computations, Sum of Numbers,Main + Student info
Due Date : 09/04/2025

I certify that this work is my own alone.


    ..........{ Alexis Henkel }..........
**************************************************/
/*Notes:
cd 
dir o/d
gcc -0 HenkelApgm.1.c
dir * .c shows only c files.
%d - double - Integer 300 max
%f- float - 38 max
%s = string
\t tab
\n new line
char - letter
int-numbers 0-9
% = when divided by i what is the remainder called modulus
have to put %% to let C know you want to PRINT % sign
No tab must use 4 spaces!!
*/
 
 //Start Program 1
 //Part 2
 
 #include <stdio.h>
 
 void numericalComputations()
{
    int maximumNumber = 10;
//have to put && to let C know you want to print the symbol
    printf("Part 2\n");
    printf( "\nmaximumNumber %% i, using printf and new line \n");
    printf("\n10 %% 1 = %d\n",  maximumNumber % 1);
    printf("10 %% 2 = %d\n",  maximumNumber % 2);
    printf("10 %% 3 = %d\n",  maximumNumber % 3);
    printf("10 %% 4 = %d\n",  maximumNumber % 4);
    printf("10 %% 5 = %d\n",  maximumNumber % 5);
    printf("10 %% 6 = %d\n",  maximumNumber % 6);
    printf("10 %% 7 = %d\n",  maximumNumber % 7);
    printf("10 %% 8 = %d\n",  maximumNumber % 8);
    printf("10 %% 9 = %d\n",  maximumNumber % 9);
    printf("10 %% 10 = %d\n", maximumNumber % 10);

    printf("\nmaximumNumber - i, using printf and tab \n" );
    printf("\n10 - 1 = %d\t",  maximumNumber - 1);
    printf("10 - 2 = %d\t",  maximumNumber - 2);
    printf("10 - 3 = %d\t",  maximumNumber - 3);
    printf("10 - 4 = %d\t",  maximumNumber - 4);
    printf("10 - 5 = %d\t",  maximumNumber - 5);
    printf("10 - 6 = %d\t",  maximumNumber - 6);
    printf("10 - 7 = %d\t",  maximumNumber - 7);
    printf("10 - 8 = %d\t",  maximumNumber - 8);
    printf("10 - 9 = %d\t",  maximumNumber - 9);
    printf("10 - 10 = %d\t\n", maximumNumber - 10);  

    printf("\nmaximumNumber + i, using printf and new line \n");
    printf("\n10 + 1 = %d\n",  maximumNumber + 1);
    printf("10 + 2 = %d\n",  maximumNumber + 2);
    printf("10 + 3 = %d\n",  maximumNumber + 3);
    printf("10 + 4 = %d\n",  maximumNumber + 4);
    printf("10 + 5 = %d\n",  maximumNumber + 5);
    printf("10 + 6 = %d\n",  maximumNumber + 6);
    printf("10 + 7 = %d\n",  maximumNumber + 7);
    printf("10 + 8 = %d\n",  maximumNumber + 8);
    printf("10 + 9 = %d\n",  maximumNumber + 9);
    printf("10 + 10 = %d\n", maximumNumber + 10);

    printf("\nmaximumNumber * i, using printf and tab \n");
    printf("\n10 * 1 = %d\t",  maximumNumber * 1);
    printf("10 * 2 = %d\t",  maximumNumber * 2);
    printf("10 * 3 = %d\t",  maximumNumber * 3);
    printf("10 * 4 = %d\t",  maximumNumber * 4);
    printf("10 * 5 = %d\t",  maximumNumber * 5);
    printf("10 * 6 = %d\t",  maximumNumber * 6);
    printf("10 * 7 = %d\t",  maximumNumber * 7);
    printf("10 * 8 = %d\t",  maximumNumber * 8);
    printf("10 * 9 = %d\t",  maximumNumber * 9);
    printf("10 * 10 = %d\t\n", maximumNumber * 10);

    printf("\nmaximumNumber / i, using printf and new line \n");
    printf("\n10 / 1 = %d\n",  maximumNumber / 1);
    printf("10 / 2 = %d\n",  maximumNumber / 2);
    printf("10 / 3 = %d\n",  maximumNumber / 3);
    printf("10 / 4 = %d\n",  maximumNumber / 4);
    printf("10 / 5 = %d\n",  maximumNumber / 5);
    printf("10 / 6 = %d\n",  maximumNumber / 6);
    printf("10 / 7 = %d\n",  maximumNumber / 7);
    printf("10 / 8 = %d\n",  maximumNumber / 8);
    printf("10 / 9 = %d\n",  maximumNumber / 9);
    printf("10 / 10 = %d\n\n", maximumNumber / 10);
}
//end void numericalComputations
 
 //Part 3 Create and call a function called sumOfNumbers(), without passing any parameters, assign the value 100 to the int N. Using the sum of numbers formula: (1 + N)*(N/2)
  
    void sumOfNumbers()
{
    int N = 100;
	printf("\nPart 3 Using the sum of numbers formula to find sum of digits 1 to 100\n");
    printf("\nThe total amount of the sum of digits from 1 to 100 = %d\n\n", (1 + N) * (N / 2));
} //end void sumOfNumbers
 
 //part 4
	
void myInfo(char myName[], char myMajor[], int creditsCompleted, int creditsThisSemester, char className[]) {
    printf("\nPart 4 define variables- name, major, credits, and class in main and print them via myInfo. \n\n");
	printf("Hi my name is %s\n", myName);
    printf("My major is %s\n", myMajor);
    printf("I have completed %d credits.\n", creditsCompleted);
    printf("I am taking %d credits.\n", creditsThisSemester);
    printf("This class's name is %s\n\n", className);
}
 //end void myInfo
 
 //Part 5 A

	void forLoop() {
		int maximumNumber = 10;
		int i;

    printf("\nPart 5A: FOR LOOP VERSION of Question #2:\n\n");

    // modulo % followed by a new line
    for (i = 1; i <= 10; i++) {
        printf("%d %% %d = %d\n", maximumNumber, i, maximumNumber % i);
    } //two %% signs used because in c you cannot print just one it confuses C lets C know to print the symbol

    // subtract - followed by tab
    for (i = 1; i <= 10; i++) {
        printf("%d - %d = %d\t", maximumNumber, i, maximumNumber - i);
    }

    // add + followed by a new line
    for (i = 1; i <= 10; i++) {
        printf("%d + %d = %d\n", maximumNumber, i, maximumNumber + i);
    }

    // multiply * followed by tab
    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\t", maximumNumber, i, maximumNumber * i);
    }

    // divide / followed by a new line
    for (i = 1; i <= 10; i++) {
        printf("%d / %d = %d\n", maximumNumber, i, maximumNumber / i);
    }
}

// Part 5 B While loop version
void whileLoop() {
    int maximumNumber = 10;
    int i;

    printf("\nPart 5B: WHILE LOOP VERSION of question #2:\n\n");

    // modulo % followed by new line 
    i = 1;
    while (i <= 10) {
        printf("%d %% %d = %d\n", maximumNumber, i, maximumNumber % i);
        i++;
    } //two %% signs used because in c you cannot print just one it confuses C

    // subtract - followed by tab
    i = 1;
    while (i <= 10) {
        printf("%d - %d = %d\t", maximumNumber, i, maximumNumber - i);
        i++;
    }

    // add + followed by new line
    i = 1;
    while (i <= 10) {
        printf("%d + %d = %d\n", maximumNumber, i, maximumNumber + i);
        i++;
    }

    // multiply * followed by tab
    i = 1;
    while (i <= 10) {
        printf("%d * %d = %d\t", maximumNumber, i, maximumNumber * i);
        i++;
    }

    // divide / followed by new line
    i = 1;
    while (i <= 10) {
        printf("%d / %d = %d\n", maximumNumber, i, maximumNumber / i);
        i++;
    }
}
 //end forLoop, whileLoop
 
int main(void) { // YOU CAN ONLY HAVE ONE MAIN! HAVE TO CALL ALL PARTS IN MAIN
    // Part 2
    numericalComputations();

    // Part 3
    sumOfNumbers();

    // Part 4
    myInfo("Alexis Henkel", "Cybersecurity", 117, 11, "Sec C Prog for Engineers");
// DEFINEING VARIABLES IN MAIN^

    // Part 5A
    forLoop();

    // Part 5B
    whileLoop();
	
	//Part 5C Find and print the sum of all numbers from 1 to 100 using a for loop
{
    int i;
    int sum = 0;

    for (i = 1; i <= 100; i++) {
        sum = sum + i;
    }
    printf("\nPart 5C: Find and print the sum of all numbers from 1 to 100 using a for loop \n");
    printf("The sum of all numbers from 1 to 100 is %d\n", sum);
}}

 //END Main
 //END PROGRAM 1
 
 
