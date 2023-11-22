// Chương trình này hiển thị một menu và yêu cầu người dùng chọn. Một vòng lặp do-while lặp lại chương trình cho đến khi người dùng chọn mục 4 từ menu.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Hằng số cho các lựa chọn trong menu
    const int ADULT_CHOICE = 1,
              CHILD_CHOICE = 2,
              SENIOR_CHOICE = 3,
              QUIT_CHOICE = 4;

    // Hằng số cho mức phí thành viên
    const double ADULT = 40.0,
                 CHILD = 20.0,
                 SENIOR = 30.0;

    // Biến
    int choice; // Lựa chọn menu
    int months; // Số tháng
    double charges; // Phí hàng tháng

    // Thiết lập định dạng đầu ra số học.
    cout << fixed << showpoint << setprecision(2);

    do
    {
        // Hiển thị menu.
        cout << "\n\t\tMenu Thành viên Câu lạc bộ Sức khỏe\n\n"
             << "1. Thành viên người lớn\n"
             << "2. Thành viên trẻ em\n"
             << "3. Thành viên người cao tuổi\n"
             << "4. Thoát chương trình\n\n"
             << "Nhập lựa chọn của bạn: ";
        cin >> choice;

        // Xác nhận lựa chọn menu.
        while (choice < ADULT_CHOICE || choice > QUIT_CHOICE)
        {
            cout << "Vui lòng nhập lựa chọn hợp lệ trong menu: ";
            cin >> choice;
        }

        // Xử lý lựa chọn của người dùng.
        if (choice != QUIT_CHOICE)
        {
            // Nhập số tháng.
            cout << "Thành viên trong bao nhiêu tháng? ";
            cin >> months;

            // Xử lý lựa chọn của người dùng trong menu.
            switch (choice)
            {
            case ADULT_CHOICE:
                charges = months * ADULT;
                break;
            case CHILD_CHOICE:
                charges = months * CHILD;
                break;
            case SENIOR_CHOICE:
                charges = months * SENIOR;
                break;
            }

            // Hiển thị phí hàng tháng.
            cout << "Tổng phí là $"
                 << charges << endl;
        }
    } while (choice != QUIT_CHOICE);

    return 0;
}
