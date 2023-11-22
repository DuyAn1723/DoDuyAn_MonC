// Chương trình này tính số đội bóng đá mà một liên đoàn trẻ em có thể tạo ra từ số lượng cầu thủ có sẵn.
// Kiểm tra tính hợp lệ của đầu vào được thực hiện bằng vòng lặp while.
#include <iostream>
using namespace std;

int main()
{
    // Hằng số cho số lượng tối thiểu và tối đa của cầu thủ
    const int MIN_PLAYERS = 9,
              MAX_PLAYERS = 15;

    // Biến
    int players,        // Số lượng cầu thủ có sẵn
        teamPlayers,    // Số lượng cầu thủ mong muốn trên mỗi đội
        numTeams,       // Số đội
        leftOver;       // Số lượng cầu thủ thặng dư

    // Nhập số lượng cầu thủ mong muốn trên mỗi đội.
    cout << "Bạn muốn bao nhiêu cầu thủ trên mỗi đội? ";
    cin >> teamPlayers;

    // Kiểm tra tính hợp lệ của đầu vào.
    while (teamPlayers < MIN_PLAYERS || teamPlayers > MAX_PLAYERS)
    {
        // Thông báo lỗi.
        cout << "Bạn nên có ít nhất " << MIN_PLAYERS
             << " và không nhiều hơn " << MAX_PLAYERS << " cầu thủ trên mỗi đội.\n";

        // Nhập lại giá trị.
        cout << "Bạn muốn bao nhiêu cầu thủ trên mỗi đội? ";
        cin >> teamPlayers;
    }

    // Nhập số lượng cầu thủ có sẵn.
    cout << "Có bao nhiêu cầu thủ có sẵn? ";
    cin >> players;

    // Kiểm tra tính hợp lệ của đầu vào.
    while (players <= 0)
    {
        // Nhập lại giá trị.
        cout << "Vui lòng nhập số lượng cầu thủ lớn hơn hoặc bằng 0: ";
        cin >> players;
    }

    // Tính số đội bóng.
    numTeams = players / teamPlayers;

    // Tính số lượng cầu thủ thặng dư.
    leftOver = players % teamPlayers;

    // Hiển thị kết quả.
    cout << "Sẽ có " << numTeams << " đội với "
         << leftOver << " cầu thủ thặng dư.\n";

    return 0;
}
