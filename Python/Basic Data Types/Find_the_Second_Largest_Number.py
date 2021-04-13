# Find the Runner-Up Score!
# Find the Second Largest Number

# Given the participants' score sheet for your University Sports Day, you are required to find the runner-up score. You are given n scores. 
# Store them in a list and find the score of the runner-up.
# You are given N numbers. Store them in a list and find the second largest number.

# Input Format: 
# The first line contains N. The second line contains an array A[] of N integers each separated by a space.

# Constraints: 
# 2 <= N <= 10
# -100 <= A[i] <= 100

# Output Format: 
# Print the value of the runner-up score.(second largest number).

# Sample Input: 
# 5
# 2 3 6 6 5

# Sample Output: 
# 5

# Enter your code here. Read input from STDIN. Print output to STDOUT

n = int(input())
lis = list(map(int,raw_input().strip().split()))[:n]
z = max(lis)
while max(lis) == z:
    lis.remove(max(lis))

print max(lis)
