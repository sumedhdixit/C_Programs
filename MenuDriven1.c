//C Program to Find sum of digits of numbers,  Find reverse of the numbers,  Find average of the numbers,  Display Triangular Numbers,  To print number in words
#include<stdio.h>
int triangle(int n);
int one(int x);
int two(int y);
int three(int z);
int four(int w);
int main()
{
	int choice;
	int rev = 0, n;
	int num[10], avg ,sum =0,i,o,k,j;
	int st = 1;
	while(st==1)
	{	
	printf("\n\nOperations >> \n");
	printf("1) Find sum of digits of numbers \n");
	printf("2) Find reverse of the numbers \n");
    printf("3) Find average of the numbers \n");
    printf("4) Display Triangular Numbers \n");
    printf("5) To print number in words \n");
    printf("\nEnter your choice >>> ");
    scanf("%d",&choice);
    switch(choice)
    {
    	case 1:
    		printf("\nEnter a number >> ");
    		scanf("%d",&n);
    		o = n;
    		rev = 0;
    		while(n!=0)
    		{
    			rev = n%10;
    			sum = sum + rev ;
    			n = n/10;
    		}
    		printf("\nSum of the digits of %d is %d ",o,sum);
    		break;
    	case 2:
    		
    		printf("\nEnter a number >> ");
    		scanf("%d",&n);
    		o = n;
    		rev = 0;
    		while(n!=0)
    		{
    			rev = rev*10;
    			rev = rev + n%10;
    			n = n/10;
    			
    		}
    		printf("\nReverse of %d is %d ",o,rev);
    		break;
		case 3:
			printf("\nEnter total no. of terms for average >> ");
			scanf("%d",&n);
			sum = 0;
			for(i=0;i<n;i++)
	        {
		         printf("\nEnter a number >> ");
		         scanf("%d",&num[i]);
	        }
	             for(i=0;i<n;i++)
	        {
		         sum = sum + num[i];
	        }
	        avg = sum/n;
	        printf("\nAverage of %d numbers = %d", n ,avg);
			break;
		case 4:
			printf("\nEnter total no. of row in triangle >> ");
			scanf("%d",&n);
			triangle(n); 
			break;
		case 5:
			printf("Enter a 3-digit number >> ");
	        scanf("%d",&n);
	        o = n;
	        if(n>0)
	{
		i = n%10;
		k = ((n%100) - (i))/10;
		j = n/100;
		printf("\n%Representation of %d in words is ",o);
		three(j);
		if(k > 1 && k!=0)
		{
		two(k);
		one(i);
	   }
	   if(k == 1)
	   {
	   	four(i);
	   }
	}
	     else 
	     printf(" ZERO");
			break;
		default : printf("\nSelect a valid operation");	
    }
        printf("\n\n Want to continue? 1-YES  0-NO  >> ");
        scanf("%d",&st);
}
         return 0;    
}
int triangle(int n)
{
	int j = 1, k = 1; 

    while (n >= 1) { 
        printf(" %d ", k); 
        j = j + 1;
        k = k + j;        
        n--;
    } 
}

int three(int z)
{
switch(z){
	case 1 :
		printf("ONE HUNDRED");
		break;
	case 2 :
		printf("TWO HUNDRED");
		break;
	case 3 :
		printf("THREE HUNDRED");
		break;
	case 4 :
		printf("FOUR HUNDRED");
		break;
	case 5 :
		printf("FIVE HUNDRED");
		break;
	case 6 :
		printf("SIX HUNDRED");
		break;
	case 7 :
		printf("SEVEN HUNDRED");
		break;
	case 8 :
		printf("EIGHT HUNDRED");
		break;
	case 9 :
		printf("NINE HUNDRED");
		break;
	default : printf(" ");
					
}	
}

int two(int y)
{
	switch(y){
	case 1 :
		printf(" ");
		break;
	case 2 :
		printf(" TWENTY");
		break;
	case 3 :
		printf(" THIRTY");
		break;
	case 4 :
		printf(" FORTY");
		break;
	case 5 :
		printf(" FIFTY");
		break;
	case 6 :
		printf(" SIXTY");
		break;
	case 7 :
		printf(" SEVENTY");
		break;
	case 8 :
		printf(" EIGHTY");
		break;
	case 9 :
		printf(" NINTY");
		break;
	default : printf(" ");
	
}}

int one(int x)
{
	switch(x){
	case 1 :
		printf(" ONE");
		break;
	case 2 :
		printf(" TWO");
		break;
	case 3 :
		printf(" THREE");
		break;
	case 4 :
		printf(" FOUR");
		break;
	case 5 :
		printf(" FIVE");
		break;
	case 6 :
		printf(" SIX");
		break;
	case 7 :
		printf(" SEVEN");
		break;
	case 8 :
		printf(" EIGHT");
		break;
	case 9 :
		printf(" NINE");
		break;
	default : printf(" ");
	
}}

int four(int w)
{
	switch(w){
	case 1 :
		printf(" ELEVEN");
		break;
	case 2 :
		printf(" TWELVE");
		break;
	case 3 :
		printf(" THIRTEEN");
		break;
	case 4 :
		printf(" FOURTEEN");
		break;
	case 5 :
		printf(" FIFTEEN");
		break;
	case 6 :
		printf(" SIXTEEN");
		break;
	case 7 :
		printf(" SEVENTEEN");
		break;
	case 8 :
		printf(" EIGHTEEN");
		break;
	case 9 :
		printf(" NINETEEN");
		break;
	default : printf(" TEN");
	
}
}
