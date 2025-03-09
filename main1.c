#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "AABBBCCCCddd";
    int count[52] = {0};  // 大小寫字母各 26 個

    // 計算字母出現次數
    int length = strlen(a);
    for (int i = 0; i < length; i++) {
        if ('A' <= a[i] && a[i] <= 'Z') {
            count[a[i] - 'A'] += 1;  // 記錄大寫字母
        } else if ('a' <= a[i] && a[i] <= 'z') {
            count[a[i] - 'a' + 26] += 1;  // 記錄小寫字母
        }
    }

    // 輸出 A2B3C4d3
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c%d", 'A' + i, count[i]); // 正確輸出格式
        }
    }
    for (int i = 26; i < 52; i++) {
        if (count[i] > 0) {
            printf("%c%d", 'a' + (i - 26), count[i]); // 正確輸出格式
        }
    }
    
    printf("\n"); // 確保輸出換行
    return 0;
}

