#include<stdio.h>
#include<stdlib.h>
#include<Windows.h> //�ϥ�sleep��

void main1()
{
	while (1) //�Ȭ��D0=���`���A�Ȭ�0=���`��
	{
		printf("�A�n �A��\n");
		Sleep(2000); //��v���
	}
}

void main2()
{
	while (true)
	{
		//system("calc"); //��calc�����H�� �b����U�@�ӡA�P�B����
		system("start calc"); //�p�ߨϥΡA�q���|��
	}
}

void main3()
{
	malloc(1024*1024*1024); //�I�s�@�~�t�Ϊ�API�Ӱt�m�O����
	//�p�G�@���Y�Ӥj�A�|�L�k���\�A����k�٬�"�H�]"(�Y���U�n�R�X��)
	getchar();
}

void main()
{
	while (true)
	{
		malloc(1024 * 1024 * 10); //����
		Sleep(1000);
	}
}