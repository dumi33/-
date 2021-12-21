#include<iostream>
#include<string>
#define MAX 5
using namespace std;

typedef int element;

class queue {
private:
	int front;
	int rear;
	element data[MAX];
public:
	queue() {
		front = -1;
		rear = -1;
	}
	void print() {
		if (is_Empty()) cout << "원소가 없습니다\n";
		else {
			for (int i = front + 1; i <= rear; i++) {
				cout << data[i] << " ";
			}
			cout << "\n";
		}

	}
	int is_full() {
		if (rear == MAX - 1) return 1;
		else return 0;
	}
	int is_Empty() {
		if (rear == front) return 1;
		else return 0;
	}
	void enqueue(int ele) {
		if (is_full()) {
			cout << "포화상태" << "\n";
		}
		else {
			data[++rear] = ele;
		}
	}
	void dequeue() {
		if (is_Empty()) cout << "텅빈 상태" << "\n";
		else {
			front++;
		}
	}

};



int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	queue q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5); q.print();
	q.enqueue(6);
	q.dequeue(); q.print();
	q.dequeue(); q.print();
	q.dequeue(); q.print();
	q.dequeue(); q.print();
	q.dequeue(); q.print();
	q.dequeue(); q.print();
}
