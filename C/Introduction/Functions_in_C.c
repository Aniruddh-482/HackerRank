/*
Functions in C

Objective: 
In this challenge, you will learn simple usage of functions in C. Functions are a bunch of statements grouped together. 
A function is provided with zero or more arguments, and it executes the statements on it. 
Based on the return type, it either returns nothing (void) or something.

A sample syntax for a function is: 

	return_type function_name(arg_type_1 arg_1, arg_type_2 arg_2, ...) {
  ...
  ...
  ...
  [if return_type is non void]
        	return something of type `return_type`;
  }

Task: 
Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.

Input Format: 
Input will contain four integers - a, b, c, d , one on each line.

Output Format: 
Print the greatest of the four integers.
*/


#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int arr[4] = {a, b, c, d};
    int max = 0;
    for(int i=0; i<4; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
