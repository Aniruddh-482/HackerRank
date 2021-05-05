# Lists #
# ----- #

# Consider a list (list = []). You can perform the following commands: 
#   1. insert i e: Insert integer e at position i.
#   2. print: Print the list.
#   3. remove e: Delete the first occurrence of integer e.
#   4. append e: Insert integer e at the end of the list.
#   5. sort: Sort the list.
#   6. pop: Pop the last element from the list.
#   7. reverse: Reverse the list.
# Initialize your list and read in the value of n followed by n lines of commands where each command will be of the 7 types listed above. 
# Iterate through each command in order and perform the corresponding operation on your list.

# Input Format: 
# The first line contains an integer, n, denoting the number of commands.
# Each line i of the n subsequent lines contains one of the commands described above.

# Constraints: 
#   The elements added to the list must be integers.
  
# Output Format: 
# For each command of type print, print the list on a new line.

# Enter your code here. Read input from STDIN. Print output to STDOUT


if __name__ == '__main__':
    N = int(raw_input())
    arr = []
    
    for i in range(N):
        s = raw_input().split()
        for i in range(1,len(s)):
            s[i] = int(s[i])
            
        if s[0] == "insert":
            arr.insert(s[1],s[2])
        elif s[0] == "print":
            print arr
        elif s[0] == "remove":
            arr.remove(s[1])
        elif s[0] == "append":
            arr.append(s[1])
        elif s[0] == "sort":
            arr.sort()
        elif s[0] == "pop":
            arr.pop()
        elif s[0] == "reverse":
            arr.reverse()
        
