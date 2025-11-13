#include <stdio.h>
#include <string.h>  =

#define MAX 100

int main() {
    char str1[MAX];
    char str2[MAX];
    char result[MAX * 2]; 

    printf("Nhap chuoi thu nhat: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; 

    printf("Nhap chuoi thu hai: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; 

    
    strcpy(result, str1);        
    strcat(result, str2);       

    printf("\nKet qua noi chuoi : %s\n", result);
    return 0;
}
