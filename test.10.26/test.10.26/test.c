#include<stdio.h>
#include<assert.h>
void my_strcpy(char*arr1,const char*arr2)
{
	assert(arr1 != NULL && arr2 != NULL);//assert表示断言，为假就会报错
	while (*arr1++ = *arr2++)
	{
		;
	}
}
int main()
{
	char arr1[] = {"XXXXXXXXXXXX"};
	char arr2[] = { "hello world" };
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	//const将变量变为常变量使不可改变
	//const int* p = &m,  *p不可改变  ,意味着p无法改变修饰的变量m,无法解引用m,但是可以重新赋值其他变量的地址p = &n
	//int const* p = &m,  p无法改变  解引用可以改变m的值，但是无法重新赋值其他变量的地址p = &n
	return 0;
}