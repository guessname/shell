#include <stdio.h>
int main(void)
{
	  // force to convert   
    const int x = 30;  
    int *y = (int *)(&x);       // ͬ���ĵ�ַ�����������ǲ�һ����  
    *y = 100; 
    printf("%d\t%p\n", x, &x);
    printf("%d\t%p\n", *y, y);
}