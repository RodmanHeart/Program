#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <math.h>
using namespace std;
void color(short x)	//�Զ��庯���ݲ����ı���ɫ 
{
	if (x >= 0 && x <= 15)//������0-15�ķ�Χ��ɫ
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);	//ֻ��һ���������ı�������ɫ 
	else//Ĭ�ϵ���ɫ��ɫ
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	/*
��ɫ����SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),ǰ��ɫ | ����ɫ | ǰ����ǿ | ������ǿ);
	ǰ��ɫ������0-15 �� FOREGROUND_XXX ��ʾ	������XXX����BLUE��RED��GREEN��ʾ��
	ǰ����ǿ������8 �� FOREGROUND_INTENSITY ��ʾ
	����ɫ������16 32 64 �� BACKGROUND_XXX ������ɫ��ʾ
	������ǿ�� ����128 �� BACKGROUND_INTENSITY ��ʾ
��ҪӦ�ã��ı�ָ�����������뱳������ɫ
ǰ����ɫ��Ӧֵ��
����0=��ɫ                8=��ɫ����
  ��1=��ɫ                9=����ɫ        ʮ������        ����
����2=��ɫ                10=����ɫ       0xa        ����
����3=����ɫ              11=��ǳ��ɫ     0xb��
����4=��ɫ                12=����ɫ       0xc����
����5=��ɫ                13=����ɫ       0xd        ����
����6=��ɫ                14=����ɫ       0xe        ����
����7=��ɫ                15=����ɫ       0xf
����Ҳ���԰���Щֵ���óɳ�����*/
}
float f(float x, float y, float z) {
	float a = x * x + 9.0f / 4.0f * y * y + z * z - 1;
	return a * a * a - x * x * z * z * z - 9.0f / 80.0f * y * y * z * z * z;
}

float h(float x, float z) {
	for (float y = 1.0f; y >= 0.0f; y -= 0.001f)
		if (f(x, y, z) <= 0.0f)
			return y;
	return 0.0f;
}
void aixin()
{
	for (float z = 1.5f; z > -1.5f; z -= 0.05f) 
	{
		for (float x = -1.5f; x < 1.5f; x += 0.025f) 
		{
			float v = f(x, 0.0f, z);
			if (v <= 0.0f)
			{
				float y0 = h(x, z);
				float ny = 0.01f;
				float nx = h(x + ny, z) - y0;
				float nz = h(x, z + ny) - y0;
				float nd = 1.0f / sqrtf(nx * nx + ny * ny + nz * nz);
				float d = (nx + ny - nz) * nd * 0.5f + 0.5f;
				putchar(".:-=+*#%@"[(int)(d * 5.0f)]);
			}
			else
				putchar(' ');
		}
		putchar('\n'); Sleep(30);
	}
}

int main()
{
	
	cout << "\n\n\n\n\n\n\n\n             ��ע��ÿ���밴���س�������\n\n               ����Ҳ�𰴵�̫���\n\n          ������Ѵ��ڵ�����󣡣����Ȳ���Ҳ�У�һ��������ڵ���" << endl;
	getchar(); system("cls");
	cout << "\n\n\n\n\n\n\n\n             �������ǲ��ǽ���˹�ȣ�";
	getchar(); system("cls");
	cout << "\n\n\n\n\n\n\n               ��һ���Ǻ���ϻ���,�����Ǹ������hhhhhhhhh��\n\n             �������Ƿ������1998��11��02��?";
	getchar(); system("cls");
	cout << "\n\n\n\n\n\n\n             emmmm... �ⲻ���Ƿϻ�ô����֪����\n" << endl;
	getchar(); system("cls");
	cout << "\n\n\n\n\n\n\n\n     ϵͳ���ں�ʵ:�Ѽ��  0%�����Ժ�\n     |##" << endl; 
	Sleep(500); system("cls"); 
	cout << "\n\n\n\n\n\n\n\n     ϵͳ���ں�ʵ:�Ѽ�� 11%�����Ժ�\n     |####" << endl; 
	Sleep(500); system("cls");
	cout << "\n\n\n\n\n\n\n\n     ϵͳ���ں�ʵ:�Ѽ�� 29%�����Ժ�\n     |######" << endl; 
	Sleep(500); system("cls");
	cout << "\n\n\n\n\n\n\n\n     ϵͳ���ں�ʵ:�Ѽ�� 47%�����Ժ�\n     |########" << endl; 
	Sleep(500); system("cls");
	cout << "\n\n\n\n\n\n\n\n     ϵͳ���ں�ʵ:�Ѽ�� 61%�����Ժ�\n     |##########" << endl; 
	Sleep(500); system("cls");
	cout << "\n\n\n\n\n\n\n\n     ϵͳ���ں�ʵ:�Ѽ�� 85%�����Ժ�\n     |############" << endl; 
	Sleep(500); system("cls");
	cout << "\n\n\n\n\n\n\n\n     ϵͳ���ں�ʵ:�Ѽ�� 93%�����Ժ�\n     |##############" << endl; 
	Sleep(500); system("cls");
	cout << "\n\n\n\n\n\n\n\n     ϵͳ���ں�ʵ:�Ѽ�� 97%�����Ժ�\n     |################" << endl; 
	Sleep(500); system("cls");
	cout << "\n\n\n\n\n\n\n\n     ϵͳ���ں�ʵ:�Ѽ�� 99%�����Ժ�\n     |##################" << endl; 
	Sleep(1500); system("cls");
	cout << "\n\n\n\n\n\n\n\n     ϵͳ���ں�ʵ:�Ѽ��100%�����Ժ�\n     |##################|" << endl;
	Sleep(1000);
	cout << "\n\n     ����ʵ�����������ڵ�������ĵ�22��" << endl;
	Sleep(1500);
	cout << "\n                Ҳ�����ڵ�������ĵ�264����" << endl;
	Sleep(2000); 
	cout << "\n                Ҳ�����ڵ�������ĵ�1148������" << endl;
	Sleep(2000);
	cout << "\n                Ҳ�����ڵ�������ĵ�8036��" << endl;
	Sleep(2000);
	cout << "\n                �ҽ�����������������ף������գ�ף�����տ��֣�\n" << endl;
	Sleep(2000);
	cout << "��ϣ����߾��й���ɫ�������ΰ�����ģ��Ե�Сƽ���ۡ�������������Ҫ˼�롢��ѧ��չ��Ϊָ��.\n" << endl;
	Sleep(2000);
	cout << "      ����ѧϰ�����᳹����ʮ�Ŵ��񣬽��˼�룬��ָĸ￪�ţ������������������.\n" << endl;
	Sleep(2000);
	cout << "           �ᶨ���������й���ɫ��������·ǰ����Ϊȫ�潨��С�������ܶ���\n" << endl;
	Sleep(2000);
	cout << "               ��ʱ������ٽ��������ٴ��Ի͡�" << endl;
	cout << "\n\n\n\n\n\n                                                please continue..." << endl;
	getchar(); system("cls");
	color(4); 
	cout << "\n\n\n\n\n\n                           Happy Birthday" << endl;
	Sleep(1500);
	color(14);
	cout << "\n\n                              ���տ���" << endl;
	color(16); Sleep(2000);
	cout << "\n\n\n\n\n\n\n\n   " << endl;
	color(4);
	cout << "                               *****       " << endl;
	color(14);
	cout << "                               |||||  " << endl;
	color(16);
	cout << "                            |���������������� |" << endl;
	cout << "                        |������������������������������ |" << endl;
	cout << "                     |������������������������������������������ |" << endl;
	cout << "\n\n\n\n                     ���Ը�ɣ��ڴ�������\n\n                 ����  ��ԭ���ҵĵ���Щ����ʲ�  ����." << endl;
	cout << "\n\n\n\n\n\n                                                please continue..." << endl;
	getchar(); system("cls");
	cout << "\n\n\n\n\n\n\n\n   " << endl;
	color(14);
	cout << "\n                               |||||  " << endl;
	color(16);
	cout << "                            |���������������� |" << endl;
	cout << "                        |������������������������������ |" << endl;
	cout << "                     |������������������������������������������ |" << endl;
	cout << "\n\n\n                ף�����տ��֣������³ɣ��������⡣" << endl;
	cout << "\n\n\n\n\n\n                                                please continue..." << endl;
	getchar(); system("cls");
	cout << "\n                    ��Ѵ��ڵ�����󣡣�" << endl;
	Sleep(1000);
	cout << "\n                    ��������" << endl;
	getchar(); ;system("cls"); 
	color(4);
	aixin(); 
	color(16);
	cout << "\n\n\n\n\n\n                                                please continue..." << endl;
	getchar(); system("cls");
	cout << "\n\n\n\n\n\n              û�ˣ����Թ���" << endl;
	return 0;
}