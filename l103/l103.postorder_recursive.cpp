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


void postorder(node*root){
    if(root==NULL){
        return;
    }
    
    postorder(root->left);
    
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    cout<<"enter the root node : ";
    node*root;
    root = binarytree();

    postorder(root);
    return 0;
}