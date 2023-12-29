#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a = n * 2;
    int sum = 0;
      	for (int i = 0; i <= a; i++) {
        if (i % 2 == 0) {
            sum = sum + i;
        }
    }
            printf("%d", sum);

    return 0;
}
