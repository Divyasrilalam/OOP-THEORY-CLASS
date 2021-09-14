#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct donor
{
	int sino;
	char hospital[30];
	char dname[30];
	char darea[30];
	char dBG[20];
	int dMN;

}donor[500];
int main()
{
	int i,n,count=0;
	printf("Enter number of donors \n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n serial number:");
		scanf("%d",&donor[i].sino);
		printf("\n hospital name:");
		scanf("%s",&donor[i].hospital);
		printf("\n donor name:");
		scanf("%s",&donor[i].dname);
		printf("\n area:");
		scanf("%s",&donor[i].darea);
		printf("\n blood group:");
		scanf("%s",&donor[i].dBG);
		printf("\n mobile number:");
		scanf("%d",&donor[i].dMN);
	}
	for(i=0;i<n;i++)
	{
		printf("\n SI NO\t\thospitla\t\tdname\t\tdarea\t\tdBG\t\tdMN\n\n\n");
		printf("%d",donor[i].sino);
		printf("\t\t %s",donor[i].hospital);
		printf("\t\t %s \n\n",donor[i].dname);
		printf("\t\t %s \n\n",donor[i].darea);
		printf("\t\t %s \n\n",donor[i].dBG);
		printf("\t\t %d \n\n",donor[i].dMN);
	    
	}
    printf("Enter the blood group(A positive,A negative,B positive,B negative,O positive,O negative,AB positive,AB negative):");
    scanf("%s",donor[i].dBG);
	
	    for(i=0;i<n;i++)
    {
		if ("dBG is A positive")
		{
		    count++;
		    break;
		}
		else
            printf("this is not your required donor");
            scanf("%s",&donor[i].dBG);
    }


}
