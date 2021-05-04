/*
* Printing Pattern Using Loops *
  ----------------------------  
  
 Print a pattern of numbers from 1 to n as shown below. Each of the numbers is separated by a single space.

                            4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4    

Input Format: 
The input will contain a single integer n.

Constraints: 
1 <= n <= 1000  
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    for(int i = n; i >= 1; i--){
        for(int j = n; j > i; j--)
            printf("%d ", j);
        for(int j = 1; j <= 2 * i - 1; j++)
            printf("%d ", i);
        for(int j = i + 1; j <= n; j++)
            printf("%d ", j);
        printf("\n");
    }
    
    for(int i = 1; i < n; i++){
        for(int j = n; j > i; j--)
            printf("%d ", j);
        for(int j = 1; j <= 2 * i - 1; j++)
            printf("%d ", i + 1);
        for(int j = i + 1; j <= n; j++)
            printf("%d ", j);
        printf("\n");
    }
    return 0;
}

