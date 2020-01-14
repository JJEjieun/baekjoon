#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	stack<int> s;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		if (num == 0) {
			if (!s.empty())
				s.pop();
		}
		else {
			s.push(num);
		}
	}
	int sum = 0;

	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}
	cout << sum << endl;
	return 0;
}