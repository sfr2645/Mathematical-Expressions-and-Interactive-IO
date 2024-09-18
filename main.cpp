//This program will ask for the principal, the interest rate, and the number of times the interest is compounded. It will then calculate the interest and the amount in savings. Lastly, it will display all information.
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() { 
  double savings, principal, interestRate, interest, timesCompounded;
  cout << "Please enter the principal amount: ";
  cin >> principal;
  cout << "Please enter the interest rate: ";
  cin >> interestRate;
  cout << "Please enter the number of times the interest is compounded: ";
  cin >> timesCompounded;
  savings = principal * pow(1 + (interestRate/100)/timesCompounded,timesCompounded);
  interest = savings - principal;
  
  cout << setprecision(2) << fixed << showpoint;
  cout << "\nInterest Rate: " << setw(17) << interestRate << "%" << endl;
  cout << "Times Compounded: " << setw(14) << timesCompounded << endl;
  cout << "Principal:        " << setw(10) << "$" << principal << endl;
  cout << "Interest:         " << setw(10) << "$" << interest << endl;
  cout << "Amount in Savings:" << setw(10) << "$" << savings << endl;

return(0);
}