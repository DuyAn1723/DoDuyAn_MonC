// Chương trình này viết dữ liệu vào một tệp.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile;  // Đối tượng outputFile để ghi dữ liệu vào tệp
    outputFile.open("demofile.txt");  // Mở hoặc tạo tệp có tên "demofile.txt"

    cout << "Bắt đầu ghi dữ liệu vào tệp.\n";

    // Ghi bốn tên vào tệp.
    outputFile << "Bach\n";
    outputFile << "Beethoven\n";
    outputFile << "Mozart\n";
    outputFile << "Schubert\n";

    // Đóng tệp
    outputFile.close();  // Đóng tệp sau khi viết xong

    cout << "Hoàn thành.\n";
    return 0;
}
