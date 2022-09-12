from operator import le


print('Enter marks of the student(out of 100): ')

sum = 0
for i in range(1, 6):
    sum += int(input('Subject ' + str(i) + ': '))

averageMarks = sum/5

print(averageMarks)

if (91 <= averageMarks <= 100):
    grade = 'O'
if (81 <= averageMarks <= 90):
    grade = 'A+'
if (71 <= averageMarks <= 80):
    grade = 'A'
if (61 <= averageMarks <= 70):
    grade = 'B+'
if (51 <= averageMarks <= 60):
    grade = 'B'
if (41 <= averageMarks <= 50):
    grade = 'C+'
if (35 <= averageMarks <= 40):
    grade = 'C'
if (averageMarks < 35):
    grade = 'Fail'

print('The grade of the student is: '+grade)
