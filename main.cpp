//This project asks the user how many cookies he or she wants to make, then displays the number of cups of each ingredient needed for the specified number of cookies.
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()

{
  double sugar, butter, flour, cookies;
  cout << "How many cookies would you like to make? ";
  cin >> cookies;
  sugar=(cookies/48)*1.5;
  butter=(cookies/48);
  flour=(cookies/48)*2.75;
  cout << "To make " << cookies << " cookies, you will need:\n" << sugar << "cup(s) of sugar \n" << butter << "cup(s) of butter \n" << flour << "cup(s) of flour";
}