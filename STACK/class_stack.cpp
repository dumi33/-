#include<iostream>
#include<string>
using namespace std;
const int MAX = 100;
typedef int element;
class stack {
private:
	int top;
	element data[MAX];
public:
	stack() { // 생성자
		top = -1;
	}
	bool empty() {
		if (top == -1) return 1;
		else return 0;
	}
	void size() {
		cout<<top + 1<<"\n";
	}
	void Top() {
		if (empty()) cout << "stack이 비어있습니다\n";
		else cout << data[top]<<"\n";
	}
	void push(int ele) {
		if (top == MAX - 1) cout << "stack이 꽉 찼습니다\n";
		else data[++top] = ele;
	}
	void pop() {
		if (empty()) cout << "stack이 비어있습니다\n";
		else top-- ;

	}
	void print() {
		cout << "stack의 상태\n";
		for (int i = top; i >=0 ; i--) {
			cout << data[i] << "\n";
		}
	}
};
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	stack s;
	s.push(100); 
	s.push(200);
	s.push(300); 
	s.push(400); s.print();
	s.size();
	s.Top();
	s.pop();
	s.Top();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
}