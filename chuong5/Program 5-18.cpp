#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream outputFile;
    string name1, name2, name3;

    // Mở tệp đầu ra.
    outputFile.open("Friends.txt");

    // Lấy tên của ba người bạn.
    cout << "Nhập tên của ba người bạn.\n";
    cout << "Bạn thứ nhất: ";
    cin.ignore(); // Để xóa bộ đệm và chấp nhận dấu cách trong tên nếu có
    getline(cin, name1);
    cout << "Bạn thứ hai: ";
    getline(cin, name2);
    cout << "Bạn thứ ba: ";
    getline(cin, name3);

    // Ghi các tên vào tệp.
    outputFile << name1 << endl;
    outputFile << name2 << endl;
    outputFile << name3 << endl;
    cout << "Các tên đã được lưu vào tệp.\n";

    // Đóng tệp
    outputFile.close();
    return 0;
}
