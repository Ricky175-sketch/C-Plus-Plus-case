#include<iostream>
#include<ctime>
#include"speechManager.h"
using namespace std;
int main()
{
	srand((unsigned int)time(NULL));
	SpeechManager sm;
	int choice = 0;
	while (true)
	{
		sm.show_Menu();
		cout << "ÇëÊäÈëÄúµÄÑ¡Ôñ£º" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			sm.startSpeech();
			break;
		case 2:
			sm.showRecord();
			break;
		case 3:
			sm.clearRecord();
			break;
		case 0:
			sm.exitSystem();
			return 0;
		default:
			cout << "ÊäÈë´íÎó£¡" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}