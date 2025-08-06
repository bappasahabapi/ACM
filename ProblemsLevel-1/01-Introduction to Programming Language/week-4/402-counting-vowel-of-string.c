//output--> hello word

#include<stdio.h>
int main()
{
    char sentence[1000];
    fgets(sentence,sizeof(sentence),stdin);

    int counter=0;
    int i=0;
    while (sentence[i]!='\0')
    {
        // if(sentence[i]=='a' ||sentence[i]=='e' ||sentence[i]=='i' ||sentence[i]=='o'||sentence[i]=='u')    
        //  {
        //     counter++;
        //  }       
        // i++;
        
        if(sentence[i]=='a')
            counter++;
        else if(sentence[i]=='e')
            counter++;
        else if(sentence[i]=='i')
            counter++;
        else if(sentence[i]=='o')
            counter++;
        else if(sentence[i]=='u')
            counter++;
        i++;
    }
    printf("No. of vowels = %d\n",counter);
    
    
    return 0;
}