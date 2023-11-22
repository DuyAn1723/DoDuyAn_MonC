#include <iostream>
using namespace std;
int main() {
	string Thang[3];
	double Luong_mua[3];
	double Tong_luong_mua = 0.0;
	for (int i = 0; i < 3; i++) {
		cout << "Nhap vao ten cua thang thu " << i + 1 << " ";
		cin >> Thang[i];
		cout << "Nhap vao luong mua cua thang " << Thang[i];
		cin >> Luong_mua[i];
	}
	for (int i = 0; i < 3; i++) {
		Tong_luong_mua = Tong_luong_mua + Luong_mua[i];
	}
	cout << "Luong mua trung binh cua 3 thang la " << Tong_luong_mua / 3;
	return 0;
}
