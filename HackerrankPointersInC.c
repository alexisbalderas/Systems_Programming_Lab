#include <stdio.h>
#include <stdlib.h>
void update(int *a,int *b) {
    int max,diff;
    max=*a+*b;
    diff= abs(*a-*b);
    printf("%d\n%d", max, diff);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    //printf("%d\n%d", a, b);

    return 0;
}
