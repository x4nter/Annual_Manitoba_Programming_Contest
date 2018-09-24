#include <iostream>
#include <map>

using namespace std;

int main() {
	int k;
	cin >> k;
	for (int i = 0; i < k; i++) {
		int n;
		cin >> n;
		map<int, int> counts;
		for (int j = 0; j < n; j++) {
			int temp;
			cin >> temp;
			if (counts.find(temp) == counts.end())
				counts.insert(pair<int, int>(temp, 1));
			else counts.at(temp)++;
		}
		int max = 0;
		int maxC;
		for (auto& i : counts) {
			if (i.second > max) {
				max = i.second;
				maxC = i.first;
			}
		}
		cout << maxC << " ";
		counts.erase(maxC);
		max = 0;
		for (auto& i : counts) {
			if (i.second > max) {
				max = i.second;
				maxC = i.first;
			}
		}
		cout << maxC << endl;
	}
	return 0;
}
