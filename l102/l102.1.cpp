# include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*left,*right;
    node(int val){
        data = val;
        left = right =NULL;
    }
};
int main(){
    int x;
    cout<<"enter the root element: ";
    cin>>x;

    int first,second;

    queue<node*>q;
    node*root = new node(x);
    q.push(root);
    // build the binary tree
    while(!q.empty()){
        node* temp=q.front();
        q.pop();

        // left node creation

        cout<<"enter the left child of "<<temp->data<<" : ";
        cin>>first; // left node ki value 
        if(first!=-1){
            temp->left=new node(first);
            q.push(temp->left);
        }
        
        // right node creation
        cout<<"enter the right child of "<<temp->data<<" : ";
        cin>>second; // right node ki value 
        if(second!=-1){
            temp->right=new node(second);
            q.push(temp->right);
        }
        
    }

    return 0;
}