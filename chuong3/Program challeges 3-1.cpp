#include <iostream>
using namespace std;
double Quang_duong(double Nhien_lieu, double Tong_quang_duong) {
	double Ket_qua = Tong_quang_duong / Nhien_lieu;
	return Ket_qua;
}
int main() {
	double Nhien_lieu, Khoang_cach;
	cout << "Nhap vao tong luong xang cua xe ";
	cin >> Nhien_lieu;
	cout << "Nhap khoang cach xe co the di khi day nhieu lieu ";
	cin >> Khoang_cach;
	cout << "So nhien lieu xe tieu thi tren tung gallons la " << Quang_duong(Nhien_lieu, Khoang_cach);
		return 0;
}