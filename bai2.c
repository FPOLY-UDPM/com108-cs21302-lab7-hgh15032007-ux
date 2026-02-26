/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD 
//  Input: Nhập vào username và password 
//  Output: Đăng nhập thành công hay không thành công

// VIẾT CODE Ở ĐÂY

#include <stdio.h>
#include <string.h>
#include <windows.h> 

int main() {
    char userSys[] = "admin";
    int passSys = 12345;

    char user[100];
    int pass;
    int dem = 0, i = 0; 

    printf("\n--- CHUONG TRINH DANG NHAP BAO MAT ---\n");
    while (1) {
        printf("Username: ");
        fflush(stdin); 
        gets(user);
        
        if (strcmp(user, userSys) == 0) {
            printf("=> Username chinh xac!\n\n");
            break; 
        } else {
            printf("=> Sai Username! Vui long nhap lai.\n");
        }
    }

    do {
        printf("Password: ");
        fflush(stdin); 
        if (scanf("%d", &pass) != 1) {
            pass = 0; // Tránh lỗi khi nhập chữ
        }

        if (pass == passSys) {
            printf("\n=> CHUC MUNG: Dang nhap thanh cong!\n");
            i = 1; 
            break; 
        } else {
            dem++; // Tăng biến đếm mỗi khi sai
            
            if (dem == 1) {
                printf("=> Sai lan 1! Ban con 2 lan thu.\n");
            } 
            else if (dem == 2) {
                printf("=> Sai lan 2! Ban con 1 lan thu.\n");
            } 
            else if (dem == 3) {
                printf("\n=> Sai 3 lan! Vui long doi 10 giay...\n");
                Sleep(10000); 
                printf("Luu y: Ban con 1 luot nhap CUOI CUNG!!\n");
            } 
            else {
                printf("\n=> TAI KHOAN DA BI KHOA!\n");
            }
        }
    } while (i == 0 && dem < 4);
    if (i == 1) {
        printf("\n--- CHAO MUNG ---\n");
    } else {
        printf("\n--- TRUY CAP BI TU CHOI ---\n");
    }

    return 0;
}