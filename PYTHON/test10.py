#Find the largest of three numbers.
a = int(input("Enter number1: "))
b = int(input("Enter number2: "))
c = int(input("Enter number3: "))

if a > b and a > c:
    print("Number",a,"is larger")
elif b > a and b > c:
    print("Number",b,"is larger")
else:
    print("Number",c,"is larger")

