#Count the number of even numbers in a list.
nums = [1, 2, 3, 4]
even = 0
for i in nums:
    i += 1
    if i % 2 == 0: 
       even += 1
print("Number of even numbers: ", even)