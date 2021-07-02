#include <iostream>
#include <string>

using namespace std;

class Node{
public:
	int value;
	Node *prev;
	Node *next;
	
	Node(int X){
		value = X;
	}
};

class Deque{
public:
	int size;
	Node *head;
	Node *tail;
	
	Deque(){
		size = 0;
		head = NULL;
		tail = NULL;
	}
	
	void printAll(){
		Node *cur = head;
		while(cur!=NULL){
			cout << cur->value << " ";
			cur = cur->next;
		}
		cout << "\n";
	}
	
	void push_front(int X){
		Node *node = new Node(X);
		if(head==NULL){
			head = node;
			tail = node;
		} else {
			node->next = head;
			head->prev = node;
			head = node;
		}
		size++;
	}
	
	void push_back(int X){
		Node *node = new Node(X);
		if(head==NULL){
			head = node;
			tail = node;
		} else {
			node->prev = tail;
			tail->next = node;
			tail = node;
		}
		size++;
	}
	
	int pop_front(){
		if(head==NULL){
			return -1;
		} else {
			int output = head->value;
			if(head->next!=NULL){
				head = head->next;
				head->prev = NULL;
			} else {
				head = NULL;
				tail = NULL;
			}
			size--;
			return output;
		}
	}
	
	int pop_back(){
		if(tail==NULL){
			return -1;
		} else {
			int output = tail->value;
			if(tail->prev!=NULL){
				tail = tail->prev;
				tail->next = NULL;
			} else {
				head = NULL;
				tail = NULL;
			}
			size--;
			return output;
		}
	}
	
	bool empty(){
		return size==0;
	}
	
	int front(){
		if(head==NULL) return -1;
		else return head->value;
	}
	
	int back(){
		if(tail==NULL) return -1;
		else return tail->value;
	}
};

int main(){
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);
	
	Deque d;
	
	int N;
	cin >> N;
	
	while(N--){
		string s;
		cin >> s;
		
		if(s=="push_front"){
			int X;
			cin >> X;
			d.push_front(X);
		} else if(s=="push_back"){
			int X;
			cin >> X;
			d.push_back(X);
		} else if(s=="pop_front"){
			cout << d.pop_front() << "\n";
		} else if(s=="pop_back"){
			cout << d.pop_back() << "\n";
		} else if(s=="size"){
			cout << d.size << "\n";
		} else if(s=="empty"){
			cout << d.empty() << "\n";
		} else if(s=="front"){
			cout << d.front() << "\n";
		} else if(s=="back"){
			cout << d.back() << "\n";
		}
	}
	
	return 0;
}