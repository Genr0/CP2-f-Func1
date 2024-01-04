#include <iostream>
using namespace std;
int MainMenu() {
    cout
        << "--- Please Select for Math Solution to use ---\n"
        << "1. Add\n"
        << "2. Subtract\n"
        << "3. Multipliction\n"
        << "4. Division\n"
        << "\n"
        << "Enter Choice: ";
    return 0;
}
int Calculatorings()
{
    int choice, val1, val2;
    char continueChoice = 'y';
    do {
        do {
            cin >> choice;
            system("cls");
            switch (choice)
            {
            case 1:
                cout << "Please input value 1:";
                cin >> val1;
                cout << "Please input value 2:";
                cin >> val2;
                cout << val1 << " + " << val2 << " = " << val1 + val2 << "\n";
                break;
            case 2:
                cout << "Please input value 1:";
                cin >> val1;
                cout << "Please input value 2:";
                cin >> val2;
                cout << val1 << " - " << val2 << " = " << val1 - val2 << "\n";
                break;
            case 3:
                cout << "Please input value 1:";
                cin >> val1;
                cout << "Please input value 2:";
                cin >> val2;
                cout << val1 << " * " << val2 << " = " << val1 * val2 << "\n";
                break;
            case 4:
                cout << "Please input value 1:";
                cin >> val1;
                cout << "Please input value 2:";
                cin >> val2;
                cout << val1 << " / " << val2 << " = " << val1 / val2 << "\n";
                break;
            default:
                cout << "User Input Incorrect\n\n";
                break;
            }
        } while (choice < 0 || choice > 5);

        cout << "Do you want to Contninue [y/n]:";
        cin >> continueChoice;

        system("cls");

    } while (continueChoice == 'y');
    return 0;
}
int main()
{
    MainMenu();
    Calculatorings();
}

 