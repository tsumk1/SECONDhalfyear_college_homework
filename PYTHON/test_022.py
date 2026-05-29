#Find the largest element in a list.
numbers = [2, 3, 56, 5, 8]
largest = numbers[0]

for num in numbers:
    if num > largest:
        largest = num
print(largest)