def is_strong_password(password):

    if len(password)<8:
        return 'Too short password'
    if not any( char.isdigit() for char in password):
        return 'There is no digit!!'
    if not any(char.islower() for char in password):
        return 'There is no Lower case character'
    if not any(char.isupper() for char in password):
        return 'There is no Upper case character'
    if not any(char in '!@#$%^&*()_+[]' for char in password):
        return 'There is no Speacial character'
    return True

def login():

    user_id = input("Enter your ID: ")
    password = input("Enter your Password: ")

    if user_id in User_data:

        if password == User_data[user_id]['password']:
            print("Login Successful!!\n")
        else:
            print("Incorrect Password!!\n")

    else:
        print("User ID does not exist!!\n")

def signin():

    print("\n\nEnter your Details for Signin--> \n")
    username= input("Enter your Username: ")    
    user_id = input("Enter your ID: ")

    while True:
        user_password = input("Create strong password: ")
        result = is_strong_password(user_password)

        if result == True:

            # Store user details inside User_data

            print("Account Created Successfully!\n\n")
            break

        else:

            print(result)
            print("Please try again!")

    User_data[user_id] = {
            'name': username,
            'id': user_id,
            'password': user_password
        }


User_data = {'id':{'name':'username', 'id': 'user_id', 'password': 'user_password'}}

while True:
    print("WELCOME!! ")
    print("1. Sign in")
    print("2. Log in")
    print("3. Show user Data")
    print("4. Exit\n")

    choice = int(input("Enter what you want to do: "))

    if choice == 1:
        signin()
    elif choice == 2:
        login()
    elif choice == 3:
        print(User_data)
    elif choice == 4:
        break
    else: 
        print("Enter valid choice\n\n")
    