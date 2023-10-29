#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Passport {
public:
    string firstName;
    string lastName;
    string middleName;
    int userAge;
    int serialPassport;
    int numberPassport;
    string dateOfIssue;
    string IssuedPassport;
};

int main() {
    vector<Passport> passports;

    while (true) {
        Passport newPassport;

        cout << "Enter First Name: ";
        getline(cin, newPassport.firstName);

        cout << "Enter Last Name: ";
        getline(cin, newPassport.lastName);

        cout << "Enter Middle Name: ";
        getline(cin, newPassport.middleName);

        cout << "Enter Age: ";
        while (!(cin >> newPassport.userAge)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter a valid number: ";
        }

        cout << "Enter Serial Passport: ";
        while (!(cin >> newPassport.serialPassport)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter a valid number: ";
        }

        cout << "Enter Number Passport: ";
        while (!(cin >> newPassport.numberPassport)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please enter a valid number: ";
        }

        cin.ignore(); 

        cout << "Enter Date Of Issue: ";
        getline(cin, newPassport.dateOfIssue);

        cout << "Who Issued the Passport: ";
        getline(cin, newPassport.IssuedPassport);

        passports.push_back(newPassport);

        string choice;
        cout << "Do you want to add another passport? (yes/no): ";
        cin >> choice;

        if (choice != "yes") {
            break;
        }
    }

    cout << "Passports Requiring New Photos:" << endl;
    for (const Passport& passport : passports) {
        cout << "First Name: " << passport.firstName << endl;
        cout << "Last Name: " << passport.lastName << endl;
        cout << "Middle Name: " << passport.middleName << endl;
        cout << "Age: " << passport.userAge << endl;
        cout << "Serial Passport: " << passport.serialPassport << endl;
        cout << "Number Passport: " << passport.numberPassport << endl;
        cout << "Date of Issue: " << passport.dateOfIssue << endl;
        cout << "Issued by: " << passport.IssuedPassport << endl;
        cout << endl;
    }

    return 0;
}
