#include<stdio.h>
#include<stdlib.h>
main(){
	int a[5][5],b[5][5],c[5][5]={0};
	int i,j,r1,c1,r2,c2;
	printf("Enter the no. of rows  for first matrix >> ");
	scanf("%d",&r1);
	printf("Enter the no. of columns for first matrix >> ");
	scanf("%d",&c1);

	printf("Enter elements of first matrix >> \n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the no. of rows  for second matrix >> ");
	scanf("%d",&r2);
	printf("Enter the no. of columns for second matrix >> ");
	scanf("%d",&c2);
	
	printf("Enter elements of second matrix >> \n");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	int ch,k,t=0,an =1;
	do{
		printf("<<Operations>>");
		printf("\n1.Addition");
		printf("\n2.Subtraction");
		printf("\n3.Multiplication");
		printf("\n4.Find Greatest no. from each row");
		printf("\n5.Addition of Major Diagonal elements");
		printf("\n6.Sparse matrix representation for given matrix.");
		printf("\nEnter your choice >> ");
		scanf("%d",&ch);
		switch(ch){
			case 1: if(c1==c2&&r1==r2)
					{
					printf("The Resultant Matrix after addition is :  \n");
					for(i=0;i<r1;i++){
						for(j=0;j<c1;j++){
							c[i][j]=a[i][j]+b[i][j];
							printf(" %d\t",c[i][j]);
						}
						printf("\n");
					}
					}
					else{
						printf("The no. of rows and columns of both matrix aren't equal!!");
						exit(0);
					}
					break;
			case 2:	if(c1==c2&&r1==r2)
					{
					printf("The Resultant Matrix after subtracting second matrix from first is :\n");
					for(i=0;i<r1;i++){
						for(j=0;j<c1;j++){
							c[i][j]=a[i][j]-b[i][j];
							printf(" %d\t",c[i][j]);
						}
						printf("\n");
					}
					}
					else{
						printf("The no. of rows and columns of both matrix aren't equal!!");
						exit(0);
					}
					break;	
			case 3:if(c1==r2){
					printf("The Resultant Matrix after Multiplying is :\n");
					for(i=0;i<r1;i++){
						for(j=0;j<c2;j++){
							for(k=0;k<r2;k++){
							
							c[i][j]=c[i][j]+a[i][k]*b[k][j];
						}
						}
					}
					for(i=0;i<r1;i++){
						for(j=0;j<c2;j++){
							printf("%d\t",c[i][j]);
						}
						printf("\n");
					}
					
					}
					else{printf("Incorrect Input.\n");
						printf("The no.of columns of first matrix should be equal to no.of rows of second!");
						exit(0);
											}
				break;
			case 4: printf("From which Matrix do you want to find greatest no. in all rows (1st or 2nd): ");
			        scanf("%d",&k);
					if(k==1){
						for(i=0;i<r1;i++){
							c[i][0]=a[i][0];
							for(j=0;j<c1;j++){
								if(c[i][0]<a[i][j]){
									c[i][0]=a[i][j];
								}
							}
						}
						printf("Matrix with greatest no. in all rows is:\n");
						for(i=0;i<r1;i++){
							printf("%d\n",c[i][0]);
						}
					}
					if(k==2){
						for(i=0;i<r2;i++){
							c[i][0]=b[i][0];
							for(j=0;j<c2;j++){
								if(c[i][0]<b[i][j]){
									c[i][0]=b[i][j];
								}
							}
						}
						printf("Matrix with greatest no. in all rows is:\n");
						for(i=0;i<r2;i++){
							printf("%d\n",c[i][0]);
						}
						
					}

					break;
			case 5:	printf("From which Matrix do you want to find sum of major diagonal elements (1st or 2nd): ");
			        scanf("%d",&k);
					if(k==1){
						for(i=0;i<r1;i++){
							for(j=0;j<=i;j++){
								t=t+a[i][i];
							}
						}
						printf("Sum of all major diagonal elements from Matrix %d is %d ",k,t);
					}
					if(k==2){
						for(i=0;i<r2;i++){
							for(j=0;j<=i;j++){
								
								if(i==j) t=t+b[i][i];
							}
						}
						printf("Sum of all major diagonal elements from Matrix %d is %d ",k,t);
						
					}
					break;
			case 6:printf("From which Matrix do you want to find its Sparse Matrix (1st or 2nd): ");
			       scanf("%d",&k);
					int sp[20][3]={0};
					if(k==1){t=0;
						for(i=0;i<r1;i++){
							for(j=0;j<c1;j++){
								if(a[i][j]==0) t++;
							}
						}
						if(t>r1*c1/2){ int m=1;
							printf("Sparse Matrix is: \n");
							sp[0][0]=r1;sp[0][1]=c1;sp[0][2]=(r1*c1)-t;
							for(i=0;i<r1;i++){
								for(j=0;j<c1;j++){
									if(a[i][j]!=0){
										sp[m][0]=i;
										sp[m][1]=j;
										sp[m][2]=a[i][j];
										m++;
									}
								}
									}
							for(i=0;i<m;i++){
								for(j=0;j<3;j++){
									printf("%d\t",sp[i][j]);
								}
								printf("\n");
							}		
						}
						else{
							printf("Given Matrix is not Sparse matrix!!");exit(0);
						}
						if(k==2){t=0;
						for(i=0;i<r2;i++){
							for(j=0;j<c2;j++){
								if(b[i][j]==0) t++;
							}
						}
						if(t>r2*c2/2){ int m=1;
							printf("Sparse Matrix is: \n");
							sp[0][0]=r2;sp[0][1]=c2;sp[0][2]=(r2*c2)-t;
							for(i=0;i<r2;i++){
								for(j=0;j<c2;j++){
									if(b[i][j]!=0){
										sp[m][0]=i;
										sp[m][1]=j;
										sp[m][2]=b[i][j];
										m++;
									}
								}
									}
						}
						else{
							printf("Given Matrix is not Sparse matrix!!");
							exit(0);
						}
						break;
			
						
					}
				}
					
					
					
		}
		printf("\n\nDo you want to operate again ? (1-YES, 0-NO) : ");
		scanf("%d",&an);
	}while(an==1);
}
