#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

  int totalStudents = 1000;

  // Data structures
  string names[totalStudents];
  string pref1[totalStudents];
  string pref2[totalStudents];
  string pref3[totalStudents];
  int age[totalStudents];
  float matric[totalStudents], inter[totalStudents], ecat[totalStudents];

  while (true)
  {
    system("cls");
    cout
        << R"(
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
    cout << "You choose " << userOption << endl;
    if (userOption == 1)
    { // Admin condition
      cout << "This is admin menu";
      getch();
    }
    else if (userOption == 2)
    { // Student condition
      cout << "This is student menu";
      getch();
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