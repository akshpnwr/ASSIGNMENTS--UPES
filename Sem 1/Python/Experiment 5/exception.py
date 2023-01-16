class MyException(Exception):
    pass

print('Tuining My Guitar')

try:
    raise MyException({'message': 'String broke'})
except MyException as e:
    print('Error occured!!\nException found!!')
    details = e.args[0]
    print(details['message'])