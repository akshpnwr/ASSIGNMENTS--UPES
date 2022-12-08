# stack = [None]*10
# top = -1

# def push(data):
#     global top
#     top+=1
#     stack[top] = data

# def pop():
#     global top
#     popped = stack[top]
#     stack[top] = None
#     top-=1
#     return popped

# def display():
#     print('Stack : ',end='')
#     for i in range(top+1):
#         print(stack[i],end=' ')

# push(1)
# push(2)
# push(3)
# push(4)
# push(5)
# push(6)

# print(pop())
# print(pop())


# display()

class Stack:
    def __init__(self, limit = 10):
        self.stack = [None]*limit
        self.top = -1

    def push(self, data):
        self.top= self.top + 1
        self.stack[self.top] = data

    def pop(self):
        popped = self.stack[self.top]
        self.stack[self.top] = None
        self.top= self.top - 1
        return popped

    def display(self):
        for i in range(self.top+1):
            print(self.stack[i],end=' ')

s = Stack()

s.push(1)
s.push(2)
s.push(3)
s.push(4)
s.push(5)
s.push(6)

print('Before Stack : ',end= '')
s.display()


print('\nPopped value : ' + str(s.pop()))
print('Popped value : ' + str(s.pop()))

print('After Stack : ',end= '')

s.display()
