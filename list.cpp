#include <bits/stdc++.h>
using namespace std;


struct Node {
      int val;
      Node *next;
      Node() : val(0), next(nullptr) {}
      Node(int x) : val(x),  next(nullptr) {}
      Node(int x, Node *next) : val(x), next(next) {}
};

typedef  struct Node * nodeptr;

nodeptr add (nodeptr list , int x){
    if(list == NULL ){
       nodeptr  list = new Node(x);
        return list;
    }
    list->next = add(list->next,x);
    return list;
}


nodeptr deletes (nodeptr list , int x) {
    // assume list is non empty
    if(list == NULL) return list;
    else if (list->val == x){
       return list->next;
    }
    list->next = deletes(list->next , x);
    return list;
} 

nodeptr find (nodeptr list , int x){
    // return NULL if list is empty
    if(list == NULL)return NULL;
    else if (list -> val == x ) return list;
    return find(list->next , x);
}

int length (nodeptr list ){
    if(list == NULL ) return 0;
    return 1 + length(list->next );
}

void print (nodeptr list) {
    if(list == NULL ) {cout<<endl;return ; }
    cout << list->val << " ";
    print(list->next);
    return ;
}


int main() {
	// your code goes here
	nodeptr head = NULL;
	head = add(head, 1);
	print(head);
	head = add(head,2);
	head = add(head,3);
	head = add(head,4);
	head = add(head,5);
	head = add(head,6);
	int l = length(head);
	cout<<l<<endl;
	print(head);
	head = deletes(head,3);
	l = length(head);
	cout<<l<<endl;
	print(head);
	

	return 0;
}
