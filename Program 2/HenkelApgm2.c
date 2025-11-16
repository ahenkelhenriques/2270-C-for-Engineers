/***************************************************
Author   : Alexis Henkel
Course   : COP 2270-U01 (85009) Sec C Prog for Engineers-12:30PM
Professor: Michael Robinson
Program  : Program 2-Runs math operations and processes a name string in different patterns.
Due Date : 10/19/25

I certify that this work is my own alone.


    ..........{ Alexis Henkel }..........
**************************************************/
//notes
// sizeof	- length of arrays
// toupper	- uppercase
// tolower	- lowercase
// f		- floating point
// %.2f     - prints a float with 2 decimal places
// %.4f     - prints a float with 4 decimal places
// strlen() - returns the length of a string (number of characters)
// rand()   - generates random numbers (use srand(time(NULL)) to seed randomness)
// abs()    - absolute value of an integer
// fabs()   - absolute value of a floating-point number


#include <stdio.h> //lets you use printf
#include <stdlib.h> //abs() and rand()
#include <math.h> //round(), sqrt(), pow(), cos(), etc.
#include <ctype.h> //toupper(), tolower(), and checks for letters
#include <string.h> //allows strings strlen() = String Length
#include <time.h>  //used for random numbers- srand(time(NULL))

// 2B
    void processAbsoluteValues(int i, int j, double x, double y);  
// abs() and fabs() (fabs is float abs) int for whole number and double for decimals
    void processRoundValues(int i, int j, double x, double y);
// rounding both integers and doubles even though the whole numbers will round to their same value
    void processCeilingValues(double x, double y);
// ceil() rounds a decimal number up to the nearest whole number, so im just includeing the decimal numbers. Otherwise we have to cast ints which we have not learned in class
    void processFlooringValues(int i, int j, double x, double y);
// using floor() which rounds down to the nearest whole number.
    void processMinimumValues(int i, int j, double x, double y);
// comparing all four values to find the smallest
    void processMaximumValues(int i, int j, double x, double y);
// comparing all four values to find the largest
    void processTrigFunctionsValues(int i, int j, double x, double y); 
// sin, cos, tan to both integer and doubles
    void processExponentialValues(int i, int j, double x, double y);   
// compute Euler’s number, ≈ 2.71828 raised to the power of each variable
    void processLogValues(int i, int j, double x, double y);           
// log() for all four
    void processPowerValues(int i, int j, double x, double y);         
// pow() between combinations of i, j, x, y
    void processSquareRootsValues(int i, int j, double x, double y);   
// sqrt() of each number, if number is negative will print NAN not a number
    void processRandomValues(int i, int j, double x, double y);
	// // Input min and max integer values, returns random value inclusive of range
	
	void processAbsoluteValues(int i, int j, double x, double y) {
    printf("\nFinding the Absolute Value of each Value\n");

    // abs() is for integers only
    int absI = abs(i);
    int absJ = abs(j);

    // fabs() is for doubles floating absolute values
    double absX = fabs(x);
    double absY = fabs(y);

    // Print results
    printf("i = %d = abs(i) = %d\n", i, abs(i));
    printf("j = %d = abs(j) = %d\n", j, abs(j));
    printf("x = %.2f = fabs(x) = %.2f\n", x, fabs(x));
    printf("y = %.2f = fabs(y) = %.2f\n", y, fabs(y));
}   // %.2f and %.4f prints floating-point numbers the number is how many decimal places

    void processRoundValues(int i, int j, double x, double y) {
    printf("\nRounding the Values to the Nearest Whole Number\n");
// round() rounds a decimal to the nearest whole number
// Integers (i and j) will stay the same because they already have no decimals
    printf("i = %d = round(i) = %.0f\n", i, round(i));
    printf("j = %d = round(j) = %.0f\n", j, round(j));
    printf("x = %.2f = round(x) = %.0f\n", x, round(x));
    printf("y = %.2f = round(y) = %.0f\n", y, round(y));
}   // %.2f and %.4f prints floating-point numbers the number is how many decimal places
    void processCeilingValues(double x, double y) {
    printf("\nCeiling - Rounding Each Value UP to the Nearest Whole Number\n");
// ceil() rounds a decimal number up to the next whole number, so we will only do the numbers with decimals
    printf("x = %.2f = ceil(x) = %.0f\n", x, ceil(x));
    printf("y = %.2f = ceil(y) = %.0f\n", y, ceil(y));
}   // %.2f and %.4f prints floating-point numbers the number is how many decimal places

    void processFlooringValues(int i, int j, double x, double y) {
    printf("\nFlooring - Rounding Each Value DOWN to the Nearest Whole Number\n");
// floor() rounds a number DOWN to the next whole number so whole number will stay the same
    printf("i = %d = floor(i) = %.0f\n", i, floor(i));
    printf("j = %d = floor(j) = %.0f\n", j, floor(j));
    printf("x = %.2f = floor(x) = %.0f\n", x, floor(x));
    printf("y = %.2f = floor(y) = %.0f\n", y, floor(y));
}   // %.2f and %.4f prints floating-point numbers the number is how many decimal places

    void processMinimumValues(int i, int j, double x, double y) {
    printf("\nFind the Minimum Value of Two Sets of Two Values\n");

    printf("min(i = %d, j = %d) = %.2f\n", i, j, fmin(i, j));
    printf("min(x = %.2f, y = %.2f) = %.2f\n", x, y, fmin(x, y));
}   //%.2f and %.4f prints floating point numbers the number is how many decimal places

	void processMaximumValues(int i, int j, double x, double y) {
    printf("\nFind the Maximum Value of Two Sets of Two Values\n");

    printf("max(i = %d, j = %d) = %.2f\n", i, j, fmax(i, j));
    printf("max(x = %.2f, y = %.2f) = %.2f\n", x, y, fmax(x, y));
}   // %.2f and %.4f prints floating point numbers the number is how many decimal places

    void processTrigFunctionsValues(int i, int j, double x, double y) {
    printf("\nTrig Function Values - Cos, Sin, Tan (Radians)\n");

    printf("cos(i = %d) = %.4f, sin(i = %d) = %.4f, tan(i = %d) = %.4f\n", i, cos(i), i, sin(i), i, tan(i));
    printf("cos(j = %d) = %.4f, sin(j = %d) = %.4f, tan(j = %d) = %.4f\n", j, cos(j), j, sin(j), j, tan(j));
    printf("cos(x = %.2f) = %.4f, sin(x = %.2f) = %.4f, tan(x = %.2f) = %.4f\n", x, cos(x), x, sin(x), x, tan(x));
    printf("cos(y = %.2f) = %.4f, sin(y = %.2f) = %.4f, tan(y = %.2f) = %.4f\n", y, cos(y), y, sin(y), y, tan(y));
}   // %.2f and %.4f prints floating point numbers the number is how many decimal places

    void processExponentialValues(int i, int j, double x, double y) {
    printf("\nEuler’s Number Raised to the Power of Each Value\n");

    printf("exp(i = %d) = %.4f\n", i, exp(i));
    printf("exp(j = %d) = %.4f\n", j, exp(j));
    printf("exp(x = %.2f) = %.4f\n", x, exp(x));
    printf("exp(y = %.2f) = %.4f\n", y, exp(y));
}   // %.2f and %.4f prints floating point numbers the number is how many decimal places

    void processLogValues(int i, int j, double x, double y) {
    printf("\nNatural Log of Each Value\n");

    printf("log(i = %d) = %.4f\n", i, log(i));
    printf("log(j = %d) = %.4f\n", j, log(j));
    printf("log(x = %.2f) = %.4f\n", x, log(x));
    printf("log(y = %.2f) = %.4f\n", y, log(fabs(y))); // fabs for negatives
}    // %.2f and %.4f prints floating point numbers the number is how many decimal places

    void processPowerValues(int i, int j, double x, double y) {
    printf("\nPower Values - Raising i to j, x to y, etc.\n");

    printf("pow(i = %d, j = %d) = %.2f\n", i, j, pow(i, j));
    printf("pow(x = %.2f, y = %.2f) = %.2f\n", x, y, pow(x, y));
    printf("pow(j = %d, i = %d) = %.2f\n", j, i, pow(j, i));
    printf("pow(y = %.2f, x = %.2f) = %.2f\n", y, x, pow(y, x));
}   // %.2f and %.4f prints floating point numbers the number is how many decimal places

	void processSquareRootsValues(int i, int j, double x, double y) {
    printf("\nSquare Root of Each Value\n");

    printf("sqrt(i = %d) = %.4f\n", i, sqrt(i));
    printf("sqrt(j = %d) = %.4f\n", j, sqrt(j));
    printf("sqrt(x = %.2f) = %.4f\n", x, sqrt(x));
    printf("sqrt(y = %.2f) = %.4f\n", y, sqrt(y)); // prints nan for negatives
}   // %.2f and %.4f prints floating point numbers the number is how many decimal places

    void processRandomValues(int i, int j, double x, double y) {
    printf("\nCreate a Random Value Between The Highest (j) And Lowest (y) Values Given\n");
    //I chose to implement random in this way, it was not specified exactly how random was to be used.
    // Create a random number between y (lowest) and j (highest)
    int randomValue = (rand() % ((int)j - (int)y + 1)) + (int)y;

    printf("\nA random number between j (%.0f) as the highest and y (%.2f) as the lowest = %d\n", (double)j, y, randomValue);
}

    /*2C-Create a single dimension array containing ONE index,
    which will have ONE string with your full name as follows:
    "first name $ middle name % last name and ONE space"
        Example: "George $ Washington % Rodriguez "*/
	
	void myName(char name[]) {
		
    for (int x = 0; x < strlen(name); x++) {
     //if the character is within the name then keep going   
		if (name[x] == ' ') {
            printf("character [%c] located at position %d is a space\n", name[x], x);
        } //if the character is a space
        else if (name[x] == '%' || name[x] == '$') {
            printf("character [%c] located at position %d is a symbol\n", name[x], x);
        }//if the character is a symbol
        else if (name[x] == 'a' || name[x] == 'e' || name[x] == 'i' || name[x] == 'o' || name[x] == 'u' ||
                 name[x] == 'A' || name[x] == 'E' || name[x] == 'I' || name[x] == 'O' || name[x] == 'U') {
            printf("character [%c] located at position %d is a vowel\n", name[x], x);
        } //if vowel
        else {
            printf("character [%c] located at position %d is a consonant\n", name[x], x);
        } //if consonant
    }
}
    /*5) Worth 2.00 points
     Create a function called pyramid.
     Using a for loop, display to the screen, the string containing your name so that each
     loop will NOT contain the first and the last character from the previous line,
     with the length of the string being printed, and the string surrounded by square brackes []*/
	 
    void pyramid(char name[]) {
		
    int len = strlen(name);  // total length of my name string

    for (int i = 0; len - (2 * i) >= 0; i++) {
        int currentLength = len - (2 * i);  // current length is the number of characters still visible

        // stop exactly when string runs out of characters
        if (currentLength < 0)
            break;

        // adding spaces to make it look like a pyramid
        for (int s = 0; s < i; s++) {
            printf(" ");
        }

        // print length number and brackets
        printf("%2d [", currentLength);

        // print the part of the string still showing
        for (int j = i; j < len - i; j++) {
            printf("%c", name[j]);
        }

        printf("]\n");

    }
}

    /* 6) Worth 2.00 points
     In a function called parsing do the following:
     NOTE: Every function dealing with your name, MUST be called from main, PASSING your name to it.
     a) Print your name in upper case letters.
     b) Print your name in lower case letters.
     c) Print your name taking all spaces out. print if not space
     d) Print your name with all vowels in upper case, and all consonants in lower case. 
     e) Print your name backwards. length of array - 1
     f) Print your name in ASCII values.*/
	 
    void parsing(char name[]);
	
	void parsing(char name[]) {

    int len = strlen(name); // get string length once at the start

    // (a) Print name in upper case
    printf("\nUppercase: ");
    for (int i = 0; i < len; i++) {
        printf("%c", toupper(name[i]));
    }

    // (b) Print name in lower case
    printf("\n\nLowercase: ");
    for (int i = 0; i < len; i++) {
        printf("%c", tolower(name[i]));
    }

    // (c) Print name without spaces
    printf("\n\nNo spaces: ");
    for (int i = 0; i < len; i++) {
        if (name[i] != ' ') {
            printf("%c", name[i]);
        }
    }

    // (d) Print vowels uppercase, consonants lowercase
    printf("\n\nVowels upper, consonants lower: ");
    for (int i = 0; i < len; i++) {
        char c = name[i];
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
            c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            printf("%c", toupper(c));
        } 
        else if (isalpha(c)) {
            printf("%c", tolower(c));
        } 
        else {
            printf("%c", c); // leave symbols/spaces unchanged
        }
    }

    // (e) Print name backwards
    printf("\n\nBackwards: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", name[i]);
    }

    // (f) Print ASCII values with characters
    printf("\n\nASCII values: \n");
    for (int i = 0; i < len; i++) {
        printf("%c = %d\n", name[i], name[i]);
    }

    printf("\n");
}
   
   int main() {

    srand(time(NULL)); // needed for random numbers

    // (2a) Create the variables
    int i = 7;
    int j = 9;
    double x = 72.5;
    double y = -0.34;

    printf("\nMATH FUNCTIONS\n");

    // (2b/3) Call all math-related functions
    processAbsoluteValues(i, j, x, y);
    processRoundValues(i, j, x, y);
    processCeilingValues(x, y);
    processFlooringValues(i, j, x, y);
    processMinimumValues(i, j, x, y);
    processMaximumValues(i, j, x, y);
    processTrigFunctionsValues(i, j, x, y);
    processExponentialValues(i, j, x, y);
    processLogValues(i, j, x, y);
    processPowerValues(i, j, x, y);
    processSquareRootsValues(i, j, x, y);
    processRandomValues(i, j, x, y);

    // (2c) Create your single-dimensional array with your full name
    char myNameString[] = "Alexis $ Linzy % Henkel ";
	
	/*4a) Examine each character of your name and determine if it is:
        a space, a vowel (a,e,i,o,u,A,E,I,O,U), a consonant (b,w,g, etc), the symbol %
        or the symbol $*/
		
    printf("\nNAME BREAKDOWN\n\n");
    myName(myNameString);

    //5) Pyramid Function
    printf("\nNAME PYRAMID\n\n");
    pyramid(myNameString);
	
	//6) Parsing Function

    printf("\nPARSING FUNCTION\n");
    parsing(myNameString);
	
	// End Main
    //End Program!!
    
}
