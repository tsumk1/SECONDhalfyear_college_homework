def create_rating(students: list) -> list:
    n = len(students)

    for i in range(n):
        max_index = i

        for i in range(n):
            max_index = i

            for j in range(i + 1, n):
                if students[j][1] > students[max_index][1]:
                    max_index = j

            students[i], students[max_index] = students[max_index], students[i]

            return students

students = [("Іван", 85),
            ("Марія", 92),
            ("Олег", 78),
            ("Анна", 95),
            ("Софія", 88)
]

rating = create_rating(students)

print("Рейтинг студентів: ")

for student in rating:
    print(student[0], "-", student[1])
     
        

