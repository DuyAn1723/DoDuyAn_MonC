#include <iostream>
using namespace std;
double Diem_trung_binh(double Diem[]) {
	double Tong_diem = 0.0;
	for (int i = 0; i < 5; i++) {
		Tong_diem = Tong_diem + Diem[i];
	}
	return Tong_diem / 5;
}
int main() {
	const int So_luong_diem= 5;
	double Diem[So_luong_diem];
	for (int i = 0; i < 5; i++) {
		cout << "Nhap vao diem thu " << i + 1 << endl;	
		cin >> Diem[i];
	}
	cout << "Diem trung binh cua 5 diem so la " << Diem_trung_binh(Diem);

}