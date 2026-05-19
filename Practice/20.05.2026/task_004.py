def validate_brackets(code: str) -> bool:
    stack = []

    for symbol in code:

        if symbol == "(" or symbol == "[" or symbol == "{" :
            stack.append(symbol)

        elif symbol == ")" or symbol == "]" or symbol == "}" :

            if len(stack) == 0:
                return False

            top = stack[-1]

            if symbol == ")" and top != "(":
                return False

            if symbol == "]" and top != "[":
                return False

            if symbol == "}" and top != "{":
                return False

            stack.pop()

    return len(stack) == 0

code = input("Введіть код: ")

if validate_brackets(code):
    print("Дужки розставлені правильно")
else: 
    print("Дужки розставлені не правильно")