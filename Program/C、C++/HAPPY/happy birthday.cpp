#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <math.h>
using namespace std;
void color(short x)	//自定义函根据参数改变颜色 
{
	if (x >= 0 && x <= 15)//参数在0-15的范围颜色
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);	//只有一个参数，改变字体颜色 
	else//默认的颜色白色
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	/*
颜色函数SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),前景色 | 背景色 | 前景加强 | 背景加强);
	前景色：数字0-15 或 FOREGROUND_XXX 表示	（其中XXX可用BLUE、RED、GREEN表示）
	前景加强：数字8 或 FOREGROUND_INTENSITY 表示
	背景色：数字16 32 64 或 BACKGROUND_XXX 三种颜色表示
	背景加强： 数字128 或 BACKGROUND_INTENSITY 表示
主要应用：改变指定区域字体与背景的颜色
前景颜色对应值：
　　0=黑色                8=灰色　　
  　1=蓝色                9=淡蓝色        十六进制        　　
　　2=绿色                10=淡绿色       0xa        　　
　　3=湖蓝色              11=淡浅绿色     0xb　
　　4=红色                12=淡红色       0xc　　
　　5=紫色                13=淡紫色       0xd        　　
　　6=黄色                14=淡黄色       0xe        　　
　　7=白色                15=亮白色       0xf
　　也可以把这些值设置成常量。*/
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
	
	cout << "\n\n\n\n\n\n\n\n             请注意每次请按“回车”继续\n\n               但是也别按的太快奥\n\n          并且请把窗口调到最大！！（先不调也行，一会让你调在调）" << endl;
	getchar(); system("cls");
	cout << "\n\n\n\n\n\n\n\n             ——你是不是叫张斯萌？";
	getchar(); system("cls");
	cout << "\n\n\n\n\n\n\n               上一句是好像废话哈,不就是给你的吗，hhhhhhhhh嗝\n\n             ——你是否出生于1998年11月02日?";
	getchar(); system("cls");
	cout << "\n\n\n\n\n\n\n             emmmm... 这不还是废话么，明知故问\n" << endl;
	getchar(); system("cls");
	cout << "\n\n\n\n\n\n\n\n     系统正在核实:已检测  0%，请稍后…\n     |##" << endl; 
	Sleep(500); system("cls"); 
	cout << "\n\n\n\n\n\n\n\n     系统正在核实:已检测 11%，请稍后…\n     |####" << endl; 
	Sleep(500); system("cls");
	cout << "\n\n\n\n\n\n\n\n     系统正在核实:已检测 29%，请稍后…\n     |######" << endl; 
	Sleep(500); system("cls");
	cout << "\n\n\n\n\n\n\n\n     系统正在核实:已检测 47%，请稍后…\n     |########" << endl; 
	Sleep(500); system("cls");
	cout << "\n\n\n\n\n\n\n\n     系统正在核实:已检测 61%，请稍后…\n     |##########" << endl; 
	Sleep(500); system("cls");
	cout << "\n\n\n\n\n\n\n\n     系统正在核实:已检测 85%，请稍后…\n     |############" << endl; 
	Sleep(500); system("cls");
	cout << "\n\n\n\n\n\n\n\n     系统正在核实:已检测 93%，请稍后…\n     |##############" << endl; 
	Sleep(500); system("cls");
	cout << "\n\n\n\n\n\n\n\n     系统正在核实:已检测 97%，请稍后…\n     |################" << endl; 
	Sleep(500); system("cls");
	cout << "\n\n\n\n\n\n\n\n     系统正在核实:已检测 99%，请稍后…\n     |##################" << endl; 
	Sleep(1500); system("cls");
	cout << "\n\n\n\n\n\n\n\n     系统正在核实:已检测100%，请稍后…\n     |##################|" << endl;
	Sleep(1000);
	cout << "\n\n     经核实，今天是你在地球出生的第22年" << endl;
	Sleep(1500);
	cout << "\n                也是你在地球出生的第264个月" << endl;
	Sleep(2000); 
	cout << "\n                也是你在地球出生的第1148个星期" << endl;
	Sleep(2000);
	cout << "\n                也是你在地球出生的第8036天" << endl;
	Sleep(2000);
	cout << "\n                我谨代表党和人民热烈庆祝你的生日，祝你生日快乐！\n" << endl;
	Sleep(2000);
	cout << "并希望你高举中国特色社会主义伟大旗帜，以邓小平理论、“三个代表”重要思想、科学发展观为指导.\n" << endl;
	Sleep(2000);
	cout << "      深入学习宣传贯彻党的十九大精神，解放思想，坚持改革开放，凝聚力量，攻坚克难.\n" << endl;
	Sleep(2000);
	cout << "           坚定不移沿着中国特色社会主义道路前进，为全面建成小康社会而奋斗。\n" << endl;
	Sleep(2000);
	cout << "               与时俱进，再接再厉，再创辉煌。" << endl;
	cout << "\n\n\n\n\n\n                                                please continue..." << endl;
	getchar(); system("cls");
	color(4); 
	cout << "\n\n\n\n\n\n                           Happy Birthday" << endl;
	Sleep(1500);
	color(14);
	cout << "\n\n                              生日快乐" << endl;
	color(16); Sleep(2000);
	cout << "\n\n\n\n\n\n\n\n   " << endl;
	color(4);
	cout << "                               *****       " << endl;
	color(14);
	cout << "                               |||||  " << endl;
	color(16);
	cout << "                            |▉▉▉▉▉▉▉▉ |" << endl;
	cout << "                        |▉▉▉▉▉▉▉▉▉▉▉▉▉▉▉ |" << endl;
	cout << "                     |▉▉▉▉▉▉▉▉▉▉▉▉▉▉▉▉▉▉▉▉▉ |" << endl;
	cout << "\n\n\n\n                     许个愿吧，在吹个蜡烛。\n\n                 哈哈  请原谅我的蛋糕些许的潦草  ——." << endl;
	cout << "\n\n\n\n\n\n                                                please continue..." << endl;
	getchar(); system("cls");
	cout << "\n\n\n\n\n\n\n\n   " << endl;
	color(14);
	cout << "\n                               |||||  " << endl;
	color(16);
	cout << "                            |▉▉▉▉▉▉▉▉ |" << endl;
	cout << "                        |▉▉▉▉▉▉▉▉▉▉▉▉▉▉▉ |" << endl;
	cout << "                     |▉▉▉▉▉▉▉▉▉▉▉▉▉▉▉▉▉▉▉▉▉ |" << endl;
	cout << "\n\n\n                祝你生日快乐，心想事成，万事如意。" << endl;
	cout << "\n\n\n\n\n\n                                                please continue..." << endl;
	getchar(); system("cls");
	cout << "\n                    请把窗口调到最大！！" << endl;
	Sleep(1000);
	cout << "\n                    调好了吗？" << endl;
	getchar(); ;system("cls"); 
	color(4);
	aixin(); 
	color(16);
	cout << "\n\n\n\n\n\n                                                please continue..." << endl;
	getchar(); system("cls");
	cout << "\n\n\n\n\n\n              没了，可以关了" << endl;
	return 0;
}