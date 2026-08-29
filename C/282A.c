#include <stdio.h>
 
int main() {
    int n, x = 0;
    scanf("%d", &n);
    char ch[4];
 
    for (int i = 0; i < n; i++) {
        scanf("%s", ch);
        if (ch[0] == '+' || ch[1] == '+') {
            x++;
        } else {
            x--;
        }
    }
 
    printf("%d\n", x);
    return 0;
}