def simpleInterest(principalBalance, time, rate):
    si = ((principalBalance*rate*time)/100)
    return {"amount": principalBalance + si , "simpleInterest": si}

principalBalance = int(input('Enter principal balance : '))
time = int(input('Enter time (in years) : '))
rate = int(input('Enter annual interest rate : '))


result = simpleInterest(principalBalance, time, rate)

print('Simple interest for principal amount {} for {} year at a rate of {}% = {}'.format(principalBalance, time, rate, result['simpleInterest']))
print('Final amount {}'.format(result['amount']))