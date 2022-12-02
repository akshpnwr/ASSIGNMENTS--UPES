import firebase_admin
from firebase_admin import db

cred_obj = firebase_admin.credentials.Certificate('C:/Users/91639/Desktop/Python firebase/firebase/key.json')
default_app = firebase_admin.initialize_app(cred_obj, {
	'databaseURL': 'https://python-db-2239d-default-rtdb.firebaseio.com/'
})

ref = db.reference("/Employees")


choice = 'y'

Employees = []

def listEmployees():
    employees = ref.get()
    for key, value in employees.items():
        Employees.append(value)
        for key, value in value.items():
            print(str(key) + ' : ' + str(value))

def appendEmployee():
    name = input('Enter name : ')
    age = int(input('Enter age : '))
    salary = int(input('Enter salary : '))
    Employees.append({'name' : name, 'age': age, 'salary': salary})
    ref.push({'name' : name, 'age': age, 'salary': salary})

def searchEmployee():
    name = input('Enter name : ')
    for employee in Employees:
        if name == employee['name']:
            for key,value in employee.items():
               print(str(key) + ' : ' + str(value))


while choice == 'y' or choice == 'Y':
    print('1. List all the employees')
    print('2. Append a new employee')
    print('3. Searching for a specific employee')
    print('0. Exit ')

    selected  = int(input('Enter your choice : '))
    print('-------------')

    if selected == 1:
        listEmployees()
    if selected == 2:
        appendEmployee()
    if selected == 3:
        searchEmployee()
    if selected == 0:
        print('Exiting....')
        exit(0)


# .\env\Scripts\activate
# & "c:/Users/91639/Desktop/Python firebase/firebase/env/Scripts/Activate.ps1"                               