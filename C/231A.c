#include <stdio.h>
 
int main() {
    int n, a, b, c, sure_count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &a, &b, &c);
        if (a + b + c >= 2) sure_count++;
    }
    printf("%d\n", sure_count);
    return 0;
}