#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

  int totalStudents = 1000;
  int index = 7;
  int loginAttempt = 0;

  // Data structures
  string namesArr[totalStudents] = {"ali", "ammar", "ahmed", "usman", "zain", "hassan", "bilal"};
  string pref1Arr[totalStudents] = {"CS", "CS", "SE", "IT", "CS", "SE", "IT"};
  string pref2Arr[totalStudents] = {"SE", "IT", "CS", "SE", "IT", "CS", "SE"};
  string pref3Arr[totalStudents] = {"IT", "SE", "IT", "CS", "SE", "IT", "CS"};
  int ageArr[totalStudents] = {19, 20, 18, 21, 19, 20, 22};
  float matricArr[totalStudents] = {1090, 1119, 1050, 1000, 1080, 990, 1020};
  float interArr[totalStudents] = {1119, 1110, 1000, 980, 1090, 970, 1010};
  float ecatArr[totalStudents] = {290, 320, 250, 240, 300, 230, 260};
  float aggregateArr[totalStudents];

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
        cout << "Enter password: ";
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
          5.  Delete Student Record
          6.  Logout
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
              cout << "Name\tAge\tMatric\tFSC\tECAT\tP1\tP2\tP3\n";
              for (int i = 0; i < index; i++)
              {
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
              cout << "------------Old record: ------------";
              cout << "Name\tAge\tMatric\tFSC\tECAT\tP1\tP2\tP3\n";
              for (int i = 0; i < index; i++)
              {
                if (namesArr[i] == name)
                {
                  cout << namesArr[i] << "\t" << ageArr[i] << "\t"
                       << matricArr[i] << "\t" << interArr[i] << "\t" << ecatArr[i] << "\t" << pref1Arr[i] << "\t" << pref2Arr[i] << "\t" << pref3Arr[i] << "\t\n";
                  found = true;
                }
              }
              if (found)
              {
                for (int i = 0; i < index; i++)
                {
                  if (namesArr[i] == name)
                  {
                    cout << "Enter new record of the student:\n";

                    cout << "Enter your name: ";
                    cin >> namesArr[i];

                    cout << "Enter age: ";
                    cin >> ageArr[i];

                    cout << "Enter Matric marks: ";
                    cin >> matricArr[i];

                    cout << "Enter FSC marks: ";
                    cin >> interArr[i];

                    cout << "Enter ECAT marks: ";
                    cin >> ecatArr[i];

                    cout << "Enter CS, SE, IT as your preferences\n";

                    cout << "Enter your 1st preference: ";
                    cin >> pref1Arr[i];

                    cout << "Enter your 2nd preference: ";
                    cin >> pref2Arr[i];

                    cout << "Enter your 3rd preference: ";
                    cin >> pref3Arr[i];

                    cout << "Record updated successfully!\n";
                    break;
                  }
                }

                cout << "Press any key to continue...";
                getch();
              }
              else
              {
                cout << "Record not found.";
              }
            }
            else if (adminOption == 4)
            {
              // generate merit list
              for (int i = 0; i < index; i++)
              {
                float aggregate = (matricArr[i] / 1200 * 100 * 0.17) + (interArr[i] / 1200 * 100 * .33) + (ecatArr[i] / 400 * 100 * .50);
                aggregateArr[i] = aggregate;
              }
              // sorting of aggregates
              for (int i = 0; i < index; i++)
              {
                for (int j = i + 1; j < index; j++)
                {
                  if (aggregateArr[i] < aggregateArr[j])
                  {
                    // swap aggregate
                    float temp = aggregateArr[i];
                    aggregateArr[i] = aggregateArr[j];
                    aggregateArr[j] = temp;

                    // swap name
                    string t1 = namesArr[i];
                    namesArr[i] = namesArr[j];
                    namesArr[j] = t1;

                    // swap age
                    int t2 = ageArr[i];
                    ageArr[i] = ageArr[j];
                    ageArr[j] = t2;

                    // swap matric
                    float t3 = matricArr[i];
                    matricArr[i] = matricArr[j];
                    matricArr[j] = t3;

                    // swap inter
                    float t4 = interArr[i];
                    interArr[i] = interArr[j];
                    interArr[j] = t4;

                    // swap ecat
                    float t5 = ecatArr[i];
                    ecatArr[i] = ecatArr[j];
                    ecatArr[j] = t5;

                    // swap pref1
                    string t6 = pref1Arr[i];
                    pref1Arr[i] = pref1Arr[j];
                    pref1Arr[j] = t6;

                    // swap pref2
                    string t7 = pref2Arr[i];
                    pref2Arr[i] = pref2Arr[j];
                    pref2Arr[j] = t7;

                    // swap pref3
                    string t8 = pref3Arr[i];
                    pref3Arr[i] = pref3Arr[j];
                    pref3Arr[j] = t8;
                  }
                }
              }

              // code to disp all data with aggregate
              cout << "Name\tAge\tAggregate\n";
              for (int i = 0; i < index; i++)
              {
                cout << namesArr[i] << "\t" << ageArr[i] << "\t" << aggregateArr[i] << endl;
              }
              // code to disp sorted data
              cout << "\nAdmitted students:\n";
              cout << "1 seat for CS, 2 for SE, 1 for IT\n";

              int cs = 0, se = 0, it = 0;

              for (int i = 0; i < index; i++)
              {
                // Preference 1
                if (pref1Arr[i] == "CS" && cs < 1)
                {
                  cout << namesArr[i] << " -> CS\n";
                  cs++;
                }
                else if (pref1Arr[i] == "SE" && se < 2)
                {
                  cout << namesArr[i] << " -> SE\n";
                  se++;
                }
                else if (pref1Arr[i] == "IT" && it < 1)
                {
                  cout << namesArr[i] << " -> IT\n";
                  it++;
                }

                // Preference 2
                else if (pref2Arr[i] == "CS" && cs < 1)
                {
                  cout << namesArr[i] << " -> CS\n";
                  cs++;
                }
                else if (pref2Arr[i] == "SE" && se < 2)
                {
                  cout << namesArr[i] << " -> SE\n";
                  se++;
                }
                else if (pref2Arr[i] == "IT" && it < 1)
                {
                  cout << namesArr[i] << " -> IT\n";
                  it++;
                }

                // Preference 3
                else if (pref3Arr[i] == "CS" && cs < 1)
                {
                  cout << namesArr[i] << " -> CS\n";
                  cs++;
                }
                else if (pref3Arr[i] == "SE" && se < 2)
                {
                  cout << namesArr[i] << " -> SE\n";
                  se++;
                }
                else if (pref3Arr[i] == "IT" && it < 1)
                {
                  cout << namesArr[i] << " -> IT\n";
                  it++;
                }
                else
                {
                  cout << namesArr[i] << " -> Not admitted\n";
                }
              }
            }
            else if (adminOption == 5)
            {
              // delete student record
              cout << "Enter name to delete: ";
              string name;
              cin >> name;

              bool found = false;

              for (int i = 0; i < index; i++)
              {
                if (namesArr[i] == name)
                {
                  for (int j = i; j < index - 1; j++)
                  {
                    namesArr[j] = namesArr[j + 1];
                    ageArr[j] = ageArr[j + 1];
                    matricArr[j] = matricArr[j + 1];
                    interArr[j] = interArr[j + 1];
                    ecatArr[j] = ecatArr[j + 1];
                    pref1Arr[j] = pref1Arr[j + 1];
                    pref2Arr[j] = pref2Arr[j + 1];
                    pref3Arr[j] = pref3Arr[j + 1];
                  }

                  index--;
                  cout << "Record deleted!";
                  found = true;
                  break;
                }
              }

              if (!found)
              {
                cout << "Record not found.";
              }
            }
            else if (adminOption == 6)
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
          break; // fix for exiting admin login attempt after logout
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