#include<stdio.h>
#include<conio.h>
struct date
{int dd,mm,yy;};
struct person
{
	char name[100],address[100],telno[100];
	struct date dob;
}p[100];
void main()
{
	char ch,u;
	int i=0,j=0;
	do
	{
	printf("Enter name:");
	gets(p[i].name);
	printf("Enter address:");
	gets(p[i].address);
	printf("Enter telno:");
    gets(p[i].telno);
	printf("Enter the date of birth:\n");
	printf("Day:");
	scanf("%d",&p[i].dob.dd);
	printf("Month:");
	scanf("%d",&p[i].dob.mm);
	printf("Year:");
	scanf("%d",&p[i].dob.yy);
	i++;
	u=getchar();
	printf("Do you want to add any new record?(Y/N)\n");
	scanf("%c",&ch);
	u=getchar();
	}
	while(ch!='n' && ch!='N');
	j=i;
	printf(" Name \t Address \t Telephone no \t Date of birth");
	for(i=0;i<j;i++)
	{
	printf("\n %s \t %s \t %s \t %d-%d-%d \n",p[i].name,p[i].address,p[i].telno,p[i].dob.dd,p[i].dob.mm,p[i].dob.yy);
	}
	getch();
}
