#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	cout << "Hello World" << endl;

	FILE* myFile = fopen("/tmp/nkmquanSPU.txt"; "w");
	fprintf(myFile, "Engaging the Culture, Changing the World.");
	fclose(myFile);
	return 0;
}
