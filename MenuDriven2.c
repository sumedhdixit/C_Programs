//C Program For Insertion at a position in the array, Insertion at beginning , Insertion at end , Delete by position , Delete by element (first occurrence of element) , Search by element (present or not) , Search by position , Revert the array (in place) 
#include<stdio.h>
int count = 0;
int num[20]={1,2,3,4,5,6,7,8,9,10};
int insert(int x, int y);
int del(int x);
int del_el(int x);
int ser(int x);
int ser_pos(int p);
int revert();
int main()
{
	int choice;
	int rev = 0, n;
	 
	int avg ,sum =0,i,o,k,j;

	printf("Elements in array >>  ");
	for(i=0; i<10;i++)
	{
		printf("%d ",num[i]);
		count++;
	}
	int st = 1;
	while(st==1)
	{
	printf("\n\nOperations >> \n");
	printf("1. Insertion at a position in the array \n");
	printf("2. Insertion at beginning \n");
    printf("3. Insertion at end \n");
    printf("4. Delete by position \n");
    printf("5. Delete by element (first occurrence of element) \n");
    printf("6. Search by element (present or not) \n");
    printf("7. Search by position \n");
    printf("8. Revert the array (in place) \n");
    printf("\nEnter your choice >> ");
    scanf("%d",&choice);
    switch(choice)
    {
    	case 1:
    		printf("\nEnter a number to be inserted >> ");
    		scanf("%d",&k);
    		printf("\nEnter a position >> ");
    		scanf("%d",&j);
    		count++;
    		insert(j,k);
            break;
            
    	case 2:
    		
    		printf("\nEnter a number to be inserted >> ");
    		scanf("%d",&k);
    		j = 0;
    		count++;
    		insert(j,k);
			break;
			
		case 3:

	        printf("\nEnter a number to be inserted >> ");
    		scanf("%d",&k);
    		count++;
    		j = count-1;
    		insert(j,k);
			break;
		case 4:
			printf("\nEnter a position >> ");
    		scanf("%d",&j);
    		del(j);

			break;
		case 5:
			printf("\nEnter a number to be deleted >> ");
    		scanf("%d",&k);
    		del_el(k);
	        break;
	    case 6:
			printf("Enter a number to search >> ");
			scanf("%d",&k);
    		ser(k);
	        break;
		case 7:
			printf("\nEnter position to search >> ");
			scanf("%d",&k);
			ser_pos(k);
	        break;
		case 8:
			revert();
	        break;		   
		default : printf("<<Select a valid operation >>");	 
}
        printf("\n\n Want to continue? 1-YES  0-NO  >> ");
        scanf("%d",&st);
}
         return 0;
}

int insert(int x, int y)
{
	       int i;
	       if(x!=count-1)
		{
	       printf("%d",count);
           for (i = count-1; i >= x; i--) 
           {
		    num[i] = num[i - 1]; 
           }
           if(x==0)
		   {
           num[x] = y;
		   }
           
           if(x!=0)
           {
           	num[x - 1] = y;
           }
        }
        else
        {
        	num[count-1]=y;
        }

            printf("\nUpdated array >>");
            for(i=0;i<count;i++)
            {
            	printf("%d ",num[i]);
            }
            
}

int del(int x)
{
	int i;

	if (x > count)
      printf("Deletion not possible.\n");
   else
   {
   	  if(x==0)
   	  {
      for (i = x; i <= count - 1; i++)
         num[i] = num[i+1];
      }
	  else
	  {
	  	for (i = x - 1; i <= count - 1; i++)
         num[i] = num[i+1];
	  }  

      printf("\nUpdated array >> ");
      for (i = 0; i < count - 1; i++)
         printf("%d ", num[i]);
         count--;
   }  
}

int del_el(int x)
{
	int i, s;
	for(i=0;i<count;i++)
	{
	if(x==num[i])
		{
		s = i;
  	    for (i = s; i < count - 1; i++)
         num[i] = num[i+1]; 
         count--;
         break;
		}
	if(i==count-1)
	{	
		printf("\nElement not found!!!");
	}
    }
	printf("\n\nUpdated array >> ");
      for (i = 0; i < count ; i++){
         printf("%d ", num[i]);
     }


}

int ser(int x)
{
	int i;
	for(i=0;i<count;i++)
	{
		if(num[i]==x)
		{
			printf("\nElement found at %dth position",i+1);
			break;
		}
	}
		if(i==count)
	{
		printf("\nElement (%d) not found!!!",x);
	}
}

int ser_pos(int p)
{
	if(p <= count)
	{
		printf("\nElement at position %d is %d ",p,num[p-1]);
	}
	else
	{
		printf("\nNo element at that position.");
	}
	
}

int revert()
{
	int i, j, temp;
	for(i=0,j=count-1;i<j;i++,j--)
	{
		temp = num[i];
		num[i] = num[j];
		num[j] = temp;
	}
	  printf("\n\nUpdated array >> ");
      for (i = 0; i < count ; i++){
         printf("%d ", num[i]);
     }

}
