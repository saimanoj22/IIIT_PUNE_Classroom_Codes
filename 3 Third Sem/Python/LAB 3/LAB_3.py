class Person:
    def __init__(self, username, password):
        self.username = username
        self.password = password
    def validator(self):
        check = True
        if len(self.password) < 6:
            print('\nPassword must not be less than 6 characters.')
            check = False
        if len(self.password) > 12:
            print('Password must be not be greater than 12 characters.')
            check = False
        if not any(char.isdigit() for char in self.password):
            print('Password should contain atleast one DIGIT.')
            check = False
        if not any(char.isupper() for char in self.password):
            print('Password should contain atleast one UPPERCASE letter.')
            check = False
        if not any(char.islower() for char in self.password):
            print('Password should contain atleast one LOWERCASE letter.')
            check = False
        return check
    def display(self):
        print('Your Password is valid.')
        print('USERNAME :', self.username)
        print('PASSWORD :', self.password)
 
username = input('Enter your username : ')
password = input('Enter your password : ')
vali = Person(username, password)
if(vali.validator()):
    vali.display()
else:
    print('\nYour password is INVALID. Try again after resolving above errors.')