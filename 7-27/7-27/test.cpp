// write your code here cpp
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int atoi(string c) {
	int l = c.length();
	int r = 0;
	int i = 0;
	for (i = 0; i < l; i++) {
		r = r * 10 + (c[i] - '0');
	}
	return r;
}
int main() {
	int n;
	string c;
	string sign = "+-*/";
	while (cin >> n) {
		stack<int> s;
		int a, b;
		while (n--) {
			cin >> c;
			if (sign.find(c) == string::npos) {
				s.push(atoi(c));
				continue;
			}
			else {
				a = s.top();
				s.pop();
				b = s.top();
				s.pop();
				if (c == "+")
					s.push(a + b);
				else if (c == "-")
					s.push(b - a);
				else if (c == "*")
					s.push(a*b);
				else
					s.push(b / a);
			}
		}
		int ret = s.top();
		s.pop();
		cout << ret << endl;
	}
	return 0;
}