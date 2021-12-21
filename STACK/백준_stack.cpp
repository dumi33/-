#include<iostream>
#include<string>
using namespace std;
int stack[10001];
int top = -1;
void push(int ele, int top) {
	stack[top] = ele;
}
void size() {
	if (top == -1) cout << 0 << "\n";
	else cout << top + 1 << "\n";
}
void empty() {
	if (top == -1) {
		cout << 1 << "\n";
	}
	else {
		cout << 0 << "\n";
	}
}
void pop() {
	if (top == -1) cout << -1 << "\n";
	else cout << stack[top--] << "\n";
}
void Top() {
	if (top == -1)cout << -1 << "\n";
	else cout << stack[top] << "\n";
}
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n;
	cin >> n;
	string inst;
	int ele;
	for (int i = 0; i < n; i++) {
		cin >> inst;
		if (inst == "push") {
			cin >> ele;
			push(ele, ++top);
		}
		if (inst == "pop") {
			pop();
		}
		if (inst == "size") {
			size();
		}
		if (inst == "empty") {
			empty();
		}
		if (inst == "top") {
			Top();
		}
	}
}