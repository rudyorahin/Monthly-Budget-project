#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct MonthlyBudget {
    double housing = 500.00, utilities = 150.00, householdExpense = 65.00,
    transportation = 50.00, food = 250.00, medical = 30.00, insurance = 100.00,
    entertainment = 150.00, clothing = 75.00, miscellaneous = 50.00,
    total = (housing + utilities + householdExpense + transportation + food
            + medical + insurance +entertainment + clothing + miscellaneous);
};

string compare(double month, double standard){
    string budget;
        if (month < standard)
            budget = " below the budget";
        else if (month > standard)
            budget = "over the budget";
        else
            budget = "same as the budget";
        return budget;
}

double compareAmount(double month, double standard){
    double difference;
    difference = (month - standard);
    return difference;
}

int main() {
    MonthlyBudget one;
    MonthlyBudget expenses;

    cout << setprecision(2) << fixed << showpoint << endl;

    cout << "List of expenses during a month:" << endl;
    cout << "Housing: " << endl;
    cin >> one.housing;
    cout << "Utilities: " << endl;
    cin >> one.utilities;
    cout << "household Expense: " << endl;
    cin >> one.householdExpense;
    cout << "Transportation: " << endl;
    cin >> one.transportation;
    cout << "Food: " << endl;
    cin >> one.food;
    cout << "Medical: " << endl;
    cin >> one.medical;
    cout << "Insurance: " << endl;
    cin >> one.insurance;
    cout << "Entertainment: " << endl;
    cin >> one.entertainment;
    cout << "Clothing: " << endl;
    cin >> one.clothing;
    cout << "Miscellaneous: " << endl;
    cin >> one.miscellaneous;

    cout << "Report of over or under expenses: " << endl;
    cout << "Housing is " << compare(one.housing, expenses.housing) 
         << " by " << compareAmount(one.housing, expenses.housing) << endl;
    cout << "utilities is " << compare(one.utilities, expenses.utilities) 
         << " by " << compareAmount(one.utilities, expenses.utilities) << endl;
    cout << "Household Expense is " << compare(one.householdExpense, expenses.householdExpense) 
         << " by "<< compareAmount(one.householdExpense, expenses.householdExpense) << endl;
    cout << "Transportation is " << compare(one.transportation, expenses.transportation) 
         << " by "<< compareAmount(one.transportation, expenses.transportation) << endl;
    cout << "Food is " << compare(one.food, expenses.food) 
         << " by " << compareAmount(one.food, expenses.food) << endl;
    cout << "Medical is " << compare(one.medical, expenses.medical) 
         << " by " << compareAmount(one.medical, expenses.medical) << endl;
    cout << "Insurance is " << compare(one.insurance, expenses.insurance) 
         << " by " << compareAmount(one.insurance, expenses.insurance) << endl;
    cout << "Entertainment is " << compare(one.entertainment, expenses.entertainment) 
         << " by " << compareAmount(one.entertainment, expenses.entertainment) << endl;
    cout << "Clothing is " << compare(one.clothing, expenses.clothing) 
         << " by "<< compareAmount(one.clothing, expenses.clothing) << endl;
    cout << "Miscellaneous is " << compare(one.miscellaneous, expenses.miscellaneous) 
         << " by " << compareAmount(one.miscellaneous, expenses.miscellaneous) << endl;
    cout << "Total expense is " << compare(one.total, expenses.total) 
         << " by " << compareAmount(one.total, expenses.total) << endl;

    return 0;
}
