//
// Created by K on 2020/1/19.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;
	int sum = 0;
	string str[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
	for (char i : s) sum += (i - '0');
	string num = to_string(sum);
	for (int i = 0; i < num.length(); i++) {
		if (i != 0) cout << " ";
		cout << str[num[i] - '0'];
	}
	return 0;
}