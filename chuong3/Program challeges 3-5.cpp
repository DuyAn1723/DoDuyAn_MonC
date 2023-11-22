#include <iostream>
using namespace std;
int main() {
	int Hoc_sinh_nam, Hoc_sinh_nu, Tong_hoc_sinh;
	cout << "Nhap vao so hoc sinh nam ";
	cin >> Hoc_sinh_nam;
	cout << " Nhap vao so hoc sinh nu ";
	cin >> Hoc_sinh_nu;
	Tong_hoc_sinh = Hoc_sinh_nam + Hoc_sinh_nu;
	cout << "Phan tram hoc sinh nam la " << (Hoc_sinh_nam / Tong_hoc_sinh) * 100 << "%" << endl;
	cout << "Phan tram hoc sinh nu la " << (Hoc_sinh_nu / Tong_hoc_sinh) * 100 << "%";
	return 0;

}