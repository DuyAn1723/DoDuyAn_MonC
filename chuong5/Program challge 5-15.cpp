#include <iostream>
using namespace std;

int main() {
    int employeeNumber;
    double grossPay, stateTax, federalTax, ficaWithholdings;
    double totalGrossPay = 0.0, totalStateTax = 0.0, totalFederalTax = 0.0, totalFicaWithholdings = 0.0;

    cout << "Nhập số hiệu nhân viên (0 để thoát): ";
    cin >> employeeNumber;

    while (employeeNumber != 0) {
        // Kiểm tra dữ liệu nhập cho số hiệu nhân viên
        if (employeeNumber < 0) {
            cout << "Dữ liệu không hợp lệ. Số hiệu nhân viên không thể là số âm." << endl;
            cout << "Nhập số hiệu nhân viên (0 để thoát): ";
            cin >> employeeNumber;
            continue;
        }

        cout << "Nhập tổng thu nhập của nhân viên " << employeeNumber << ": $";
        cin >> grossPay;

        // Kiểm tra dữ liệu nhập cho tổng thu nhập
        if (grossPay < 0) {
            cout << "Dữ liệu không hợp lệ. Tổng thu nhập không thể là số âm." << endl;
            cout << "Nhập số hiệu nhân viên (0 để thoát): ";
            cin >> employeeNumber;
            continue;
        }

        cout << "Nhập thuế tiểu bang của nhân viên " << employeeNumber << ": $";
        cin >> stateTax;

        // Kiểm tra dữ liệu nhập cho thuế tiểu bang
        if (stateTax < 0 || stateTax > grossPay) {
            cout << "Dữ liệu không hợp lệ. Thuế tiểu bang không thể là số âm hoặc lớn hơn tổng thu nhập." << endl;
            cout << "Nhập số hiệu nhân viên (0 để thoát): ";
            cin >> employeeNumber;
            continue;
        }

        cout << "Nhập thuế liên bang của nhân viên " << employeeNumber << ": $";
        cin >> federalTax;

        // Kiểm tra dữ liệu nhập cho thuế liên bang
        if (federalTax < 0 || federalTax > grossPay) {
            cout << "Dữ liệu không hợp lệ. Thuế liên bang không thể là số âm hoặc lớn hơn tổng thu nhập." << endl;
            cout << "Nhập số hiệu nhân viên (0 để thoát): ";
            cin >> employeeNumber;
            continue;
        }

        cout << "Nhập khấu trừ FICA của nhân viên " << employeeNumber << ": $";
        cin >> ficaWithholdings;

        // Kiểm tra dữ liệu nhập cho khấu trừ FICA
        if (ficaWithholdings < 0 || ficaWithholdings > grossPay) {
            cout << "Dữ liệu không hợp lệ. Khấu trừ FICA không thể là số âm hoặc lớn hơn tổng thu nhập." << endl;
            cout << "Nhập số hiệu nhân viên (0 để thoát): ";
            cin >> employeeNumber;
            continue;
        }

        // Tính lương ròng và tích lũy tổng
        double netPay = grossPay - stateTax - federalTax - ficaWithholdings;

        totalGrossPay += grossPay;
        totalStateTax += stateTax;
        totalFederalTax += federalTax;
        totalFicaWithholdings += ficaWithholdings;

        // Hiển thị báo cáo lương cho nhân viên hiện tại
        cout << "Số Hiệu Nhân Viên: " << employeeNumber << endl;
        cout << "Tổng Thu Nhập: $" << grossPay << endl;
        cout << "Thuế Tiểu Bang: $" << stateTax << endl;
        cout << "Thuế Liên Bang: $" << federalTax << endl;
        cout << "Khấu Trừ FICA: $" << ficaWithholdings << endl;
        cout << "Lương Ròng: $" << netPay << endl;

        cout << "Nhập số hiệu nhân viên (0 để thoát): ";
        cin >> employeeNumber;
    }

    // Hiển thị báo cáo tổng cộng
    cout << "Báo C
