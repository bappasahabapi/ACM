Hints: https://docs.google.com/document/d/1HJdKyAluK7cjYTuu9HaKn1Mxt2tsbE-hyIlzo5_QjvY/edit



#   1.Missing Number

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int t;
    scanf("%d", &t);
    
    while(t--)
    {
        long long int s, a, b, c;
        
        scanf("%lld %lld %lld %lld", &s, &a, &b, &c);
        
        long long int sum = 0;
        sum += (a + b + c);
        
        printf("%lld\n", s - sum);
        
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    return 0;
}

Out of Team

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, k;
    scanf("%d %d", &n, &k);
    int run;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &run);
        if(run < k)
            count++;
    }
    
    printf("%d\n", count);
    
    return 0;
}

#   2.Different Pattern

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

#   3.Highest Marks

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d", &n);
    int ar[n];
    int highest = 0;
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        if(ar[i] > highest)
            highest = ar[i];
    }
    
    for(int i = 0; i < n; i++)
    {
        printf("%d ", highest - ar[i]);
    }
    
    return 0;
}

#   4.Bablu and Phone

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d", &n);
    int ar[n];
    int highest = 0;
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        if(ar[i] > highest)
            highest = ar[i];
    }
    
    for(int i = 0; i < n; i++)
    {
        printf("%d ", highest - ar[i]);
    }
    
    return 0;
}

#   5.Secret Code

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, x, flag;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &x);

        flag = 0;

        if(x == 2)
        {
            printf("Yes\n");
            continue;
        }

        if(x % 2 == 0 || x < 2)
        {
            printf("No\n");
            continue;
        }

        for(int j = 3; j <= sqrt(x); j+=2)
        {
            if(x % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if(!flag)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

#   6.Divide Them

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d", &n);

    int ar[n+1];

    for(int i = 1; i <= n; i++)
        scanf("%d", &ar[i]);
    
    int k;
    scanf("%d", &k);

    if(k == 0)
    {
        for(int i = 1; i <= n; i++)
            printf("%d ", ar[i]);
    }
    else
    {
        for(int i = k + 1; i <= n; i++)
            printf("%d ", ar[i]);

        for(int i = 1; i <= k; i++)
            printf("%d ", ar[i]);
    }
    return 0;
}

#   7.Hand Shakes

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int n;
    scanf("%lld", &n);

    long long int sum = 0;
    long long int persons = n-1;

    for(long long int i = 1; i < n; i++)
    {
        sum += persons;
        persons--;
    }

    printf("%lld", sum);
    return 0;
}


