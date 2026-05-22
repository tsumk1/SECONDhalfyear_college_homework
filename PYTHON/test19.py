#Count the number of vowels in a string.
#Ага...цікаво
string = input("Enter some text: ")
count = 0 
for i in string:

   if i in 'aAeEiIoOuU': #  'in' перевіряє, чи є символ серед указаних букв 
      count += 1
      
print("The number of volves in a string: " , count)

