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

class Stack{
public:
	int size;
	Node *head;
	Node *tail;
	
	Stack(){
		size = 0;
		head = NULL;
		tail = NULL;
	}
	
	void printAll(){
		Node *cur = head;
		while(cur!=NULL){
			printf("%d ", cur->data);
			cur = cur->next;
		}
		printf("\n");
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
		if(tail==NULL) return -1;
		
		int result = tail->data;
		
		tail = tail->prev;
		if(tail==NULL) head = NULL;
		else tail->next = NULL;
		size--;
		
		return result;
	}
	
	bool empty(){
		if(size) return false;
		else return true;
	}
	
	int top(){
		if(tail==NULL) return -1;
		return tail->data;
	}
	
};

int main(){
	
	Stack s;
	
	int N;
	scanf("%d", &N);
	while(N--){
		string command;
		cin >> command;
		
		if(command=="push"){
			int num;
			cin >> num;
			s.push(num);
		}
		if(command=="pop"){
			cout << s.pop() << endl;
		}
		if(command=="size"){
			cout << s.size << endl;
		}
		if(command=="empty"){
			cout << s.empty() << endl;
		}
		if(command=="top"){
			cout << s.top() << endl;
		}
	}
	
	return 0;
}