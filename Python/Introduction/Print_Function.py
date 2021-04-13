# Print Function

# The included code stub will read an integer, n, from STDIN.
# Without using any string methods, try to print the following:
# 123...n
# Note that "..." represents the consecutive values in between.
# Example
# n = 5
# Print the string 12345.

# Input Format: 
# The first line contains an integer n.

# Constraints
# 1 <= s <= 150

# Output Format: 
# Print the list of integers from 1 through n as a string, without spaces.

# Enter your code here. Read input from STDIN. Print output to STDOUT

n = int(raw_input())
numbers = 0
div = 10
for num in range(1, n + 1):
    if num == 10 or num == 100:
        div *= 10
    numbers = (numbers * div) + num
print(numbers)
