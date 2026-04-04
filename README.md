Bank Account Management System (C++)
📌 Overview

This is a menu-driven Bank Account Management System developed in C++.
The application allows users to create, manage, and perform transactions on bank accounts through a Command Line Interface (CLI).

The project demonstrates structured programming, modular design, and clear workflow documentation—making it suitable for both development and technical documentation purposes.

🚀 Features
✅ Create new bank accounts
💰 Deposit money
💸 Withdraw money with validation
🔍 Search and view account details
✏️ Modify account information
❌ Delete account
📋 Display all accounts
⚠️ Error handling (invalid input, insufficient balance, account not found)

🛠️ Technologies Used
Language: C++
Concepts:
Structures (struct)
Functions (Modular Design)
Arrays
Input/Output Handling
Conditional Statements

📂 Project Structure
BankAccountManagement/
│── main.cpp   # Complete implementation
│── README.md  # Project documentation

⚙️ How It Works (Workflow)
1. Account Creation
User enters:
Account Number
Name
Address
Account Type (Saving/Current)
Initial Deposit
2. Transactions
Deposit
Adds amount to balance after validation
Withdraw
Checks sufficient balance before deduction
3. Account Management
Search Account
Finds account using account number
Check Details
Displays account information
Modify Account
Updates name, address, and type
Delete Account
Resets account data
4. System Flow
Menu-driven interface
User selects operation (1–8)
System processes request
Displays output or error message

🔄 Program Flow (Simplified)
Start
  ↓
Display Menu
  ↓
User Input Choice
  ↓
Perform Operation
  ↓
Show Result
  ↓
Repeat until Exit

⚠️ Limitations
Maximum of 5 accounts (fixed-size array)
No file/database storage (data resets after program ends)
CLI-based interface only

📈 Future Enhancements
Add file handling (persistent storage)
Integrate database (MySQL/MongoDB)
Implement GUI (Qt / Web Interface)
Add authentication (login system)
Improve scalability using dynamic data structures

🧠 Learning Outcomes
Understanding of modular programming
Implementation of real-world banking logic
Experience with input validation and error handling
Exposure to system workflow design (useful for Technical Writing roles)

👩‍💻 Author
Gayatri Dharmadhikari

⭐ Contribution
Feel free to fork this repository and improve the project!
