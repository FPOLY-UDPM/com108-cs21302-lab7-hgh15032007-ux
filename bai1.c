/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI 
//  Input: nhập vào 1 chuỗi 
//  Output: Số lượng nguyên âm và phụ âm trong chuỗi 
//  Biết rằng: Nguyên âm gồm: a,e,i,o,y,u


// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h> 

int main() {
    char a[100];
    int NguyenAm = 0; 
    int PhuAm = 0; 
    int i = 0;
    printf("Xin moi nhap vao chuoi: ");
    gets(a);
    strlwr(a);
    while (a[i] != '\0') {
        if (a[i] >= 'a' && a[i] <= 'z') {
            if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'|| a[i] == 'y') {
                NguyenAm++; 
            } else {
                PhuAm++; 
            }
        }
        char c = a[i];
        i++;
    }
    printf("Chuoi sau khi chuyen ve chu thuong: %s\n", a);
    printf("Ket qua: %d nguyen am va %d phu am.", NguyenAm, PhuAm);
    return 0;
}
