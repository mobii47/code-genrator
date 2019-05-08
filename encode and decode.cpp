#include<iostream>
using namespace std;
void GenerateCode(int *p1, int *p2, char *line);
void Decode(int *p1, int *p2, char *line);
//my roll number is 18F-0252.
int a; //0 + 2 + 1;
int b; // 5 + 2 + 1;
int *ptr1, *ptr2;
char *line;
char arr1[100];
int arr2[100];

int main() {
	cout << "enter first segment of key: ";
	cin >> a;
	cout << endl << "enter 2nd segment of key: ";
	cin >> b;
	ptr1 = &a;
	ptr2 = &b;
	line = arr1;
	cin.ignore();
	cout << "Original Line: ";
	cin.getline(line, 100);
	GenerateCode(ptr1, ptr2, line);
	cout << endl;
	Decode(ptr1, ptr2, line);
	system("pause>0");
	return 0;
}
void GenerateCode(int *p1, int *p2, char *line) {
	int arr2[100];
	for (int k = 0; k < 100; k++) {
		arr2[k] = line[k];
	}
	int i = 0;
	while (arr2[i] != '\0') {
		if (arr2[i] < 91) {
			arr2[i] += a;
		}
		else if (arr2[i] > 96) {
			arr2[i] += b;
		}

		i++;
	}
	for (int k = 0; k < 100; k++) {
		line[k] = arr2[k];
	}
	int j = 0;
	cout << "Encoded Line: ";
	while (line[j] != '\0') {
		cout << line[j];
		j++;
	}
}
void Decode(int *p1, int *p2, char *line) {
	int arr2[100];
	for (int k = 0; k < 100; k++) {
		arr2[k] = line[k];
	}
	int m = 0;
	while (arr2[m] != '\0') {
		if (arr2[m] < 91) {
			arr2[m] -= a;
		}
		else if (arr2[m] > 96) {
			arr2[m] -= b;
		}

		m++;
	}
	for (int k = 0; k < 100; k++) {
		line[k] = arr2[k];
	}
	cout << "decoded Line: ";
	int n = 0;
	while (line[n] != '\0') {
		cout << line[n];
		n++;
	}
}