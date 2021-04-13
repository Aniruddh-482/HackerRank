/*
Sum and Difference of Two Numbers

Objective:
The fundamental data types in c are int, float and char. Today, we're discussing int and float data types.
The printf() function prints the given statement to the console. The syntax is printf("format string",argument_list);. 
In the function, if we are using an integer, character, string or float as argument, 
then in the format string we have to write %d (integer), %c (character), %s (string), %f (float) respectively.
The scanf() function reads the input data from the console. The syntax is scanf("format string",argument_list);. 
For ex: The scanf("%d",&number) statement reads integer number from the console and stores the given value in variable 'number'.
To input two integers separated by a space on a single line, the command is scanf("%d %d", &n, &m), where n and m are the two integers.

Input Format: 
The first line contains two integers.
The second line contains two floating point numbers.

Output Format: 
Print the sum and difference of both integers separated by a space on the first line, 
and the sum and difference of both float (scaled to 1 decimal place) separated by a space on the second line.

Sample Input: 
10 4
4.0 2.0

Sample Output: 
14 6
6.0 2.0
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b, sum_int, diff_int;
    float c, d, sum_float, diff_float;
    
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    
    sum_int = a + b;
    diff_int = a - b;
    sum_float = c + d;
    diff_float = c - d;
    
    printf("%d %d", sum_int, diff_int);
    printf("\n%.1f %.1f", sum_float, diff_float);
    
    return 0;
}
