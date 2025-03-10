
#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "A4B1C3f3";
    int length = strlen(a);
    int count[52] = {0};
    for (int i = 0; i < length; i += 2){
        if ('A' <= a[i] && a[i] <= 'Z'){
            for (int j = 0; j < a[i+1] - '0'; j++){
                printf("%c",a[i]);
            }
        }
        if ('a' <= a[i] && a[i] <= 'z'){
            for (int j = 0; j < a[i+1] - '0'; j++){
                printf("%c",a[i]);
            }
        }
    }
    
    printf("\n");

    return 0;
}
