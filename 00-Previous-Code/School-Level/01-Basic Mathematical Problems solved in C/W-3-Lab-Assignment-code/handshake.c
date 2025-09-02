#include <stdio.h>
int main() {
    int n, i, mul = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        mul *= i;

    }
    int mul1=1;
    for (i = 1; i <= n-2; ++i) {
        mul1 *= i;
    }
    
    int ans =mul/ ((mul1)*2);

    
    printf("%d\n", ans);
    return 0;
}


#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
    
	int handshake = n * (n-1) / 2; 
	printf("%d\n",handshake);
	return 0;
}