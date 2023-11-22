#include <iostream>
using namespace std;

int main() {
    double annualInterestRate, startingBalance;
    int numMonths;

    // Nhận các giá trị đầu vào
    cout << "Nhập tỷ lệ lãi suất hàng năm (dưới dạng số thập phân): ";
    cin >> annualInterestRate;
    cout << "Nhập số dư ban đầu: ";
    cin >> startingBalance;
    cout << "Nhập số tháng: ";
    cin >> numMonths;

    double balance = startingBalance;
    double totalDeposits = 0.0;
    double totalWithdrawals = 0.0;
    double totalInterest = 0.0;

    for (int month = 1; month <= numMonths; month++) {
        // Yêu cầu số tiền gửi trong tháng
        double deposit;
        cout << "Nhập số tiền gửi trong tháng " << month << ": ";
        cin >> deposit;

        // Kiểm tra và thêm số tiền gửi vào số dư
        if (deposit < 0) {
            cout << "Dữ liệu không hợp lệ. Vui lòng nhập số tiền gửi không âm." << endl;
            break;
        }
        balance += deposit;
        totalDeposits += deposit;

        // Yêu cầu số tiền rút trong tháng
        double withdrawal;
        cout << "Nhập số tiền rút trong tháng " << month << ": ";
        cin >> withdrawal;

        // Kiểm tra và trừ số tiền rút khỏi số dư
        if (withdrawal < 0) {
            cout << "Dữ liệu không hợp lệ. Vui lòng nhập số tiền rút không âm." << endl;
            break;
        }
        balance -= withdrawal;
        totalWithdrawals += withdrawal;

        // Tính lãi hàng tháng
        double monthlyInterest = (annualInterestRate / 12.0) * balance;
        balance += monthlyInterest;
        totalInterest += monthlyInterest;

        // Kiểm tra số dư âm
        if (balance < 0) {
            cout << "Tài khoản đã bị đóng do số dư âm." << endl;
            break;
        }
    }

    // Hiển thị kết quả cuối cùng
    cout << "Số dư cuối cùng: " << balance << endl;
    cout << "Tổng số tiền gửi: " << totalDeposits << endl;
    cout << "Tổng số tiền rút: " << totalWithdrawals << endl;
    cout << "Tổng lãi thu được: " << totalInterest << endl;

    return 0;
}
