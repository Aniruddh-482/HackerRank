/* 
Basic Data Types

* Some C++ data types, their format specifiers, and their most common bit widths are as follows: 
  >  Int ("%d"): 32 Bit integer
  >  Long ("%ld"): 64 bit integer
  >  Char ("%c"): Character type
  >  Float ("%f"): 32 bit real value
  >  Double ("%lf"): 64 bit real value

Reading: 
To read a data type, use the following syntax:
  scanf("`format_specifier`", &val)

For example, to read a character followed by a double:
  char ch;
  double d;
  scanf("%c %lf", &ch, &d);

For the moment, we can ignore the spacing between format specifiers.

Printing: 
To print a data type, use the following syntax:
  printf("`format_specifier`", val)

For example, to print a character followed by a double:
  char ch = 'd';
  double d = 234.432;
  printf("%c %lf", ch, d);

Note: You can also use cin and cout instead of scanf and printf; however, 
if you are taking a million numbers as input and printing a million lines, 
it is faster to use scanf and printf.

Input Format: 
Input consists of the following space-separated values: int, long, char, float, and double, respectively.

Output Format: 
Print each element on a new line in the same order it was received as input. 
Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.
*/


#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Complete the code.
    int i;
    long l;
    char c;
    float f;
    double d;
    
    cin>> i >> l >> c >> f >> e;
    
    cout<< i << endl<< l << endl << c << endl;
    
    cout << fixed << setprecision(3) << f << endl;
   
    cout << fixed << setprecision(9) << d << endl;
    
    return 0;
}

// OR

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int i;
    long l; 
    char c;
    float  f; 
    double d;
    
    cin>> i >> l  >> c >> f >> d;
    
    cout<< i << endl << l << endl << c << endl;
    
    cout.precision(3);
    cout<< fixed << f << endl;
    
    cout.precision(9);
    cout<< fixed << d;
    
    return 0;
}
