/* Emma Hopkins -- programming assignment #1 -- this program corrects errors made in a text file,
	through the correction of accidental double letters, numbers written out instead of in numerical
	form, and results in the percentage of size difference between files */

#include <stdio.h>
#include <ctype.h>

int main() {
    //declare variables
    char fileName[20];

    printf("Enter a file pathway: ");
    scanf("%s",fileName);

    FILE *input = fopen(fileName, "r");
    FILE *output = fopen("output.txt", "w");
    char first;
    char second;


    //start reading file characters
    while((first = getc(input)) != EOF){
        //is first an upper case letter?
        if (isupper(first)) {
            second = getc(input);
            if (first != second) {
                putc(first, output);
            }
            ungetc(second, input);
        }
        //is first a digit?
        else if (isdigit(first)) {
            //nested if-else to compare each digit and output the word
            if (first == '0')
                fputs("zero", output);
            else if (first == '1')
                fputs("one", output);
            else if (first == '2')
                fputs("two", output);
            else if (first == '3')
                fputs("three", output);
            else if (first == '4')
                fputs("four", output);
            else if (first == '5')
                fputs("five", output);
            else if (first == '6')
                fputs("six", output);
            else if (first == '7')
                fputs("seven", output);
            else if (first == '8')
                fputs("eight", output);
            else if (first == '9')
                fputs("nine", output);

            second = getc(input);
            /*if second is a digit, output a '-'*/
            if (isdigit(second)) {
                fputs("-", output);
            }
            ungetc(second, input);
        }
        else {
            putc(first, output);
        }
    }

    fclose(output);
    fclose(input);

}