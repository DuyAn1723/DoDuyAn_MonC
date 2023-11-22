#include <iostream>
#include <string>
using namespace std;

class NhanVien {
public:
    string hoTen;
    string ngaySinh;
    double luong;

    NhanVien(string ten, string ngay_sinh, double luong) {
        hoTen = ten;
        ngaySinh = ngay_sinh;
        this->luong = luong;
    }

    virtual void tinhLuong() {
        // Hàm ảo, được ghi đè bởi lớp con
    }
};

class NhanVienSanXuat : public NhanVien {
public:
    int soSanPham;

    NhanVienSanXuat(string ten, string ngay_sinh, double luong, int soSanPham)
        : NhanVien(ten, ngay_sinh, luong), soSanPham(soSanPham) {
    }

    void tinhLuong() override {
        luong = luong + soSanPham * 5000;
    }
};

class NhanVienVanPhong : public NhanVien {
public:
    int soNgayLamViec;

    NhanVienVanPhong(string ten, string ngay_sinh, double luong, int soNgayLamViec)
        : NhanVien(ten, ngay_sinh, luong), soNgayLamViec(soNgayLamViec) {
    }

    void tinhLuong() override {
        luong = soNgayLamViec * 100000;
    }
};

int main() {
    NhanVienSanXuat nhanVienSanXuat("Nguyen Van A", "01/01/1990", 5000000, 100);
    NhanVienVanPhong nhanVienVanPhong("Tran Thi B", "02/02/1995", 0, 20);

    nhanVienSanXuat.tinhLuong();
    nhanVienVanPhong.tinhLuong();

    cout << "Thong tin nhan vien san xuat:" << endl;
    cout << "Ho ten: " << nhanVienSanXuat.hoTen << endl;
    cout << "Ngay sinh: " << nhanVienSanXuat.ngaySinh << endl;
    cout << "Luong: " << nhanVienSanXuat.luong << " VND" << endl;

    cout << "\nThong tin nhan vien van phong:" << endl;
    cout << "Ho ten: " << nhanVienVanPhong.hoTen << endl;
    cout << "Ngay sinh: " << nhanVienVanPhong.ngaySinh << endl;
    cout << "Luong: " << nhanVienVanPhong.luong << " VND" << endl;

    return 0;
}
