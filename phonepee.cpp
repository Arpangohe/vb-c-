//Write a program to create a class phone pe having data members: mobile number, username, upi id, balance in 
// member_function : method : withdrwal(), deposit(), transfer(),check_balance()
// createuser(), display()
#include <iostream>
#include <string>
using namespace std;

class PhonePe {
private:
    string mobileNumber;
    string username;
    string upiId;
    double balance;

public:
    PhonePe(string mobileNumber, string username, string upiId, double balance) {
        this->mobileNumber = mobileNumber;
        this->username = username;
        this->upiId = upiId;
        this->balance = balance;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        }
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit successful. New balance: " << balance << endl;
    }

    void transfer(double amount, string recipientUpiId) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Transfer successful to " << recipientUpiId << ". New balance: " << balance << endl;
        }
    }

    void checkBalance() {
        cout << "Current balance: " << balance << endl;
    }
};

int main() {
    PhonePe phonePe("1234567890", "John Doe", "john.doe@upi", 1000.0);

    phonePe.checkBalance();
    phonePe.withdraw(500.0);
    phonePe.deposit(200.0);
    phonePe.transfer(300.0, "jane.doe@upi");
    phonePe.checkBalance();

    return 0;
}