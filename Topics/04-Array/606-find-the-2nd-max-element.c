#include <stdio.h>
int main()
{

	// 1st--> take the array size
	int n,i;
	printf("Enter array size: ");
	scanf("%d",&n);

	// 2nd--> take array of n size and its element
	int input[n];
	for(i=0;i<n;i++)
		scanf("%d",&input[i]);

	// 3rd --> Find the large value from the inputs
	int largest =input[0];
	for(i=0;i<n;i++)
	{
		if(input[i]>largest)
			largest=input[i];
	}

	// 4th --> take new array of [largest+1] size; 
	int new_arr[largest+1];

	//5th -->new array te sob position e 0 assign kore dibo
	for(i=0;i<=largest;i++)
	{
		new_arr[i]=0;
	}

	// 6th --> transverse my input[] array and new_arr[input[i]+=1] kore dibo
	for(i=0;i<n;i++)
	{
		new_arr[input[i]]+=1;
	}

	// 7th --> make a loop of reverse order{condition part}
	int counter =0;
	for(i=largest; i>=1;i--)
	{
		if(new_arr[i]==1)
		{
			counter++;
		}
		if(counter==2)
		{
			printf("The second largest is: %d\n",i);
			break;
		}
	}

	return 0;
	
}