 #include<stdio.h>
 int main()
 {
     long long int number; 
     int count, digit;
     scanf("%lld",&number);

     for(count=0; number !=0;){
        digit =number%10;
        number=number/10;
        count++;
     }
     printf("%d digits\n",count);
     
     return 0;
 }