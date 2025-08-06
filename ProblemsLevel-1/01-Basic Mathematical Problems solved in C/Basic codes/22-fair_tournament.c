#include<stdio.h>

int main()

{

    int player1,player2,player3,player4;

    scanf("%d%d%d%d",&player1,&player2,&player3,&player4);


    int winner1=-1,winner2=-1;

    if(player1>player2 && (player1>player3 || player1>player4))

        winner1=player1;

    else if(player2>player1 && (player2>player3 || player2>player4))

        winner1=player2;


    if(player3>player4 && (player3>player1 || player3>player2))

        winner2=player3;

    else if(player4>player3 && (player4>player1 || player4>player2))

        winner2=player4;


    if(winner1!=-1 && winner2!=-1)

        printf("YES\n");

    else

        printf("NO\n");

    return 0;

}


