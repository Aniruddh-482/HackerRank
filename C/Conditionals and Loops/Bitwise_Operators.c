/*
Bitwise Operators

In this challenge, you will use logical bitwise operators. All data is stored in its binary representation. 
The logical operators, and C language, use 1 to represent true and 0 to represent false. 
The logical operators compare bits in two numbers and return true or false, 0 or 1, for each bit compared.

  * Bitwise AND operator & The output of bitwise AND is 1 if the corresponding bits of two operands is 1. 
    If either bit of an operand is 0, the result of corresponding bit is evaluated to 0. It is denoted by &.
  * Bitwise OR operator | The output of bitwise OR is 1 if at least one corresponding bit of two operands is 1. It is denoted by |.
  * Bitwise XOR (exclusive OR) operator ^ The result of bitwise XOR operator is 1 if the corresponding bits of two operands are opposite. It is denoted by ⊕.

For example, for integers 3 and 5,

    3 = 00000011 (In Binary)
    5 = 00000101 (In Binary)

    AND operation        OR operation        XOR operation
      00000011             00000011            00000011
    & 00000101           | 00000101          ^ 00000101
      ________             ________            ________
      00000001  = 1        00000111  = 7       00000110  = 6

Function Description: 
Complete the calculate_the_maximum function in the editor below.
calculate_the_maximum has the following parameters: 
* int n: the highest number to consider
* int k: the result of a comparison must be lower than this number to be considered

Prints: 
Print the maximum values for the and, or and xor comparisons, each on a separate line.

Input Format: 
The only line contains 2 space-separated integers, n and k, respectively.

Output Format: 
* The first line of output contains the maximum possible value of (a & b).
* The second line of output contains the maximum possible value of (a | b).
* The second line of output contains the maximum possible value of (a ⊕ b).
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

void calculate_the_maximum(int n, int k) {
    //Write your code here.
    int i = 0, j = 0;
    int and, and_max = 0;
    int or, or_max = 0;
    int xor, xor_max = 0;
    for ( i = 1 ; i <= n ; i++ )
    {
        for ( j = 1 ; j <= n ; j++ )
        {
            if ( i < j )
            {
                and  = i & j;
                if ( and > and_max && and < k )
                {
                    and_max = and;
                }
                or   = i | j;
                if ( or > or_max && or < k )
                {
                    or_max = or;
                }
                xor  = i ^ j;
                if ( xor > xor_max && xor < k )
                {
                    xor_max = xor;
                }
            }
        }
    }
    printf("%d\n", and_max);
    printf("%d\n", or_max);
    printf("%d", xor_max);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
