#include <stdio.h>
    int a=10,b=10;
    void func_1(){
        printf("From Function-1 a = %d and b = %d\n",a,b);
    }
    void func_2(){
        a=25;
        b=30;
      printf("From Function-2 a = %d and b = %d\n",a,b);
    }
int main()
{
    printf("Form main function a =%d and b = %d\n",a,b);
    func_1();
    func_2();
    a=20;
    func_1();
    return 0;
}