/*
Sum of Digits of a Five Digit Number

Objective: 
The modulo operator, %, returns the remainder of a division. For example, 4 % 3 = 1 and 12 % 10 = 2. 
The ordinary division operator, /, returns a truncated integer value when performed on integers. 
For example, 5 / 3 = 1. To get the last digit of a number in base 10, use 10 as the modulo divisor.

Task: 
Given a five digit integer, print the sum of its digits.

Input Format: 
The input contains a single five digit number, n.

Constraints: 
10000 <= n <= 99999

Output Format: 
Print the sum of the digits of the five digit number.
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, a, sum = 0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    a = 10;
    for(int i = 0; i < 5; i++){
        sum += n % a;
        n /= 10;
    }
    printf("%d", sum);
    return 0;
}

