#include<stdio.h>
#include<conio.h>
#include<windows.h>
void bill(char name[], char add[], int o[],char *s[],int p[]);
void main()
{
int i,o[10],p[]={40,60,55,85,95,90,130,25,20,10};
char *s[]={"Rice       ","Fried Rice  ","Sahi Paneer  ","Chicken Kosa  ","Chicken Kabab","Chilli Chicken","Mutton Kosa","Salad       ","Soft Drinks","Sweets        "};
char name[20],add[20];
char a,b;
printf("\t ****************WELCOME TO HOTEL LOVELY***************** \n");
printf("\t\t\tNH-1, PHAGWARA, PUNJAB\n");
printf("\t\t\t MOBILE-+91-9872300000\n");
printf("\n\t Enter Your Name:\t ");
gets(name);
printf("\t Enter Your Address:\t");
gets(add);
printf("\n\t **** DEAR CUSTOMER, TODAY WE HAVE SPECIALY ITEM FOR YOU ****\n\n");
printf(" \t ITEMS \t\t\t PRICE\n");
for(i=0;i<10;i++)
{
printf(" %d. %s \t\t %d (Per Plate)\n",i+1,s[i],p[i]);
}
printf("\nDear customer, would you like to give order?(y for yes/ n for no) : ");
scanf("%c",&a);
 if(a=='y'||a=='Y')
 {
 printf("\n\t Your Order ......");
 printf("\n \t Please Select Your Order(Enter Quantity only):\n");

  for(i=0;i<10;i++)
  {
  printf("\n  %d  \t   %s   \t\t   :\t",i+1,s[i]);
  scanf("%d",&o[i]);
  }
 printf("\n\n \t In 10 Minutes, food will be on the Table");
 printf("\n \t Please Wait....!\n");
 printf("\n\n\n\t Want bill, Sir...?(y for yes)\t:\t ");
 scanf(" %c",&b);

  if(b=='y'||b=='Y')
  {
      bill(name,add,o,s,p);
      }
  }
 printf("\n\n\n\t\t Thank You Sir, Visit Again...!");
 printf("\n___________________________________________________DEVELOPED BY BIKASH THAPA\n");
}
 void bill(char name[], char add[], int o[],char *s[],int p[])
      {
          int i,tot=0;
          system("cls");
          printf("\n\t******************WELCOME TO HOTEL LOVELY********************* \n");
 printf("\t\t\t NH-1, PHAGWARA, PUNJAB\n");
 printf("\t\t\t MOBILE-+91-9872350000\n");
 printf("\n\t Customer Name: \t");
 puts(name);
 printf("\t Customer Address: \t");
 puts(add);
  printf("\n\t Your Today's Bill is.....\n");
  printf(" \t\t\t    ITEMS       \t\t\t\t TOTAL");
  printf("\n\t____________________________________________________________________");
   for(i=0;i<10;i++)
   {
    if(o[i]!=0)
    {
    printf("\n\t\t    %s    \t(%d X %d)\t\t    %d",s[i],o[i],p[i],o[i]*p[i]);
    }
   }
   printf("\n\t____________________________________________________________________");
    for(i=0;i<10;i++)
    {
    tot=tot+o[i]*p[i];
    }
  printf("\n\t Your Total Billing amount is\t:\t\t\t    %d\n",tot);
}

