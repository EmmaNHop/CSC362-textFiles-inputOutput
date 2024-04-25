# CSC362 textFiles inputOutput
 
The
purpose of this program is to input a textfile and output select characters to a second textfile. Those
characters are the letters that fall between two letters input by the user, as well as punctuation and
whitespace (note: whitespace is more than blank spaces).
After declaring your variables, input from the user two filenames (for the input and output file
respectively) and two letters. The filenames will be string variables (no more than 20 characters
are needed) and they should be the only arrays you declare in this program. The first letter must
be less than the second letter (they can either be upper or lower case). Use data verification to
ensure both input characters are letters with the first being less than the second. Here is an example
of code you might use.
prompt the user
do {
input both characters
}while(!isalpha(first)||!isalpha(second)||
tolower(first)>tolower(second));
To input chars, remember that the variable names need & (as opposed to strings) but also to input
chars, add a space before the %c conversion character, as in scanf(" %c", &first); or
scanf(" %c %c", &first, &second);
Open both files, the first as a read file and the second as a write file. The program will then input
the first file character-by-character using a while loop and output those letters that fall between the
two user-input letters (inclusively) along with all whitespace and punctuation marks but no digits.
All of this output goes to the second (write) file. As the input letters can be upper or lower case,
you will have to ensure that the current character is compared to these two properly. For instance,
if the letters input from the user are ‘b’ and ‘p’ and the current character is either ‘d’ or ‘D’, it
should be output. Use toupper or tolower to compare first/second and the file’s character.
While inputting and determining if a character is to be output, your program will also be required
to count each input character, each output character, and the number of letters that were not output
(this last count doesn’t include digits). After exiting the while loop, close both files and compute
the difference in size between the output file and input file as a percentage using the formula
output_size / input_size * 100. The variables input_size and output_size should be
ints and that would make the above division an int division requiring that you perform some kind
of casting to make one value a double (without this, you will likely wind up with a value of 0.0
since input_size > output_size). Output a short report to the console window (using printf
statements) that lists the input file name, output file name, size of input file, size of output file,
number of letters not output, and percentage file change. See the example output on the next page
of this assignment. The output should be reasonably formatted with the numbers lining up.
There are two input files on the website. Download them and run your program on the first using
letters ‘b’ and ‘p’ (or ‘B’ and ‘P’), comparing your results to the results below. Once your program
is properly debugged, run your program on the second input using ‘e’ and ‘x’. Copy and paste the
output from the console window (the printf statements) and copy the output text file to your .c
file in comments at the bottom. Submit your program by email to foxr@nku.edu by the specified
due date and time. Only email the .c (.cpp) file (which should include the console output and the
output file). Note: if your file sizes are off by 1, don’t worry about it. This happens when running
on different platforms.
Input:
Enter the input file name: p1in1.txt
Enter the output file name: p1out1.txt
Enter two letters separated by a blank space: b p
Output:
Size of p1in1.txt is: 158
Size of p1out1.txt is: 111
Letters not output is: 47
Difference in size is: 70.25%
Created text file (message1output.txt):
Infomion i no knoledge;
knoledge i no idom,
idom i no h,
h -- i no be,
be i no loe,
loe i no mic.
MIC i he BE!