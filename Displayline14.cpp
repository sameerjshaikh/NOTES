#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ifstream rfile;
	rfile.open("STORY.TXT");
	char str[100];
	int count = 0;
	while (!rfile.eof()) {
		rfile.getline(str, 100);
		if (str[0] == 'A')
			count++;
	}

	cout << "Number of lines not starting with A Alphabet is:-" << count;
	rfile.close();
	return 0;
}