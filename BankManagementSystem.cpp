#include <iostream>
#include <string>
#include <limits>

using namespace std;

struct BankAccount
{
    int accno;
    string name;
    string address;
    char actype;
    double amount;

    BankAccount()
    {
        accno = 0;
        name = "";
        address = "";
        actype = '\0';
        amount = 0.0;
    }

    bool isAvailable()
    {
        return accno == 0;
    }

    bool searchAccount(int a)
    {
        return accno == a;
    }

    void newAccount()
    {
        cout << "Enter Account No: ";
        cin >> accno;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter Full Name: ";
        getline(cin, name);

        cout << "Enter Address: ";
        getline(cin, address);

        cout << "Account Type (s = Saving / c = Current): ";
        cin >> actype;

        cout << "Enter Initial Deposit Amount: ";
        cin >> amount;

        cout << "\nAccount Created Successfully!\n";
    }

    void deposit()
    {
        double d;
        cout << "Enter Amount to Deposit: ";
        cin >> d;

        if (d > 0)
        {
            amount += d;
            cout << "Updated Balance: " << amount << endl;
        }
        else
        {
            cout << "Invalid amount.\n";
        }
    }

    void withdraw()
    {
        double wd;
        cout << "Enter Amount to Withdraw: ";
        cin >> wd;

        if (wd <= amount && wd > 0)
        {
            amount -= wd;
            cout << "Withdrawal Successful.\n";
        }
        else
        {
            cout << "Insufficient Balance or Invalid Amount.\n";
        }

        cout << "Remaining Balance: " << amount << endl;
    }

    void checkAccount()
    {
        cout << "\nAccount No: " << accno;
        cout << "\nName: " << name;
        cout << "\nAddress: " << address;
        cout << "\nAccount Type: " << actype;
        cout << "\nBalance: " << amount << endl;
    }

    void modifyAccount()
    {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Modify Name: ";
        getline(cin, name);

        cout << "Modify Address: ";
        getline(cin, address);

        cout << "Modify Account Type (s/c): ";
        cin >> actype;

        cout << "Account Modified Successfully.\n";
    }

    void deleteAccount()
    {
        accno = 0;
        name = "";
        address = "";
        actype = '\0';
        amount = 0.0;

        cout << "Account Deleted Successfully.\n";
    }
};

int main()
{
    BankAccount accounts[5];
    int choice, accNo;
    bool found;

    while (true)
    {
        cout << "\n========== BANK MENU ==========\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Check Account\n";
        cout << "5. Modify Account\n";
        cout << "6. Delete Account\n";
        cout << "7. Show All Accounts\n";
        cout << "8. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            found = false;
            for (int i = 0; i < 5; i++)
            {
                if (accounts[i].isAvailable())
                {
                    accounts[i].newAccount();
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Account limit reached.\n";
            break;

        case 2:
            cout << "Enter Account No: ";
            cin >> accNo;
            found = false;
            for (int i = 0; i < 5; i++)
            {
                if (accounts[i].searchAccount(accNo))
                {
                    accounts[i].deposit();
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Account not found.\n";
            break;

        case 3:
            cout << "Enter Account No: ";
            cin >> accNo;
            found = false;
            for (int i = 0; i < 5; i++)
            {
                if (accounts[i].searchAccount(accNo))
                {
                    accounts[i].withdraw();
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Account not found.\n";
            break;

        case 4:
            cout << "Enter Account No: ";
            cin >> accNo;
            found = false;
            for (int i = 0; i < 5; i++)
            {
                if (accounts[i].searchAccount(accNo))
                {
                    accounts[i].checkAccount();
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Account not found.\n";
            break;

        case 5:
            cout << "Enter Account No: ";
            cin >> accNo;
            found = false;
            for (int i = 0; i < 5; i++)
            {
                if (accounts[i].searchAccount(accNo))
                {
                    accounts[i].modifyAccount();
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Account not found.\n";
            break;

        case 6:
            cout << "Enter Account No: ";
            cin >> accNo;
            found = false;
            for (int i = 0; i < 5; i++)
            {
                if (accounts[i].searchAccount(accNo))
                {
                    accounts[i].deleteAccount();
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "Account not found.\n";
            break;

        case 7:
            found = false;
            for (int i = 0; i < 5; i++)
            {
                if (!accounts[i].isAvailable())
                {
                    accounts[i].checkAccount();
                    cout << "-----------------------\n";
                    found = true;
                }
            }
            if (!found)
                cout << "No accounts available.\n";
            break;

        case 8:
            cout << "Exiting...\n";
            return 0;

        default:
            cout << "Invalid choice.\n";
        }
    }
}