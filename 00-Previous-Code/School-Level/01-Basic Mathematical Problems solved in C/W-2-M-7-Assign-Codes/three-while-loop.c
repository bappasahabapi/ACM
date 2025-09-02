 #include<stdio.h>
 int main()
 {
     int number, count=0;

     printf("Enter a number: ");
     scanf("%d",&number);

     while (number%10 !=0)
     {
       count++;
       number =number/10;
     }

     printf("Number of digits =  %d\n",count);

     return 0;
 }

