#include <cstdio>

int main() {
    int a, b;
    printf("Enter 1st number:");
    scanf("%i", &a);
    printf("Enter 2nd number:");
    scanf("%i", &b);

    if (a > b) {
        printf("more");
    } else if (a < b) {
        printf("less");
    } else {
        printf("equal");
    }
    return 0;
}
