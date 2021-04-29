# Nested Lists #
# ------------ #

# Given the names and grades for each student in a class of N students, store them in a nested list and print the name(s) of any student(s) having the second lowest grade.
# Note: If there are multiple students with the second lowest grade, order their names alphabetically and print each name on a new line.

# Input Format: 
# The first line contains an integer, N, the number of students.
# The 2N subsequent lines describe each student over 2 lines.
# - The first line contains a student's name.
# - The second line contains their grade.

# Constraints: 
# * 2 <= N <= 5
# * There will always be one or more students having the second lowest grade.

# Output Format: 
# Print the name(s) of any student(s) having the second lowest grade in. If there are multiple students, 
# order their names alphabetically and print each one on a new line.


# Enter your code here. Read input from STDIN. Print output to STDOUT

from operator import itemgetter

student_grades = []
for _ in range(int(raw_input())):
    name = raw_input()
    score = float(raw_input())
    student_grades.append([name, score])

# min of all elements
minimum = min(student_grades, key=itemgetter(1))[1]

# remove elements equal to min
filtered = [x for x in student_grades if x[1] != minimum]

# get min of remaining
minimum = min(filtered, key=itemgetter(1))[1]

# filter remaining
filtered = [x for x in filtered if x[1] == minimum]

# Ordered alphabetically
filtered.sort()

for i in filtered:
    print(i[0])

