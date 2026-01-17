/******************************************************************************
 * Họ và tên: [lê Thành Phong]
 * MSSV:      [PS47422]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN 
//  Input: Nhập vào số điện tiêu thụ hàng tháng 
//  Output: Hiển thị số tiền cần phải đóng
 
#include <stdio.h>

int main(){
    
    // Khai báo biến
    int soDien;
    float soTien;

    // Nhập dữ liệu
    printf("Nhap so dien tieu thu: ");
    scanf("%d", &soDien);

    // Xử lý, tính toán VÀ Hiển thị kết quả
    if (soDien <= 50) {
        soTien = soDien * 1000;
    } else if (soDien <= 100) {
        soTien = 50 * 1000 + (soDien - 50) * 1200;
    } else if (soDien <= 200) {
        soTien = 50 * 1000 + 50 * 1200 + (soDien - 100) * 1500;
    } else {
        soTien = 50 * 1000 + 50 * 1200 + 100 * 1500 + (soDien - 200) * 250;
    }

    printf("So tien phai tra la: %.2f\n", soTien);
    return 0;
}