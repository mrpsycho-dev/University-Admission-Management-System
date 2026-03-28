# 🎓 University Admission Management System (UMS)

A console-based **C++ application** that simulates a university admission system. It allows students to register their academic details and enables an admin to manage and evaluate applications efficiently.

---

## 🚀 Features

### 👨‍🎓 Student Panel

* Enter personal details (Name, Age)
* Input academic marks:

  * Matric
  * FSC
  * ECAT
* Select **3 program preferences** (e.g., CS, SE, IT)
* Stores student data in the system

---

### 🔐 Admin Panel

* Secure login system (Username & Password)
* Limited login attempts for security

#### 📋 Functionalities:

* **View All Students**

  * Displays all student records in a clean table format

* **Search Student**

  * Search student by name

* **Update Student Record**

  * Modify student details

* **Generate Merit List**

  * Calculates aggregate
  * Sorts students based on merit

* **Exit Admin Panel**

---

## 🧠 System Design

* Uses arrays to store up to 1000 student records
* Menu-driven interface using loops
* Separate flows for Admin and Student
* Simple and clean console UI

---

## 🛠️ Technologies Used

* **Language:** C++
* **Libraries:** `<iostream>`, `<conio.h>`
* **Compiler:** g++ / MinGW

---

## ▶️ How to Run

```bash
g++ ums.cpp -o ums.exe && ums.exe
```

---
