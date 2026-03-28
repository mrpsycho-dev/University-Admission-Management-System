#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

  int totalStudents = 1000;
  int index = 0;

  // Data structures
  string namesArr[totalStudents];
  string pref1Arr[totalStudents];
  string pref2Arr[totalStudents];
  string pref3Arr[totalStudents];
  int ageArr[totalStudents];
  float matricArr[totalStudents], interArr[totalStudents], ecatArr[totalStudents], aggregateArr[totalStudents];

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
      cout << "Welcome to UMS";
      cout << "Enter your name: ";
      string name;
      cin >> name;
      cout << "Enter age: ";
      int age;
      cin >> age;
      cout << "Enter Matric marks: ";
      float matric;
      cin >> matric;
      cout << "Enter FSC marks: ";
      float fsc;
      cin >> fsc;
      cout << "Enter ECAT marks: ";
      float ecat;
      cin >> ecat;
      cout << "Enter CS, SE, IT as your preferences";
      string pref1, pref2, pref3;
      cout << "Enter your 1st preference: ";
      cin >> pref1;
      cout << "Enter your 2nd preference: ";
      cin >> pref2;
      cout << "Enter your 3rd preference: ";
      cin >> pref3;

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