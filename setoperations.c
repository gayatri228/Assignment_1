#include<stdio.h>
int a[10],b[10],c[10],d[10],i,j,k=0,n,m,flag=0,ch,ch1;
void unionof()
{
 for(i=0;i<n;i++)
 {
 c[k]=a[i];
 k++; }
for(i=0;i<m;i++)
 {
flag=0;
 for(j=0;j<n;j++)
 {
 if(b[i]==a[j])
 {
 flag=1;
 break;
 }
 }
 if(flag==0)
 {
 c[k]=b[i];
 k++;
 }
}
printf("\n Union \n");
for(i=0;i<k;i++)
{
printf("%d ",c[i]);
}
}
void intersection()
{
 printf("\n Intersection \n");
 for(i=0;i<n;i++)
 {
 for(j=0;j<m;j++)
 {
 if(a[i]==b[j])
 printf("%d ",a[i]);
 }
 }
}
void difference()
{
 printf("\nDifference\n");
 for(i=0;i<n;i++)
 {
 flag=0;
 for(j=0;j<m;j++)
 {
 if(a[i]==b[j])
 {
 flag=1;
 break;
 }
 }
 if(flag==0)
 printf("%d ",a[i]);
 }
 
}
void sym_diff()
{
 k=0;
 for(i=0;i<n;i++)
 {
 flag=0;
 for(j=0;j<m;j++)
 {
 if(a[i]==b[j])
 {
 flag=1;
 break;
 }
 }
 if(flag==0)
 {
 d[k]=a[i];
 k++;
 }
 }
 for(i=0;i<m;i++)
 {
 flag=0;
 for(j=0;j<n;j++)
 {
 if(b[i]==a[j])
 {
 flag=1;
 break;
 }
 }
 if(flag==0)
 {
 d[k]=b[i];
 k++;
 }
 }
 
 printf("\nSymmetric Diff\n");
 for(i=0;i<k;i++)
 {
 printf("%d ",d[i]);
 }
}

 
int main()
{
do{
 printf("Enter the size of set A :\n");
 scanf("%d",&n);
 printf("Enter the element of set : A\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("Enter the size of set B :\n");
 scanf("%d",&m);
 printf("Enter the elements of set B :\n");
 for(j=0;j<m;j++)
 {
 scanf("%d",&b[j]);
 }
 printf("******Enter Your Choice******\n1.Union \n2.Intersection \n3.difference\n4.Symmetric difference\n(1/2/3/4)\n");
 scanf("%d",&ch);

 switch(ch)
 {
   case 1:
   unionof();
   printf("\n");
   break;

   case 2:
   intersection();
   printf("\n");
   break;

   case 3:
   difference();
   printf("\n");
   break;

   case 4:
   sym_diff();
   printf("\n");
   break;
   
   default:
   printf("Wrong choice");
   printf("\n");

 }
  printf("\nDo you want to proceed ? (y/n)\n");
     scanf(" %c",&ch1);
 }while(ch1=='y');

 }
