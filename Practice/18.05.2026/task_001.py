def find_product(products: list, target: str) -> int:
    for i in range(len(products)):
        if products[i] == target:
            return i + 1
    return -1

products = ["Ноутбук", "Мишка", "Клавіатура", "Монітор"]
target = input("Введіть назву товару: ")

result = find_product(products, target)

if result != -1:
    print("Товар знайдено на позиції: ", 
result)
else:
    print("Товар не знайдено")
 
