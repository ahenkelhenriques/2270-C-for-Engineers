/***************************************************************
 Author    : Alexis Henkel
 Course    : COP 2270 Sec ANSI C Online
 Professor : Michael Robinson
 Program # : 4
 Purpose   : Reads an existing text file character by character,
             writes each character into a new text file,
             and displays each character to the screen.
 Due Date  : 11/15/2025

 Certification:
 I hereby certify that this work is my own and none of it is
 the work of any other person.

 ..........{ Alexis Henkel }..........
 ***************************************************************/

#include <stdio.h>
#define STRSIZ 80

int main(void)
{
    char in_name[STRSIZ];      /* input file name                   */
    char out_name[STRSIZ];     /* output file name                  */
    FILE *inp;                 /* pointer to input file             */
    FILE *outp;                /* pointer to output file            */
    char ch;                   /* one character                     */
    int status;                /* read status                       */

    /* Required filenames per assignment */
    /* DO NOT change these unless professor says otherwise */
    sprintf(in_name, "HenkelATextFileInput.txt");
    sprintf(out_name, "HenkelATextFileOutput.txt");

    /* Open input file (re-prompt like the book example) */
    printf("Enter name of file you want to back up: ");
    for (scanf("%s", in_name);
         (inp = fopen(in_name, "r")) == NULL;
         scanf("%s", in_name))
    {
        printf("Cannot open %s for input\n", in_name);
        printf("Re-enter file name: ");
    }

    /* Open output file (re-prompt like the book example) */
    printf("Enter name for backup copy: ");
    for (scanf("%s", out_name);
         (outp = fopen(out_name, "w")) == NULL;
         scanf("%s", out_name))
    {
        printf("Cannot open %s for output\n", out_name);
        printf("Re-enter file name: ");
    }

    /* Copy one character at a time (book method) */
    for (status = fscanf(inp, "%c", &ch);
         status != EOF;
         status = fscanf(inp, "%c", &ch))
    {
        fprintf(outp, "%c", ch);   /* write to output file  */
        printf("%c", ch);          /* display to user       */
    }

    /* Close files */
    fclose(inp);
    fclose(outp);

    printf("\nCopied %s to %s.\n", in_name, out_name);

    return 0;
}