#include<bits/stdc++.h>
using namespace std;

class BTnode {
    public:
    int val;
    BTnode*left;
    BTnode*right;

    BTnode(int val) {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

BTnode* make_bt() {
    int val;
    cin>>val;
    if(val==-1) {
        return NULL;
    }

    BTnode*root=new BTnode(val);

    root->left=make_bt();
    root->right=make_bt();

    return root; 
}

BTnode* make_bt_level_wise() {
    int val;
    cout<<"give root val"<<endl;
    cin>>val;

    if(val==-1) return NULL;
    BTnode*root=new BTnode(val);

    queue<Btnode*>q;
    q.push(root);

    while(!q.empty())
    {
        BTnode*f=q.front();
        q.pop();
        cout<<"enter left chilf of"<<f->val<<"node"<<endl;
        int lc;
        cin>>lc;
        if(lc!=-1){
            BTnode*leftC=new BTnode(lc);
            f->left=leftC;
            q.push(leftC);
        }

        cout<<"enter right child of"<<f->val<<"node"<<endl;
        int rc;
        cin>>rc;
        if(rc!=-1){
             BTnode*rightC=new BTnode(rc);
            f->right=rightC;
            q.push(rightC);
        }
    }
    return root;
}

void print(BTnode*root){
    if(root==NULL){
        return;
    }

    cout<<root->val<<":";
    if(root->left){
        cout<<root->left->val<<" ";
    }
    if(root->right){
        cout<<root->right->val<<" ";
    }
    cout<<endl;

    print(root->left);
    print(root->right);

    return;
}

int main() {
    BTnode*root=make_bt_level_wise();
    print(root);

    return 0;
}