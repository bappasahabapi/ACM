
#include<stdio.h>
#include<string.h>

int main()
{
    char str[]="bbbbaccddd";
    int n=strlen(str),largestElement=26;

    int freq[largestElement+1];
    for(int i=0; i<=largestElement; i++)
        freq[i]=0;

    for(int i=0; i<n; i++)
        freq[(str[i]-'a')+1]++;

    int total=0;
    for(int i=1; i<=26; i++)
    {
        if(freq[i]>=1)
        {
            total++;
        }
    }

    int nxt=0;
    while(nxt!=total)
    {
        int max=-1,index=-1;
        char ch;

        for(int i=1; i<=26; i++)
        {
            if(freq[i]>max)
            {
                max=freq[i];
                ch=i+96;
                index=i;
            }
        }
        for(int i=1; i<=max; i++)
        {
            printf("%c",ch);
        }
        freq[index]=0;
        nxt++;
    }
    printf("\n");

    return 0;
}
