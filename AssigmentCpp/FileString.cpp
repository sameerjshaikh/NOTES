#pragma once;
#include<iostream>
#include<ostream>
#include<fstream>
#include<string>
using namespace std;
void writeFile();
void readFile();

string filename = "out.txt";

int main()
{
	writeFile();
	readFile();	
}

void writeFile()
{
	ofstream fout;
	fout.open(filename);

	char str[78] = "Time is a great teacher but unfortunately it kills all its pupils. Berlioz";
		/*getline(str,str);*/
	fout << str<<endl;
	
	fout.close();
	return ;
}
void readFile()
{
	ifstream fin;
	fin.open(filename);
	string str;
	while (!fin.eof()) {
		getline(fin, str);
		cout << str << endl;
	}
	fin.close();
	return;
}

//int main()
//{
//	writeFile();
//	readFile();
//}
//void writeFile()
//{
//	ofstream fm;
//	
//	string line = "";
//
//	fm.open(filename, ios::app);
//
//	while (fm)
//	{
//		getline(cin, line);
//
//		if (line == "-1")
//		{
//			break;
//		}
//		fm << line << endl;
//	}
//
//	fm.close();
//}
//
//void readFile()
//{
//	ifstream fmi;
//	string line1 = "";
//	fmi.open(filename, ios::app);
//
//	while (fmi)
//	{
//		getline(fmi, line1);
//
//		cout << line1 << endl;
//	}
//	fmi.close();
//}