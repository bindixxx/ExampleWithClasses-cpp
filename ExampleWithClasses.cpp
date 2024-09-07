#include <iostream>
#include <string>

using namespace std;

class Children {
private:
    string firstName;
    string lastName;
    int age;

public:
    void inputData() {
        cout << "Enter first name: ";
        cin >> firstName;
        cout << "Enter last name: ";
        cin >> lastName;
        cout << "Enter age: ";
        cin >> age;
    }
    void displayData() const {
        cout << "First Name: " << firstName << endl;
        cout << "Last Name: " << lastName << endl;
        cout << "Age: " << age << endl;
    }
};
int main() {
    Children child1;
    Children child2;
    cout << "Enter data for the first child:" << endl;
    child1.inputData();
    cout << "Enter data for the second child:" << endl;
    child2.inputData();
    cout << "\nData for the first child:" << endl;
    child1.displayData();
    cout << "\nData for the second child:" << endl;
    child2.displayData();
    return 0;
}
