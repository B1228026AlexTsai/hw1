
#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "A4B1C3f3";
    int length = strlen(a);
    int count[52] = {0};
    for (int i = 0; i < length; i += 2){
        if ('A' <= a[i] && a[i] <= 'Z'){
            count[a[i] - 'A'] += a[i+1] - '0'; 
        }
        if ('a' <= a[i] && a[i] <= 'z'){
            count[a[i] - 'a' + 26] += a[i+1] - '0';
        }
    }
    for (int i=0;i<26;i++){
        if (count[i] > 0){
            for (int j=0;j < count[i]; j++){
                printf("%c",'A'+ i);
            }
        }
    }
    for (int i=26;i<52;i++){
        if (count[i] > 0){
            for (int j=0;j < count[i]; j++){
                printf("%c",'a'+ (i - 26));
            }
        }
    }
    printf("\n");

    return 0;
}
