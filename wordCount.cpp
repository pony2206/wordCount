#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(int argc,char* argv[])
{
	FILE* inputStream;
	if ((inputStream = fopen(argv[2], "r")) != NULL) {
		if (argv[1][1] == 'c') {
			char ch;
			int cnt = 0;
			while (ch = fgetc(inputStream) != EOF)
				cnt++;
			printf("字符数为%d\n", cnt);
		}
		else if (argv[1][1] == 'w') {
			char ch;
			int cnt = 0;
			while (ch = fgetc(inputStream) != EOF)
				if (ch == '.' || ch == ',' || ch == ' ')
					cnt++;
			printf("单词数为%d\n", cnt);
		}
		else
			printf("输入有误");
		fclose(inputStream);
	}
	else
	{
		printf("文件打开失败");
	}
	return 0;
}

