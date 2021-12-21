#include<iostream>
#include<string>
using namespace std;
int n, ele;
int front = -1, rear = -1;
int queue[10001];
void is_Empty() {
	if (rear == front) {
		cout << 1 << "\n";
	}
	else {
		cout << 0 << "\n";
	}
}
void push(int ele) {
	queue[++rear] = ele;
}
void pop() {
	if (rear == front) {
		cout << "-1\n";
	}
	else {
		cout << queue[++front] << "\n";
	}
}

void size() {
	cout << rear - front << "\n";
}
void Front() {
	if (rear == front) cout << "-1\n";
	else cout << queue[front + 1] << "\n";
}
void back() {
	if (rear == front) cout << "-1\n";
	else cout << queue[rear] << "\n";
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	string inst;
	for (int i = 0; i < n; i++) {
		cin >> inst;
		if (inst == "push") {
			cin >> ele;
			push(ele);
		}
		if (inst == "pop") {
			pop();
		}
		if (inst == "size") {
			size();
		}
		if (inst == "empty") {
			is_Empty();
		}
		if (inst == "front") {
			Front();
		}
		if (inst == "back") {
			back();
		}
	}
}