/***************************************************************
 Author    : Alexis Henkel
 Course    : COP 2270 Sec ANSI C Online
 Professor : Michael Robinson
 Program # : 4
 Purpose   : Creates a binary file (numbers.bin) containing
             sequences of odd, even, and all numbers both
             forwards and backwards, displaying each character
             as it is written.
 Due Date  : 11/15/2025

 Certification:
 I hereby certify that this work is my own and none of it is
 the work of any other person.

 ..........{ Alexis Henkel }..........
 ***************************************************************/

#include <stdio.h>

int main(void)
{
    FILE *binFile;
    int i;

    binFile = fopen("numbers.bin", "wb");
    if (binFile == NULL)
    {
        printf("Error creating file.\n");
        return 1;
    }

    /* 1) Write full name */
    fprintf(binFile, "Alexis Henkel\n");
    printf("Alexis Henkel\n");

    /* 2–4) Forwards */
    fprintf(binFile, "odd numbers forwards: ");
    printf("odd numbers forwards: ");
    for (i = 1; i <= 25; i += 2) { fprintf(binFile, "%d ", i); printf("%d ", i); }

    fprintf(binFile, "\neven numbers forwards: ");
    printf("\neven numbers forwards: ");
    for (i = 0; i <= 24; i += 2) { fprintf(binFile, "%d ", i); printf("%d ", i); }

    fprintf(binFile, "\nall numbers forwards: ");
    printf("\nall numbers forwards: ");
    for (i = 0; i <= 25; i++) { fprintf(binFile, "%d ", i); printf("%d ", i); }

    /* 5) Blank line */
    fprintf(binFile, "\n\n");
    printf("\n\n");

    /* 6–8) Backwards */
    fprintf(binFile, "odd numbers backwards: ");
    printf("odd numbers backwards: ");
    for (i = 25; i >= 1; i -= 2) { fprintf(binFile, "%d ", i); printf("%d ", i); }

    fprintf(binFile, "\neven numbers backwards: ");
    printf("\neven numbers backwards: ");
    for (i = 24; i >= 0; i -= 2) { fprintf(binFile, "%d ", i); printf("%d ", i); }

    fprintf(binFile, "\nall numbers backwards: ");
    printf("\nall numbers backwards: ");
    for (i = 25; i >= 0; i--) { fprintf(binFile, "%d ", i); printf("%d ", i); }

    fclose(binFile);
    printf("\n\nData written to numbers.bin\n");
    return 0;
}
