class Atm:
    def __init__(self):
        self.pin = ""
        self.balance = 0
        self.menu()

    def menu(self):
        user_input = input("""
How would you like to proceed?
1. Enter 1 to create Pin
2. Enter 2 to deposit
3. Enter 3 to withdraw
4. Enter 4 to check balance
5. Enter 5 to exit
""")
        if user_input == 1:
            print("Create Pin")
        elif user_input == 2:
            print("Deposit amount")
        elif user_input == 3:
            print("Withdraw amount")
        elif user_input == 4:
            print("Check your balance")
        elif user_input == 5:
            print("Bye")
