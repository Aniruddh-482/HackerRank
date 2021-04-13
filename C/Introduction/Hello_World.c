/*
Say "Hello, World!" With C

Objective: 
In this challenge, we will learn some basic concepts of C that will get you started with the language. 
You will need to use the same syntax to read input and write output in many C challenges. 
As you work through these problems, review the code stubs to learn about reading from stdin and writing to stdout.

Input Format
There is one line of text, s.

Sample Input: 
Welcome to C programming.

Sample Output: 
Hello, World!
Welcome to C programming. 
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
  	
    printf("Hello, World!\n%s", &s);    
    return 0;
}

/*
We can take string input in C using scanf(“%s”, str). But, it accepts string only until it finds first space.

Using %[^\n]%*c inside scanf we can accepts string with space in the form of user input.

Explanation : 
    Here, [] is the scanset character. ^\n tells to take input until newline doesn’t get encountered. 
    Then, with this %*c, it reads newline character and here used * indicates that this newline character is discarded.
*/
