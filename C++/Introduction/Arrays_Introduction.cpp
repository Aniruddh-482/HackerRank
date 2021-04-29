/*
Arrays Introduction

An array is a series of elements of the same type placed in contiguous memory locations that can be individually 
referenced by adding an index to a unique identifier.

For arrays of a known size, 10 in this case, use the following declaration:

    int arr[10]; //Declares an array named arr of size 10, i.e, you can 
    store 10 integers.

Note: Unlike C, C++ allows dynamic allocation of arrays at runtime without special calls like malloc(). 
If n = 10, int arr[n] will create an array with space for 10 integers.

Accessing elements of an array:

    Indexing in arrays starts from 0.So the first element is stored at 
    arr[0],the second element at arr[1] and so on through arr[9].

You will be given an array of N integers and you have to print the integers in the reverse order.


Input Format: 
The first line of the input contains N,where N is the number of integers.The next line contains N space-separated integers.


Constraints: 
1 <= N <= 1000
1 <= A[i] <= 1000, where A[i] is the i th integer in the array.


Output Format: 
Print the N integers of the array in the reverse order, space-separated on a single line.
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int N;
    
    cin>>N;
    
    int arr[N];
    
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    for (int i = N-1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    
    return 0;
}

