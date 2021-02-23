#pragma once
#include<iostream>
#include<vector>
#include<string>
#include"speaker.h"
#include<deque>
#include<map>
#include<algorithm>
#include<numeric>
#include<functional>
#include<fstream>
using namespace std;
class SpeechManager
{
public:
	SpeechManager();
	void show_Menu();
	void exitSystem();
	void initSpeech();
	void createSpeaker();
	void startSpeech();
	void speechDraw();
	void speechContest();
	void showScore();
	void saveRecord();
	void loadRecord();
	void showRecord();
	void clearRecord();
	~SpeechManager();

	vector<int> v1;
	vector<int> v2;
	vector<int> vVictory;
	map<int, Speaker> m_Speaker;
	int m_Index;
	bool fileIsEmpty;
	map<int, vector<string>> m_Record;
};