#Getting started with lists

#Announcement and output
print("Announcement: ")
numbers = [1, 2, 22]
smth = [1, 2.35, '4', True, "Мяу"]
idk = ["Something", 1, 3 , ["HOPA, one more list", 8, 9]]
unsorted = [1, 5, 3 , 4, 24, 0 ]

print(numbers)
print(smth)
print(idk)
print("Unsorted list -", unsorted)



#Index. Replacing values ​​by index. Math
print("\nIndex: ")
print(numbers[1]) #0, 1, 2...
print(idk[3])
print(numbers[-1]) # -1 -- negative index that points to the last element. Or its just take elements from the end
print(numbers[-2]) # result will be 1, not 45

numbers[0] = 45 
print(numbers)

print(numbers[2] + 5)
print(numbers[1] + numbers[0]) # result is 47 bc index 0 was replased with 45



#Functions
print("\nFunctions: ")
numbers.append(8) # adds elements to the end of the list
print(numbers)

numbers.insert(1, False)# new element by certain index "in index 1 , i put False". The index increases by one 
numbers.extend([3, 5])# or numbers.extend(idk) # adds another list in this one

#Functions. Sorting
print("\nFunctions. Sorting: ") # you can use .sort function even if you have list with elements with the same data type
unsorted.sort()
print(unsorted)

unsorted.reverse() #from largest to smaller
print(unsorted)

smth.pop() # delete the last element 
print(smth)

smth.remove(True) # delete element by value

print(numbers.count(2)) # counts the number of identical elements
print(len(idk)) # the number of elements in this list



#For. While
print("\nLoops: ") # а я все чекаю яблуко
new_list = [2, 4, 2, 5, 7, 8]

for i in new_list:
    i += 1
    print(i)

print("\n")

a = 0
while a < len(new_list):  
    print("hello")
    a += 1

    



