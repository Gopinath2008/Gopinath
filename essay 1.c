#include<stdio.h>
#include<math.h>

int main() {
    int limit,m,n;
	printf("Enter a number : ");
	scanf("%d",&limit);
    for (m = 1; m < limit; m++) {
        for (n = 1; n < m; n++) {
            int o = sqrt(m*m + n*n);
            if (o > limit) {
                break;
            }
            if (m*m + n*n == o*o) 
			{
                printf("Pythagorean triplet: %d, %d, %d\n", m, n, o);
            }
        }
    }
    return 0;
}
