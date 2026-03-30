#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

  int totalStudents = 1000;
  int index = 2;
  int loginAttempt = 0;

  // Data structures
  string namesArr[totalStudents] = {"ali", "ammar"};
  string pref1Arr[totalStudents] = {"CS", "CS"};
  string pref2Arr[totalStudents] = {"SE", "IT"};
  string pref3Arr[totalStudents] = {"IT", "SE"};
  int ageArr[totalStudents] = {19, 20};
  float matricArr[totalStudents] = {1090, 1119}, interArr[totalStudents] = {1119, 1110}, ecatArr[totalStudents] = {290, 320}, aggregateArr[totalStudents];

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
      for (int i = 0; i < 3; i++)
      {
        system("cls");
        cout << "WELCOME TO UMS ADMIN MENU\n";
        cout << "Login Attempt "
             << i + 1 << endl;
        string username, password;
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter username: ";
        cin >> password;

        if (username == "admin" && password == "123")
        {
          cout << "Login Successful !!";

          while (true)
          {
            system("cls");
            cout << R"(
          1.  Show All Students
          2.  Search Student
          3.  Update Student Record
          4.  Generate Merit List
          5.  Logout
              Choose the option:  
          )";

            int adminOption;
            cin >> adminOption;
            if (adminOption == 1)
            {
              // show all students
              cout << "Name\tAge\tMatric\tFSC\tECAT\tP1\tP2\tP3\n";
              for (int i = 0; i < index; i++)
              {
                cout << namesArr[i] << "\t" << ageArr[i] << "\t"
                     << matricArr[i] << "\t" << interArr[i] << "\t" << ecatArr[i] << "\t" << pref1Arr[i] << "\t" << pref2Arr[i] << "\t" << pref3Arr[i] << "\t\n";
              }
            }
            else if (adminOption == 2)
            {
              // search students by name
              cout << "Enter the name you want to search: ";
              string name;
              cin >> name;
              bool found = false;
              for (int i = 0; i < index; i++)
              {
                cout << "Name\tAge\tMatric\tFSC\tECAT\tP1\tP2\tP3\n";
                if (namesArr[i] == name)
                {
                  cout << namesArr[i] << "\t" << ageArr[i] << "\t"
                       << matricArr[i] << "\t" << interArr[i] << "\t" << ecatArr[i] << "\t" << pref1Arr[i] << "\t" << pref2Arr[i] << "\t" << pref3Arr[i] << "\t\n";
                  found = true;
                }
              }
              if (!found)
              {
                cout << "Record not found.";
              }
            }
            else if (adminOption == 3)
            {
              // update student record
              cout << "\nEnter the name of student you want to update record: ";
              string name;
              cin >> name;
              bool found = false;
              for (int i = 0; i < index; i++)
              {
                cout << "------------Old record: ------------";
                cout << "Name\tAge\tMatric\tFSC\tECAT\tP1\tP2\tP3\n";
                if (namesArr[i] == name)
                {
                  cout << namesArr[i] << "\t" << ageArr[i] << "\t"
                       << matricArr[i] << "\t" << interArr[i] << "\t" << ecatArr[i] << "\t" << pref1Arr[i] << "\t" << pref2Arr[i] << "\t" << pref3Arr[i] << "\t\n";
                  found = true;
                }
              }
              if (found)
              {
                cout << "Enter new record of the student: ";
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
                float inter;
                cin >> inter;
                cout << "Enter ECAT marks: ";
                float ecat;
                cin >> ecat;
                cout << "Enter CS, SE, IT as your preferences\n";
                string pref1, pref2, pref3;
                // while (true)
                // {
                // }
                cout << "Enter your 1st preference: ";
                cin >> pref1;
                cout << "Enter your 2nd preference: ";
                cin >> pref2;
                cout << "Enter your 3rd preference: ";
                cin >> pref3;

                namesArr[index] = name;
                ageArr[index] = age;
                matricArr[index] = matric;
                interArr[index] = inter;
                ecatArr[index] = ecat;
                pref1Arr[index] = pref1;
                pref2Arr[index] = pref2;
                pref3Arr[index] = pref3;
                // index++;
                cout << "Your data has been saved.\n";

                cout << "Press any key to continue...";
                getch();
              }
              else if (!found)
              {
                cout << "Record not found.";
              }
            }
            else if (adminOption == 4)
            {
              // generate merit list
            }
            else if (adminOption == 5)
            {
              // exit
              break;
            }
            else
            {
              cout << "Invalid Option.";
            }
            cout << "\nPress any key to continue...";
            getch();
            // break;
          }
        }
        else
        {
          cout << "Username or Password is incorrect! \n";
        }
      }
      cout << "\nPress any key to continue...";
      getch();
    }
    else if (userOption == 2)
    { // Student condition
      system("cls");
      cout << "WELCOME TO UMS STUDENT MENU\n";
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
      float inter;
      cin >> inter;
      cout << "Enter ECAT marks: ";
      float ecat;
      cin >> ecat;
      cout << "Enter CS, SE, IT as your preferences\n";
      string pref1, pref2, pref3;
      // while (true)
      // {
      // }
      cout << "Enter your 1st preference: ";
      cin >> pref1;
      cout << "Enter your 2nd preference: ";
      cin >> pref2;
      cout << "Enter your 3rd preference: ";
      cin >> pref3;

      namesArr[index] = name;
      ageArr[index] = age;
      matricArr[index] = matric;
      interArr[index] = inter;
      ecatArr[index] = ecat;
      pref1Arr[index] = pref1;
      pref2Arr[index] = pref2;
      pref3Arr[index] = pref3;
      index++;
      cout << "Your data has been saved.\n";

      cout << "Press any key to continue...";
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
  } // end of our main while loop
}