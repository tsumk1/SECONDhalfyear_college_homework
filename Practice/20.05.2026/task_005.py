import time

#Рекурсивний підхід
def climb_recursive(n: int) -> int:
    if n <= 2:
        return n
    return climb_recursive(n-1) + climb_recursive(n - 2)

#Ітеративний підхід
def climb_iterative(n: int) -> int:
    if n <= 2:
        return n
    
    a = 1
    b = 2
    
    for i in range(3, n+1):
        c = a+b
        a = b
        b = c 

    return b

values = [10, 20, 30, 35]

for n in values:
    start = time.time()
    result_rec = climb_recursive(n)
    rec_time = time.time() - start

    start = time.time()
    result_it = climb_iterative(n)
    it_time = time.time() - start

    print(f"n = {n}")
    print("Кількість способівж:", result_rec)
    print("Рекурсивний час", rec_time)
    print("Ітеративний підхід:", it_time)
    print()
    



       


    