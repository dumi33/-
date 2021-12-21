/*소스코드 참조 https://github.com/kartmon61/Data_Structure/tree/master/CircularQueue*/
#include<iostream>
#include<string>
using namespace std;
#define MAX 6
class CircularQueue {
private:
	int front, rear;
	int queue[MAX];
public:
	CircularQueue() {
		front = 0;
		rear = 0;
	}
	int isEmpty() {
		if (front == rear) return 1;
		else return 0;
	}
	int isFull() {
		if ((rear + 1) % MAX == front) return 1;
		else return 0;
	}
	void enqueue(int ele) {
		if (isFull()) cout << "꽉찼습니다\n";
		else {
			rear = (rear + 1) % MAX;
			queue[rear] = ele;
		}
	}
	void dequeue() {
		if (isEmpty()) cout << "비어있습니다\n";
		else {
			front = (front + 1) % MAX;
		}
	}
	void print() {
		if (isEmpty()) cout << "비어있습니다\n";
		for (int i = front + 1; i <= rear; i++) {
			cout << queue[i] << " ";
		}
		cout << "\n";
	}

};



int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	CircularQueue Cqueue;
	Cqueue.enqueue(1);
	Cqueue.enqueue(2);
	Cqueue.enqueue(3);
	Cqueue.enqueue(4);
	Cqueue.enqueue(5); Cqueue.print();
	Cqueue.enqueue(6);
	Cqueue.dequeue();
	Cqueue.print();
	Cqueue.dequeue();
	Cqueue.print();
	Cqueue.dequeue();
	Cqueue.print();
	Cqueue.dequeue();
	Cqueue.print();
	Cqueue.dequeue();
	Cqueue.dequeue();

}