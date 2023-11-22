																					 #include <iostream>
#include <string>
using namespace std;

int main() {
    // Khai báo biến cho thông tin người dùng
    string name, city, college, profession, animal, pet_name;
    int age;

    // Yêu cầu người dùng nhập thông tin cá nhân
    cout << "Nhập tên của bạn: ";
    getline(cin, name);

    cout << "Nhập tuổi của bạn: ";
    cin >> age;
    cin.ignore(); // Xóa dấu xuống dòng từ việc nhập số tuổi

    cout << "Nhập tên của thành phố: ";
    getline(cin, city);

    cout << "Nhập tên của trường đại học: ";
    getline(cin, college);

    cout << "Nhập nghề nghiệp: ";
    getline(cin, profession);

    cout << "Nhập tên một loại động vật: ";
    getline(cin, animal);

    cout << "Nhập tên của thú cưng: ";
    getline(cin, pet_name);

    // Hiển thị câu chuyện với thông tin cá nhân của người dùng
    cout << "Có một người tên " << name << " sống tại " << city << ". Ở tuổi " << age << ", " << name << " đã theo học tại " << college << ". Sau khi tốt nghiệp, " << name << " đã làm việc như một " << profession << ". Sau đó, " << name << " đã nhận nuôi một con " << animal << " tên là " << pet_name << ". Cả hai họ đã sống hạnh phúc mãi mãi!" << endl;

    return 0;
}
