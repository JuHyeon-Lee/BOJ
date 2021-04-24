#include <iostream>
#include <string>

using namespace std;

class Node{
public:
	int data;
	Node *prev;
	Node *next;
	
	Node(int input){
		data = input;
		prev = NULL;
		next = NULL;
	}
};

class Queue{
public:
	int size;
	Node *head;
	Node *tail;
	
	Queue(){
		size = 0;
		head = NULL;
		tail = NULL;
	}
	
	void push(int input){
		Node *node = new Node(input);
		if(head==NULL){
			head = node;
		}
		if(tail!=NULL){
			tail->next = node;
			node->prev = tail;
		}
		tail = node;
		size++;
	}
	
	int pop(){
		if(head==NULL) return -1;
		
		int result = head->data;
		
		head = head->next;
		if(head==NULL) tail = NULL;
		else head->prev = NULL;
		size--;
		
		return result;
	}
	
	bool empty(){
		if(size) return false;
		else return true;
	}
	
	int front(){
		if(head==NULL) return -1;
		return head->data;
	}
	
	int back(){
		if(tail==NULL) return -1;
		return tail->data;
	}
};

int main(){
	
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	Queue q;
	
	int N;
	cin >> N;
	while(N--){
		string command;
		cin >> command;
		
		if(command=="push"){
			int num;
			cin >> num;
			q.push(num);
		}
		else if(command=="pop"){
			cout << q.pop() << "\n";
		}
		else if(command=="size"){
			cout << q.size << "\n";
		}
		else if(command=="empty"){
			cout << q.empty() << "\n";
		}
		else if(command=="front"){
			cout << q.front() << "\n";
		}
		else if(command=="back"){
			cout << q.back() << "\n";
		}
	}
	
	return 0;
}