# Expense Tracker

## Project Description
The **Expense Tracker** is a C++ console-based application designed to manage and track your daily expenses. It allows users to add, view, and delete expense records, helping to maintain a clear overview of spending habits. The program uses a menu-driven approach, making it intuitive and user-friendly.

## Features

### Add Expense
* Input a description and amount for a new expense.
* Expenses are stored in a dynamic list for easy management.

### View Expenses
* Display all added expenses with a formatted table.
* Automatically calculates and displays the total expense.

### Delete Expense
* Remove an expense by specifying its index in the list.
* Ensures that expenses are dynamically updated after deletion.

## Project Workflow

### User Menu
1. **Add Expense**:
   * Enter a description and the expense amount.
   * Save the expense to the tracker.
2. **View Expenses**:
   * Display a table with all expense descriptions and amounts.
   * Show the total expense at the bottom.
3. **Delete Expense**:
   * Choose an expense to delete by its index (starting from 1).
   * Update the expense list dynamically.
4. **Exit**:
   * Exit the application gracefully.

## Validation Rules
* **Description**: Any string is accepted as a valid description.
* **Amount**: Must be a numeric value. Non-numeric inputs will cause the program to fail.

## System Requirements
* **Language**: C++  
* **Compiler**: Any C++ compiler (e.g., GCC, Clang, or Visual Studio).  
* **Operating System**: Cross-platform (Windows, Linux, macOS).  

## How to Run
1. Clone this repository or copy the files to your local machine:
   ```bash
   git clone https://github.com/<your-username>/expense-tracker.git
### Compile the source code:
* g++ -o expense_tracker mainETM.cpp

### Run the executable:
* ./expense_tracker

### Expense Tracker Menu:
1. Add Expense
2. View Expenses
3. Delete Expense
4. Exit
* Enter your choice: (1,2,3,4)

### Adding an Expense:
* Enter description: Lunch
* Enter amount: 10.50
* Expense added successfully.

### Viewing Expenses:
* Description       **    Amount    
* -----------------------------------
* Lunch             **  10.50     
* Groceries         **  25.00     
* -----------------------------------
* Total Expense     **  35.50

## Deleting an Expense:
* Enter the index of the expense to delete (starting from 1): 1
* Expense deleted successfully.



