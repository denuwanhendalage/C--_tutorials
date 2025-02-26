#include <iostream>
using namespace std;

struct Node{
    int data;
    Node*left;
    Node*right;
};
Node*findMin(Node*root){
    
}

Node*delete(Node*root,int data){
    if (root==NULL){
        return root;
    }
    else if(data<root->data){
        root->left=delete(root->left,data);
    }
    else if (data>root->data){
        root->right=delete(root->right,data);
    }
    else{
        if (root->left==NULL && root->right==NULL){
            delete root;
            root=NULL;
            return root;
        }
        else if (root->left==NULL){
            Node*temp=root;
            root=root->right;
            delete temp;
            return root;
        }
        else if (root->right==NULL){
            Node*temp=root;
            root=root->left;
            delete temp;
            return root;
        }
        else {
            Node*temp=findMin(root->right);
            root->data=temp->data;
            root->right=delete(root->right,temp->data);
            return root;
        }


    }


}



int main() {
    Node*root;
    int data;
    delete(root,data);

    return 0;
}
