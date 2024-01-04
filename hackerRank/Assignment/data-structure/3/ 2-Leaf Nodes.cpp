// Problem Statement

// You will be given a binary tree as input in level order. You need to output the sum of all node's values in that tree except the leaf nodes.

// For example:

// image

// The output for the above tree will be: 60

// Input Format

//     Input will contain the binary tree in level order. 

//     means there is no node available.

// Constraints

// Maximum number of nodes Node's value

// Output Format

//     Output the total sum of that tree except the leaf nodes.

// Sample Input 0

// 10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1

// Sample Output 0

// 60

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node* left;
        Node* right;
         
        Node(int val){
            this->val=val;
            this->left=NULL;
            this->right=NULL;
        }
};


Node* input_tree(){
    int val;
    cin>>val;
    Node* root;
    
    if(val==-1){
        root==NULL;
        return 0;
    } else{
        root=new Node(val);
    } 
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty()){
        Node* p=q.front();
        q.pop();
        
        int l,r;
        cin>>l>>r;
        
        Node* left;
        Node* right;
        
        if(l==-1) left=NULL;
        else left=new Node(l);
        
        if(r==-1) right=NULL;
        else right=new Node(r);
        
        p->left=left;
        p->right=right;
        
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
        
    } 
    
    return root;
}

void  leaf_Nodes(Node* root,vector<int> &v){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL){
        v.push_back(root->val);
    }
    
    if(root->left) leaf_Nodes(root->left,v);
    if(root->right) leaf_Nodes(root->right,v);
   
  
}

int main()
{
    vector<int> v;
    Node* root=input_tree();
    leaf_Nodes(root,v);
    
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    
    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}
