# Finding the percentage #
# ---------------------- #

# The provided code stub will read in a dictionary containing key/value pairs of name:[marks] for a list of students. 
# Print the average of the marks array for the student name provided, showing 2 places after the decimal.

# Example: 
# marks key:value pairs are
# 'alpha': [20, 30, 40]
# 'beta': [30, 50, 70]
# query_name = 'beta'
# The query_name is 'beta'. beta's average score is (30 + 50 + 70) / 3 = 50.0.

# Input Format: 
# The first line contains the integer n, the number of students' records. 
# The next n lines contain the names and marks obtained by a student, each value separated by a space. 
# The final line contains query_name, the name of a student to query.

# Output Format: 
# Print one line: The average of the marks obtained by the particular student correct to 2 decimal places.

# Sample Input: 
# 3
# Krishna 67 68 69
# Arjun 70 98 63
# Malika 52 56 60
# Malika

# Sample Output: 
# 56.00


# Enter your code here. Read input from STDIN. Print output to STDOUT

if __name__ == '__main__':
    n = int(raw_input())
    student_marks = {}
    for _ in range(n):
        line = raw_input().split()
        name, scores = line[0], line[1:]
        scores = map(float, scores)
        student_marks[name] = scores
    query_name = raw_input()
    
    def average(a):
        avr = 0
        for num in a:
            avr += num
        avr = avr / 3
        return avr
    
    average_score = average(student_marks[query_name])
    print("{:.2f}".format(average_score))
