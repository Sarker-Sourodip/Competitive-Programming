#include <stdio.h>
#include <string.h>
 
int main() {
    int word_num;
    int alpha;
 
    scanf("%d", &word_num);
    getchar();
    char arr[word_num][1000];
 
    for (int i = 0; i < word_num; i++) {
        fgets(arr[i], sizeof(arr[i]), stdin);
        arr[i][strcspn(arr[i], "\n")] = '\0';
    }
 
    for (int i = 0; i < word_num; i++) {
        alpha = strlen(arr[i]);
 
        if (alpha <= 10) {
            puts(arr[i]);
        } else {
            printf("%c%d%c\n", arr[i][0], alpha - 2, arr[i][alpha - 1]);
        }
    }
 
    return 0;
}