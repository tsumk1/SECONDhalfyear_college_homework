class Deque:
    def __init__(self):
        self.items = []

    def add_front(self, item):
        self.items.insert(0, item)

    def add_rear(self, item):
        self.items.append(item)

    def remove_front(self):
        return self.items.pop(0)

    def remove_rear(self):
        return self.items.pop()

    def is_empty(self):
        return len(self.items) == 0


def is_palindrome(phrase: str) -> bool:
    dq = Deque()

    # очищення рядка
    cleaned = ""

    for char in phrase.lower():
        if char.isalnum():
            cleaned += char

    # запис у deque
    for char in cleaned:
        dq.add_rear(char)

    # перевірка
    while len(dq.items) > 1:
        if dq.remove_front() != dq.remove_rear():
            return False

    return True


print(is_palindrome("A man, a plan, a canal: Panama"))
print(is_palindrome("Hello"))
