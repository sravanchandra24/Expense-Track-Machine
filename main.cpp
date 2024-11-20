#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// Define the structure to hold expense details
struct Expense {
    string description;
    double amount;
};

// Function prototypes
void addExpense(vector<Expense>& expenses);
void viewExpenses(const vector<Expense>& expenses);
void deleteExpense(vector<Expense>& expenses);

int main() {
    vector<Expense> expenses;
    int choice;

    while (true) {
        cout << "Expense Tracker Menu:\n";
        cout << "1. Add Expense\n";
        cout << "2. View Expenses\n";
        cout << "3. Delete Expense\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<endl;

        switch (choice) {
            case 1:
                addExpense(expenses);
                break;
            case 2:
                viewExpenses(expenses);
                break;
            case 3:
                deleteExpense(expenses);
                break;
            case 4:
                cout << "Exiting the program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
}

// Function to add an expense
void addExpense(vector<Expense>& expenses) {
    Expense newExpense;
    cout << "Enter description: ";
    cin.ignore(); // To ignore the newline character left by previous input
    getline(cin, newExpense.description);
    cout << "Enter amount: ";
    cin >> newExpense.amount;
    expenses.push_back(newExpense);
    cout << "Expense added successfully.\n";
}

// Function to view all expenses
void viewExpenses(const vector<Expense>& expenses) {
    int TotalExpense=0;
    if (expenses.empty()) {
        cout << "No expenses to show.\n";
        return;
    }
    cout<<endl;
    cout << left << setw(20) << "Description" << setw(10) << "Amount" << endl;
    cout << "-----------------------------------\n";
    for (size_t i = 0; i < expenses.size(); ++i) {
        cout << left << setw(20) << expenses[i].description << setw(10) << expenses[i].amount << endl;
    }
    cout << "-----------------------------------\n";
    for(int i = 0; i < expenses.size(); ++i){
        TotalExpense+=expenses[i].amount;
    }
    cout << left << setw(20) << "Total Expense  " << setw(10) << TotalExpense << endl;
    cout<<endl;
}

// Function to delete an expense by index
void deleteExpense(vector<Expense>& expenses) {
    if (expenses.empty()) {
        cout << "No expenses to delete.\n";
        return;
    }

    int index;
    cout << "Enter the index of the expense to delete (starting from 1): ";
    cin >> index;

    if (index < 1 || index > static_cast<int>(expenses.size())) {
        cout << "Invalid index. Please try again.\n";
        return;
    }

    expenses.erase(expenses.begin() + index - 1);
    cout << "Expense deleted successfully.\n";
}
