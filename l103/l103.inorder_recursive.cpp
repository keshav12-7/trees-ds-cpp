# include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*left,*right;
    node(int val){
        data = val;
        left = right = NULL;
    }
};
node *binarytree(){
    int x ;
    cin>>x;
    if(x == -1){
        return NULL;

    }
    node *temp = new node(x);
    cout<<"enter left child of "<<x<<" : ";
    temp->left = binarytree(); // left side 
    cout<<"enter right child of "<<x<<" : ";
    temp->right = binarytree(); // right side
    return temp;
}


void inorder(node*root){
    if(root==NULL){
        return;
    }
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    cout<<"enter the root node : ";
    node*root;
    root = binarytree();

    inorder(root);
    return 0;
}