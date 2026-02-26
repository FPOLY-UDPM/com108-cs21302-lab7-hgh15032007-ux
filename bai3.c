/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH SẮP XẾP CHUỖI THEO CHỮ CÁI 
//  Input: Nhập 5 chuỗi bất kỳ 
//  Output: Thứ tự các chuỗi đã được sắp xếp  

// VIẾT CODE Ở ĐÂY

#include <stdio.h>
#include <string.h>

int main() {
    char s[5][20]; 
    char temp[20]; 
    int i, j;

    printf("Nhap vao 5 chuoi bat ky:\n");
    for (i = 0; i < 5; i++) {
        printf("Chuoi %d: ", i + 1);
        scanf("%s", s[i]); 
    }

    for (i = 0; i < 5 - 1; i++) {//giải thuật sắp xếp nổi bọt (Bubble Sort)
        for (j = 1; j < 5 - i; j++) {
            if (strcmp(s[j - 1], s[j]) > 0) {
                strcpy(temp, s[j - 1]);
                strcpy(s[j - 1], s[j]);
                strcpy(s[j], temp);
            }
        }
    }
    printf("\nThu tu cac chuoi sau khi sap xep:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", s[i]);
    }

    return 0;
}