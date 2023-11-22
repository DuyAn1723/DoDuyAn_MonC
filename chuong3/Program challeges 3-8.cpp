#include <iostream>

int main() {
    double trong_luong_pallet_trong, trong_luong_tong, trong_luong_may_tinh_bang;

    // Nhap trong luong cua pallet trong va trong luong tong
    std::cout << "Nhap trong luong cua pallet trong (pounds): ";
    std::cin >> trong_luong_pallet_trong;

    std::cout << "Nhap tong trong luong cua pallet voi may tinh bang (pounds): ";
    std::cin >> trong_luong_tong;

    // Trong luong cua moi may tinh bang
    trong_luong_may_tinh_bang = 12.5;

    // Tinh so luong may tinh bang duoc xep tren pallet
    double so_luong_may_tinh_bang = (trong_luong_tong - trong_luong_pallet_trong) / trong_luong_may_tinh_bang;

    // Hien thi so luong may tinh bang
    std::cout << "So luong may tinh bang duoc xep tren pallet la: " << so_luong_may_tinh_bang << std::endl;

    return 0;
}

