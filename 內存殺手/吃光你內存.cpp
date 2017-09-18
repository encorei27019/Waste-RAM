#include<stdio.h>
#include<stdlib.h>
#include<Windows.h> //使用sleep等

void main1()
{
	while (1) //值為非0=死循環，值為0=不循環
	{
		printf("你好 再見\n");
		Sleep(2000); //休眠兩秒
	}
}

void main2()
{
	while (true)
	{
		//system("calc"); //當calc關閉以後 在執行下一個，同步執行
		system("start calc"); //小心使用，電腦會炸
	}
}

void main3()
{
	malloc(1024*1024*1024); //呼叫作業系統的API來配置記憶體
	//如果一次吃太大，會無法成功，此方法稱為"鯨吞"(吃不下要吐出來)
	getchar();
}

void main()
{
	while (true)
	{
		malloc(1024 * 1024 * 10); //蠶食
		Sleep(1000);
	}
}