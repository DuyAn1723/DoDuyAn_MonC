#include <iostream>
using namespace std;
int main() {
	int Nguoi_lon, Tre_em;
	double Tong_doanh_thu, Loi_nhuan_rong;
	cout << "Nhap vao so ve nguoi lon da ban ";
	cin >> Nguoi_lon;
	cout << "Nhap vao so ve tre em da ban ";
	cin >> Tre_em;
	Tong_doanh_thu = Nguoi_lon * 10.00 + Tre_em * 6.00;
	cout << "So ve nguoi lon da ban: " << Nguoi_lon * 10.00 << endl;
	cout << "So ve tre em da ban la: " << Tre_em * 6.00 << endl;
	cout << "Doanh thu tong la:      " << Tong_doanh_thu << endl;
	cout << "Loi thuan dong la:		 " << Tong_doanh_thu * 0.2 << endl;
	cout << "So tien phai tra la:	 " << Tong_doanh_thu - Tong_doanh_thu * 0.2;

	return 0;
}