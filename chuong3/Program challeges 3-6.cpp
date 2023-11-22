#include <iostream>
using namespace std;
int main() {
	int Duong, Bo, Bot_my;
	Duong = 1.5 / 48;
	Bo = 1 / 48;
	Bot_my = 2.75 / 48;
	int Banh_quy;
	cout << "Nhap vao so banh quy ban muon lam ";
	cin >> Banh_quy;
	cout << "So coc duong ban can su dung de lam " << Banh_quy << " banh quy la " << Duong * Banh_quy << " coc" << endl;
	cout << "So coc bo ban can su dung de lam " << Banh_quy << " banh quy la " << Bo * Banh_quy  << " coc" << endl;
	cout << "So coc bot my ban can su dung de lam " << Banh_quy << " banh quy la " << Bot_my * Banh_quy << " coc";
	return 0;

}