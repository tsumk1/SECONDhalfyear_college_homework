def search_dictionary(dictionary: list,
word: str) -> str: 
    left = 0
    right = len(dictionary) - 1

    while left <= right:
        middle = (left + right) //2

        if dictionary[middle][0] == word:
            return dictionary[middle][1]
        
        elif  dictionary[middle][0] < word:
            left = middle + 1

        else:
            right = middle - 1

    return "Слово не знайдено"

dictionary = [("Apple", "Яблуко"),
              ("Book", "Книга"),
              ("Computer", "Електронний пристрій"),
              ("Mouse", "Комп'ютерна миша"),
              ("Phone", "Телефон")
]

word = input("Введіть слово: ")

result = search_dictionary(dictionary, word)

print(result)