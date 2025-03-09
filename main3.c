#include <stdio.h>

int main(){
    char a[] = "10001111";
    int answer[2] = {0};
    for (int i = 0; i < 4; i++){
        if (a[i] == '1'){
            int power = 1 << (3 - i);
            answer[0] += power;
        }
    }
        
    for (int i = 4; i < 8; i++){
        if (a[i] == '1'){
            int power = 1 << (7 - i);
            answer[1] += power;
        }
    }
        
    
    for (int i = 0; i < 2; i++){
        switch( answer[i] ){
            case 0:
                printf("%c", '0');
                break;
            case 1:
                printf("%c", '1');
                break;
            case 2:
                printf("%c", '2');
                break;
            case 3:
                printf("%c", '3');
                break;
            case 4:
                printf("%c", '4');
                break;
            case 5:
                printf("%c", '5');
                break;
            case 6:
                printf("%c", '6');
                break;
            case 7:
                printf("%c", '7');
                break;
            case 8:
                printf("%c", '8');
                break;
            case 9:
                printf("%c", '9');
                break;
            case 10:
                printf("%c", 'A');
                break;
            case 11:
                printf("%c", 'B');
                break;
            case 12:
                printf("%c", 'C');
                break;
            case 13:
                printf("%c", 'D');
                break;
            case 14:
                printf("%c", 'E');
                break;
            case 15:
                printf("%c", 'F');
                break;
            
        }
    }
    printf("\n");
    return 0;
}
