#include <iostream>

using namespace std;

int main()
{
//declaration of my variables
    int id, password, userID, userPass;
    char choice, choice1;
    double balance = 0;
    

    cout << "Hi! Welcome to the ATM Machine! \n";
// we used a do while loop that has an exit condition of q
    do {
        
        cout << "Please select an option from the menu below: \n";
        cout << "l -> Login \n";
        cout << "c -> Create New Account \n";
        cout << "q -> Quit\n";
        cin >> choice;
//let us switch the choice of the user concerning login and creating
        switch (choice) {
            case 'c':
                cout << "Please enter your user id: ";
                cin >> userID;
                cout << "Please enter your password: ";
                cin >> userPass;
                cout << "Thank You! Your account has been created!\n";
                break;

            case 'l'://in case the user press l tell him to get these informations below and the computer will verify if they are true
                cout << "Please enter your user id: ";
                cin >> id;
                cout << "Please enter your password: ";
                cin >> password;

                if (id == userID && password == userPass) {
                    cout << "Access Granted! \n";

                    while (choice1 != 'q') {
                        cout << "d -> Deposit Money \n";
                        cout << "w -> Withdraw Money \n";
                        cout << "r -> Request Balance\n";
                        cout << "q -> Quit \n";
                        cin >> choice1;

                        switch (choice1) {
                            case 'd':
                                int deposit;
                                cout << "Amount of deposit: $ ";
                                cin >> deposit;
                                balance += deposit;
                                break;

                            case 'w':
                                double withdraw;
                                cout << "Amount of withdrawal: $ ";
                                cin >> withdraw;

                                if (withdraw <= balance) {
                                    balance -= withdraw;
                                    cout << "";
                                } else {
                                    cout << "Your account is too low! \n";
                                }
                                break;

                            case 'r':
                                cout << "Your balance is: $" << balance << "\n";
                                break;

                            case 'q':
                                cout << "\n";
                                break;

                            default:
                                cout << "Invalid choice! \n";
                                break;
                        }
                    }
                } else {
                    cout << "*** LOGIN FAILED! *** \n";//incase the user want to login without any account
                }
                break;
case 'q':
                cout << "Thanks for coming!";//a message thst will be displayed when we choose to quit
                break;
            default:
                cout << "Invalid choice! \n";
                break;
        }
    } while (choice != 'q');

    return 0;
}




