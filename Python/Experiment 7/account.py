class Account:
    def __init__(self, acc_number, acc_holder, acc_type, acc_balance):
        self.acc_number = acc_number
        self.acc_holder = acc_holder
        self.acc_type = acc_type
        self.acc_balance = acc_balance

    def debit_account(self, amount):
        self.acc_balance = self.acc_balance - amount
        print('Balance : {}'.format(self.acc_balance))
    def credit_account(self, amount):
        self.acc_balance = self.acc_balance + amount
        print('Balance : {}'.format(self.acc_balance))
    def get_interest(self, rate_of_interest, time):
        return (self.acc_balance*rate_of_interest*time)/100 

def get_account():
    acc_number = int(input('Enter account number : '))
    for acc in accounts:
        if acc.acc_number == acc_number:
            return acc

choice = True

cur_account = {}

accounts = []
while(choice):
    print('1. Create account')
    print('2. Withdraw amount')
    print('3. Deposit amount')
    print('4. Show interest')
    print('5. Delete account')
    print('6. Show account')
    print('0. Exit')

    choice = int(input('Enter your choice ? '))

    if choice == 1:
        acc_number = int(input('Enter account number : '))
        acc_holder = input('Enter account holder name : ')
        acc_type = input('Enter account type : ')
        acc_balance = int(input('Enter balance : '))
        accounts.append(Account(acc_number, acc_holder, acc_type, acc_balance))
    if choice == 2:
        acc = get_account()
        amount = int(input('Enter amount to debit : '))
        acc.debit_account(amount)
    if choice == 3:
        acc = get_account()
        amount = int(input('Enter amount to credit : '))
        acc.credit_account(amount)
    if choice == 4:
        acc = get_account()
        rate_of_interest = int(input('Enter rate of interest : '))
        time_period = int(input('Enter time period : '))
        simple_interest = acc.get_interest(rate_of_interest, time_period)
        print('\nThe simple interest on the principal amount of {} for a time period of {} years is {}\n'.format(acc.acc_balance,time_period,simple_interest))
    if choice == 5:
        acc = get_account()
        accounts.remove(acc)
        print('\nAccount deleted succesfully!\n')
    if choice == 6:
        acc = get_account()
        if acc:
            print('\nAccount holder : {}'.format(acc.acc_holder))
            print('Account Number : {}'.format(acc.acc_number))
            print('Account type : {}'.format(acc.acc_type))
            print('Account balance : {}\n'.format(acc.acc_balance))
        else:
            print('\nAccount not found!\nPlease enter valid account number!\n ')