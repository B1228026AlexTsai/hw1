#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "AABBBCCCCddd";
    int count = 1;  

    
    int length = strlen(a);
    for (int i = 0; i < length; i++) {
        if (a[i] == a[i+1]) {
            count += 1;  
        }
        else{
            printf("%C%d",a[i],count);
            count = 1;
        }
    }

    printf("\n"); 
    return 0;
}

