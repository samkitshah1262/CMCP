#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node*l;
    node*r;
};

node* create(int val){
    node*nn=new node();
    nn->data=val;
    nn->l=nn->r=NULL;
    //cout<<"s"<<' ';
    return nn;
} 

node* insert(node* root, int val){
    if((root)==NULL){
        return create(val);
    }
    if((root)->data >= val){
        (root) -> r= insert(root -> r,val);
    }
    else{
        (root) -> l=insert(root -> l,val);
    }
    return root;
}

node* search(node*root , int k){
    if(root==NULL || root->data == k){
        return root;
    }
    if(root->data < k){
        return search(root->r, k);
    }
    else{
        return search(root->l,k);
    }
}
vector<int> vs;
void inordert(node*root,vector<int> v){
    if(root==NULL){
        return;
    }
    inordert(root->l, v);
    //cout<<root->data<<" ";
    vs.push_back(root->data);
    inordert(root->r, v);
}

int heighttree(node*root){
    if(root==NULL){
        return 0;
    }
    int hr=heighttree(root -> r);
    int hl=heighttree(root -> l);
    if(hl>hr){
        return hl + 1;
    }
    else{
        return hr + 1;
    }
}

void preordert(node*root){
  if(root==NULL){
    return;
  }
  cout<<root->data<<" ";
  preordert(root->l);
  preordert(root->r);

}
//vector<vector<int>> vf;
//vector<int> v;
void plevel(node* root, int level){
    vector<int> vi;
    if (root == NULL){
       // cout<<"sam";
        return;
        
    }
        
    if (level == 1){
        
        // vi.push_back(root->data);
        //     vf.push_back(vi);
        v.push_back(root->data);
        //cout << root->data << " samkit";
    }

    else if (level > 1)
    {
        plevel(root->l, level-1);
        plevel(root->r, level-1);
    }
}

void ltrav(node* root)
{
    int h = heighttree(root);
    int i;
    for (i = 1; i <= h + 1; i++)
        plevel(root, i);
}




node * insertbt(int a[], node* root,
                       int i, int n)
{

    if (i < n)
    {
        node* temp = create(a[i]);
        root = temp;

        root->l = insertbt(a,
                   root->l, 2 * i + 1, n);

        root->r = insertbt(a,
                  root->r, 2 * i + 2, n);
    }
    return root;
}

int main(){
  int n,i,x,y,a,k=0;
  vector<int> v;
  cin>>n;
  node*root=NULL;
  int ar[n];
  for(i=0;i<n;i++){
    cin>>a;
    ar[i]=a;
    }
    int h=sizeof(ar)/sizeof(ar[0]);
    root=insertbt(ar,root,0,h);
    ltrav(root);
    //cout<<" "<<v.size()<<" ";
    // for(i=0;i<v.size();i++){
    //     for(int j=0;j<vf[i].size();j++){
    //         cout<<vf[i][j]<<" ";
            
    //         if(vf[i][j]!=vf[i][vf[i].size()- j - 1]){
    //             cout<<vf[i][j]<<" ";
                
    //             cout<<"False";
    //             //return 0;
    //         }
    //         else{
    //             cout<<"1";
    //             //continue;
    //         }
    //     }
    // }
    for(i=0;i<v.size();i++){
        cout<<endl<<v[i];
    }
    for(i=0;i<vs.size();i++){
        if(vs[i]==vs[vs.size()- i - 1]){
            k++;
        }
    }
    if(k==n){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}