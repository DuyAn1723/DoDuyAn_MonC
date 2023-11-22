#include <iostream>
using namespace std;

int main() {
    char employed, recentGrad;

    // Người dùng có được việc làm và tốt nghiệp gần đây không?
    cout << "Hãy trả lời các câu hỏi sau\n";
    cout << "với Y nếu là Có hoặc ";
    cout << "N nếu là Không.\n";
    cout << "Bạn có việc làm không? ";
    cin >> employed;
    cout << "Bạn đã tốt nghiệp đại học ";
    cout << "trong vòng hai năm qua không? ";
    cin >> recentGrad;

    // Xác định đủ điều kiện vay vốn của người dùng.
    if (employed == 'Y') {
        if (recentGrad == 'Y') { // If lồng nhau
            cout << "Bạn đủ điều kiện cho lãi suất ";
            cout << "đặc biệt.\n";
        }
    }
    return 0;
}
