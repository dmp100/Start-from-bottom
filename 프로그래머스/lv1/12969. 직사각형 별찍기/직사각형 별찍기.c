#include <stdio.h>


int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}




















//int main(void) {
//    int n;
//    int m;
//    scanf("%d %d", &n, &m);
//    for(int i=0;i<n;i++)
//    {
//        printf("*");
//    }
//    for(int j=0;j<m;j++)
//    {
//        printf(" ");
//    }
 
//    return 0;
//}