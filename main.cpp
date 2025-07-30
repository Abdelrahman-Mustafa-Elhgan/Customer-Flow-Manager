#include <iostream>
using namespace std;


int main()
{

   int maxCapacity;
   int currentCustomers = 0;
   int choice;

   cout << "Maximum number of customers allowed: ";
   cin >> maxCapacity;

   while (true) 
   {
     cout << "\n ========== Menu ==========\n";
     cout << "1- Enter the Customer\n";
     cout << "2- Exit the Customer\n";
     cout << "3- Show the number of current customers\n";
     cout << "4- Exit Program\n";
     cout << "Select the transaction number: ";
     cin >> choice;


     cout << "\n ======================= \n";
     if (choice == 1 ) {
        if (currentCustomers < maxCapacity) {
            currentCustomers++;
            cout << "Customer entered the current number: " << currentCustomers << "\n";
        } else {
            cout << "Can't enter, the store is full" << "\n";
        }
     } else if (choice == 2) {
        if (currentCustomers > 0) {
            currentCustomers--;
            cout << "Customer Exit Current Issue: " << currentCustomers << "\n";
        } else {
            cout << "No customers inside to take out" << "\n";
        }
        
     } else if  (choice == 3) {
        cout << "Number of customers inside the store: " << currentCustomers << "\n";
     } else if (choice == 4) {
        cout << "The program has been terminated." << "\n";
        break;
     }
     else {
        cout << "Invalid number, try again." << "\n";
     }
   }
   
    return 0;

}
	