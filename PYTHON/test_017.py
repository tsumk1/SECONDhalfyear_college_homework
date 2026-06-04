#Reverse a string.
string = "Hello world"
reversed_string = "" .join(reversed(string)) # reversed(text) створює ітератор, а "".join() збирає його до купи
print(string)
print(reversed_string)