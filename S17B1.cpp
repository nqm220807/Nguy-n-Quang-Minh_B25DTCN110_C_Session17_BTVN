#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
#define BACKGROUND_RED "\x1b[41m"
#define RED "\x1b[31m"
#define RESET "\x1b[0m"

int main() {
    char str[MAX];
    char line[32];
    int choice = -1;
    int n = 0; 

    do {
        
        printf("\n%s============================ = MENU =============================%s\n", RED, RESET);
        printf("%s1. Nhap gia tri cua chuoi%s\n", RED, RESET);
        printf("%s2. In ra chuoi (TOAN BO CHU HOA)%s\n", RED, RESET);
        printf("%s3. In ra chuoi (toan bo chu thuong)%s\n", RED, RESET);
        printf("%s0. Thoat%s\n", RED, RESET);
        printf("%s================================================================%s\n", RED, RESET);
        printf("Chon chuc nang: ");

        
        if (fgets(line, sizeof(line), stdin) == NULL) {
            choice = -1;
        } else {
            if (sscanf(line, "%d", &choice) != 1) {
                choice = -1; 
            }
        }

        switch (choice) {
            case 1: {
                printf("Nhap chuoi: ");
                if (fgets(str, sizeof(str), stdin) != NULL) {
                    
                    str[strcspn(str, "\n")] = '\0';
                    n = 1;
                } else {
                    str[0] = '\0';
                    n = 0;
                }
                break;
            }

            case 2: {
                if (!n) {
                    printf("Ban chua nhap chuoi!\n");
                    break;
                }
                char upperStr[MAX];
                strncpy(upperStr, str, MAX);
                upperStr[MAX-1] = '\0';
                for (int i = 0; upperStr[i] != '\0'; i++) {
                    upperStr[i] = toupper((unsigned char)upperStr[i]);
                }
                printf("Chuoi viet hoa: %s\n", upperStr);
                break;
            }

            case 3: {
                if (!n) {
                    printf("Ban chua nhap chuoi!\n");
                    break;
                }
                char lowerStr[MAX];
                strncpy(lowerStr, str, MAX);
                lowerStr[MAX-1] = '\0';
                for (int i = 0; lowerStr[i] != '\0'; i++) {
                    lowerStr[i] = tolower((unsigned char)lowerStr[i]);
                }
                printf("Chuoi viet thuong: %s\n", lowerStr);
                break;
            }

            case 0:
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le!.\n");
                break;
        }

    } while (choice != 0);

    return 0;
}

