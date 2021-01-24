#include <bits/stdc++.h>
using namespace std;
// bst
#define ptr struct treenode * 

struct Node {
      int val;
      Node *next;
      Node() : val(0), next(nullptr) {}
      Node(int x) : val(x),  next(nullptr) {}
      Node(int x, Node *next) : val(x), next(next) {}
};

struct treenode {
    int val;
    ptr left;
    ptr right;
    treenode () : val(0), left(NULL) , right(NULL) {}
    treenode(int x) : val(x) , left(NULL) , right(NULL) {}
    treenode(int x , ptr left , ptr right) : val(x) , left(left) , right(right) {}
    
};

ptr insert(ptr tree , int x) {
    ptr temp = tree;
    ptr tem = new treenode(x);
    if(temp == NULL ){
        tree = tem;
        return tree;
    }
    if (temp ->val > x ){
        temp ->left = insert(temp->left , x);
        return temp;
    }
    temp->right = insert(temp->right , x);
    return temp;
}

ptr find(ptr tree , int x){
    if(tree == NULL ) return NULL;
    if(tree->val == x ) return tree;
    else if (tree->val >x) return find(tree->left , x);
    return find(tree->right , x);
}

void inorder(ptr tree ){
    if(tree == NULL) return;
    inorder(tree->left);
    cout<<tree->val<<" ";
    inorder(tree->right);
    return;
}

void preorder(ptr tree){
    if(tree == NULL) return;
    cout<<tree->val<<" ";
    preorder(tree->left);
    preorder(tree->right);
    return;
}

void postorder(ptr tree){
    if(tree==NULL) return;
    postorder(tree->left);
    postorder(tree->right);
    cout<<tree->val<<" ";
    return;
}

ptr inorder_successor(ptr tree ){
    if(tree==NULL )return NULL;
    if(tree->left == NULL)return tree;
    return inorder_successor(tree->left);
}

ptr deletenode (ptr tree, int x){
    if(tree == NULL) return NULL;
    if(tree->val > x) {
        tree->left = deletenode(tree->left , x);
        return tree;
    }
    else if (tree->val < x ){
        tree->right = deletenode(tree->right , x);
        return tree;
    }
    if(tree->left == NULL && tree->right == NULL) return NULL;
    else if (tree->right == NULL && tree->left != NULL) return tree->left;
    else if (tree->right != NULL && tree->left == NULL) return tree->right;
    ptr temp = inorder_successor(tree->right);
    int tem = temp->val;
    temp->val = tree->val;
    tree->val = tem;
    tree->right = deletenode(tree->right , x);
    return tree;
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
	ptr tree = NULL;
    tree = insert(tree,50);
    tree = insert(tree,30);
    tree = insert(tree,20);
    tree = insert(tree,40);
    tree = insert(tree,70);
    tree = insert(tree,60);
    tree = insert(tree,80);

    cout<<"Inorder Traversal"<<endl;
    inorder(tree);
    cout<<endl;

    tree = deletenode(tree,20);
    cout<<"Inorder Traversal of modified tree is:"<<endl;
    inorder(tree);
    cout<<endl;

    tree = deletenode(tree,30);
    cout<<"Inorder Traversal of modified tree is:"<<endl;
    inorder(tree);
    cout<<endl;

    tree = deletenode(tree,50);
    cout<<"Inorder Traversal of modified tree is:"<<endl;
    inorder(tree);
    cout<<endl;
	return 0;
}
