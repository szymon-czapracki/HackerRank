def main():

    students = []
    lowest_scores = []
    num_of_students = int(input())
    for _ in range(0, num_of_students):
        students.append([input(), float(input())])

    students.sort(key=lambda x: x[1])

    min_score = students[0][1]

    new_students = [item for item in students if item[1] != min_score]

    lowest_scores.append(new_students[0])

    for student_name, score in students:
        if score == lowest_scores[0][1]:
            lowest_scores.append(student_name)

    lowest_scores.pop(0)
    lowest_scores.sort()
    print("\n".join(lowest_scores))


main()
