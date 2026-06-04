#Check if a string is a palindrome.

#Паліндром — це слово, фраза, число або рядок символів, 
# які абсолютно однаково читаються зліва направо і справа наліво (ігноруючи пробіли та розділові знаки)
#Отак даже , ого..

word = input("Enter a word: ")
reversed_word = "".join(reversed(word))


if word == reversed_word:
    print("The word is palindrome :)")
else:
    print("The word isn`t palindrome :(")