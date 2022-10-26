
# try:
#     print('Inside the try block')
#     raise SyntaxError('Correct your syntax')
# except SyntaxError:
#     print('Syntax Error caught and handled')

from email import message


class MyException(Exception):
    pass

# raise MyException("My hovercraft is full of eels")

print('Tuining My Guitar')
try:
    raise MyException({'message': 'String broke'})
except MyException as e:
    details = e.args[0]
    print(details['message'])