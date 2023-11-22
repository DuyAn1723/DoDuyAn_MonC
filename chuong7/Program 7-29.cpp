#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> values(100);

    cout << "Vector values có "
         << values.size() << " phần tử.\n";
    cout << "Tôi sẽ gọi phương thức clear...\n";
    values.clear();
    cout << "Bây giờ, vector values có "
         << values.size() << " phần tử.\n";
    return 0;
}
