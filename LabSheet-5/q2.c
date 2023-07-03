// WAP to display the multiplication table of integer given by the user
#include<stdio.h>
int main(){
int n,i, table =1;
printf("Enter the number which you want your multiplication table");
scanf("%d",&n);
for(i =1; i<=10;i++ ){
    table = n*i;
    printf("%d *%d=%d\n",n,i,table);
    }
    return 0;
}