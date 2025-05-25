#include <iostream>
using namespace std;
main(){
int number;
int digit;

cout << "Please  enter a 4 digits integor: ";
cin >> number;

digit = number % 10;
cout << "The Digit is: "<< digit << "\n";
number = number / 10;
digit = number % 10;

digit = number % 10;
cout << "The Digit is: "<< digit << "\n";
number = number / 10;
digit = number % 10;

digit = number % 10;
cout << "The Digit is: "<< digit << "\n";
number = number / 10;
digit = number % 10;

digit = number % 10;
cout << "The Digit is: "<< digit << "\n";
number = number / 10;
digit = number % 10;
  return 0;
}
