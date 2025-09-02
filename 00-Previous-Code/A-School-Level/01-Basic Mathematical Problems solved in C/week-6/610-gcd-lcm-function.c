#include<stdio.h>

int gcd(int m, int n){

    int large, small;
    if(m>n)
    {
        large =m;
        small =n;
    }
    else
    {
        large=n;
        small=m;
    }
    int i, gcd;
    for(i=small; i>=1; i--)
    {
        if(small%i==0 && large%i==0)
            return i;
    }
}
int lcm(int m, int n){
  //  return (m*n)/gcd(m*n)
    int i;
    for(i=m;;i++)
    {
        if(i%m==0 && i%n==0)
            return i;
    }

}
int main()
{
    //a=7,b=14
    int a,b,ans,ans2;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    ans=gcd(a,b);
    printf("GCD is: %d\n",ans);
    ans2=lcm(a,b);
    printf("LCM is: %d\n",ans2);
    return  0;
}






