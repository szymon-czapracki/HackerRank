def main():

    num_of_records = int(input())
    students = []
    for _ in range(num_of_records):
        line = input().split()
        name, scores = line[0], line[1:]
        students.append([name, scores])

    student_query = input()

    for student in students:
        if student[0] == student_query:
            average = float((float(student[1][0]) + float(student[1][1]) + float(student[1][2])) / 3)
            print("{:.2f}".format(average))


main()
