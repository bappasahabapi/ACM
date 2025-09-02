#include<stdio.h>

int takeRadius(){
    print("Please enter the radius: ");
    int r;
    scanf("%d",&r);

    return r;
}
int main()
{
    int radius;
    radius=takeRadius();

    float area =3.1416*radius*radius;
    printf("Area of a circle is: %f\n",area);
    return 0;
}

/*  
int testCase, i;
   printf("Enter number of testCase: ");
    scanf("%d",&testCase);
    for(i=0;i<testCase;i++)
    {
        solve();
    } 
*/