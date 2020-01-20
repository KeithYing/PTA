//
// Created by K on 2020/1/20.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, max = -1, min = 101, score;
	cin >> n;
	string maxName, minName, maxNum, minNum, name, num;
	for (int i = 0; i < n; i++) {
		cin >> name >> num >> score;
		if (max < score) {
			max = score;
			maxName = name;
			maxNum = num;
		}
		if (min > score) {
			min = score;
			minName = name;
			minNum = num;
		}
	}
	cout << maxName << " " << maxNum << endl << minName << " " << minNum;
	return 0;
}