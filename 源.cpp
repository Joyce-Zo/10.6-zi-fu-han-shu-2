#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
				strtok - 切字符串

int main()
{
	char arr[] = "chb@qq.com";
	char* p = (char*)"@.";
	char tmp[1024] = { 0 };
	strcpy(tmp, arr);

	/*char* ret = strtok(tmp, p);
	printf("%p ", ret);
	printf("%s ", ret);

	ret = strtok(NULL, p);
	printf("%p ", ret);
	printf("%s ", ret);

	ret = strtok(NULL, p);
	printf("%p ", ret);
	printf("%s ", ret);*/

	 循环：
	char* ret = NULL;
	for (ret = strtok(tmp, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s\n", ret);
		printf("%p\n", ret);
	}

	return 0;
}

				strerror	错误报告函数 = 错误信息函数

int main()
{
	/*char* p = strerror(5);
	printf("%s ", p);
	printf("%p ", p);*/

	FILE* pf = fopen("open.txt", "r");
	if (pf == NULL)
	{				//			errno - 错误码，头文件errno.h
		printf("%s\n", strerror(errno));
	}
	else
	{
		printf("open file successfully.\n");
	}
	return 0;
}
#include<ctype.h>
			字符分类函数
int main()
{
	char p = '2';
	int ret1 = islower(p);
	int ret2 = isdigit(p);
	int ret3 = isupper(p);
			如果是，返回非0数，如果不是，返回0
	printf("%d ", ret2);
	
	return 0;
}

				字符转换函数
int main()
{
	char ch1 = tolower('QWER');
	char ch2 = toupper('a');
	putchar(ch2);
	char* arr =(char*)"AM I OUT OF TOUCH";
	char arr[] = "AM I OUT OF TOUCH";
	int i = 0;
	while (arr[i])
	{
		if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);
		}
		i++;
	}
	while (*arr != '\0')
	{
		if (isupper(*arr))
		{
			*arr = tolower(*arr);
		}
		arr++;
	}
	printf("%s ", arr);
	return 0;
}