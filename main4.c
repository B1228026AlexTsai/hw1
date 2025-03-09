#include <stdio.h>
#include <string.h>

int main(){
    char a[] = "Hello";
    char temp ;
    for (int i = 0; i < strlen(a) / 2; i++ ){
        temp = a[i];
        a[i] = a[strlen(a) - 1 -i];
        a[strlen(a) - 1 -i] = temp;
    }
    for (int i = 0; i < strlen(a); i++){
        printf("%c",a[i]);
    }
    printf("\n");
    return 0;
}
