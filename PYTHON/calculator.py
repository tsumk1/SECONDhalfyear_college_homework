#Create a simple calculator (+, -, *, /).
while True:

  a = int(input("Enter first number: "))
  act = input("Choose action: + - * /   : ")
  b = int(input("Enter second numbers: "))
  print('--------------------------------------')

  if act == '+':
     result = a+b
  elif act == '-':
     result = a-b
  elif act == '*':
     result = a*b
  elif act == '/':
     result = a/b
  else:
     print("Error. Wrong symbol")
     answer = input("Try again? Yes/No: ")
     print('--------------------------------------')

     if answer == 'Yes':
       continue
     else:
       print("Goodbye!")
       break

  print("Result: ", result)
  answer = input("Try again? Yes/No: ")
  print('--------------------------------------')
  if answer == 'Yes':
       continue
  else:
       print("Goodbye!")
       break

  break 


 

