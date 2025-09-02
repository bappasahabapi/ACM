 #include<stdio.h>
 int main()
 {
     long long int number; 
     int count, reminder;
     int sum=0;
     scanf("%lld",&number);

     for(count=0; number !=0;){
        reminder =number%10;
        sum =sum+reminder;
        number=number/10;
        count++;
     }
     printf("%d\n",sum);
     
     return 0;
 }