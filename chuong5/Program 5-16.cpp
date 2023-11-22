#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile;
    outputFile.open("demofile.txt");

    cout << "Đang ghi dữ liệu vào tệp.\n";

    // Ghi bốn tên vào tệp.
    outputFile << "Bach";
    outputFile << "Beethoven";
    outputFile << "Mozart";
    outputFile << "Schubert";

    // Đóng tệp
    outputFile.close();
    cout << "Hoàn thành.\n";
    return 0;
}
