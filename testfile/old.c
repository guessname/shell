#include <stdio.h>
int main(void)
{
	  // force to convert   
    const int *x = 30;  
    int *y = 100;       // ͬ���ĵ�ַ�����������ǲ�һ����  
    x = y; 
    printf("%d\t%p\n", *x, x);
    printf("%d\t%p\n", *y, y);
}