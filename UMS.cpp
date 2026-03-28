#include <iostream>
using namespace std;

int main()
{
  while (true)
  {
    cout << R"(
    |----------------------------------------------------|
    |-------UNIVERSITY ADMISSION MANAGEMENT SYSTEM-------|
    |----------------------------------------------------|
    
    
                         USER MENU
    1.  Admin
    2.  Student
    3.  Exit
    
        Choose option: )";
    int userOption;
    cin >> userOption;
    if (userOption == 1)
    { // Admin condition
    }
    else if (userOption == 2)
    { // Student condition
    }
    else if (userOption == 3)
    {
      cout << "ThankYou for using our Application.";
      break;
    }
    else
    {
      cout << "Invalid option. Please try again.";
    }
  }
}