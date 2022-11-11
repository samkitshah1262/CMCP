#include<stdio.h>
#include<stdlib.h>
#include <bits/stdc++.h>

using namespace std;
typedef struct node{
    int coeff;
    int pow;
    struct node *next;
}NODE;

NODE* makePolynomial(int* p, int max_pow){
    
    NODE* head = NULL;
    int m = max_pow;
    for (int i=0;i<max_pow+1;++i){

        if (head==NULL)
        {
            NODE* newnode;
            newnode = (NODE*)malloc(sizeof(NODE));
            newnode->coeff = *(p+i);
            newnode-> pow = m;
            newnode->next = NULL;
            head = newnode;

        }
        else{
            NODE* temp = head;
            while((temp->next)!=NULL)
            {
                temp=temp->next;
            }
            NODE* newnode;
            newnode = (NODE*)malloc(sizeof(NODE));
            newnode->coeff = *(p+i);
            newnode-> pow =--m;
            newnode->next = NULL;
            temp->next= newnode;

        }
    }

    return head;
}

void display(NODE* ptr){
    NODE* temp=ptr;
    while(temp!=NULL){
        printf("%d\n", temp->coeff);
        printf("%d\n\n", temp->pow);
        temp = temp->next; 
    }
}

NODE* evaluate(int max_pow, NODE* head_p1, NODE* head_p2){
    NODE* head=NULL;
    int m = max_pow; //7

    for (int i=0;i<max_pow+1;++i){ //[0,7]

        if (head==NULL) //3 2 1 1 0
        {
            NODE* newnode;
            newnode = (NODE*)malloc(sizeof(NODE));
            newnode->coeff = head_p1->coeff; 
            head_p1 = head_p1->next; //correct
            //cout<<"samkit"<<endl;
            newnode-> pow = m;
            newnode->next = NULL;
            head = newnode;

        }
        //else{
            NODE* temp = head; //traverses the existing LL till finds last element
            while((temp->next)!=NULL)
            {
                temp=temp->next;
            }

            NODE* t = head_p1; 
            //while((t->next)!=NULL){
                //printf("jvnfjv");
                NODE* newnode2;
                newnode2 = (NODE*)malloc(sizeof(NODE));
                //printf("%d\n", t->coeff);
                newnode2->coeff = t->coeff;
                // printf("%d", "yoho", newnode->coeff);

                newnode2-> pow =--m;
                cout<<newnode2-> pow<<"newnode pow"<<endl;
                newnode2->next = NULL;
                temp->next= newnode2;
                t = t->next;
            //}
            NODE* t2 = head_p2;
            //while((t2->next)!=NULL){
                NODE* newnode3;
                newnode3 = (NODE*)malloc(sizeof(NODE));
                //printf("%d\n", t2->coeff);
                newnode3->coeff = t2->coeff;
                newnode3-> pow =--m;
                cout<<newnode3-> pow<<"newnode pow"<<endl;
                newnode3->next = NULL;
                temp->next= newnode3;
                t2 = t2->next;
            //}
            // NODE*temp2=head;
            // while(temp2!=NULL){
            //     cout<<temp2->pow<<" pow"<<endl;
            //     cout<<temp2->coeff<<" coef"<<endl;
            //     temp2=temp2->next;
            // }
        //}
    }
    return head;
}


int main(){
    int* p1;
    int* p2;
    int max_pow1, max_pow2;

    scanf("%d",  &max_pow1);
    p1 = (int*)malloc((max_pow1+1)* sizeof(int));
    for (int i = 0; i <max_pow1+1; ++i) {
        int c;
        scanf("%d",&c);
        p1[i]=c;
    }
    scanf("%d",  &max_pow2);
    p2 = (int*)malloc((max_pow2+1)* sizeof(int));
    for (int i = 0; i <max_pow2+1; ++i) {
        int c;
        scanf("%d",&c);
        p2[i]=c;
    }

    NODE* head_p1;
    NODE* head_p2;

    head_p1 = makePolynomial(&p1[0], max_pow1);
    head_p2 = makePolynomial(&p2[0], max_pow2);
    NODE* head_p3;
    //display(head_p1);

    head_p3 = evaluate(max_pow1+max_pow2+1, head_p1, head_p2);
    display(head_p3);
    return 0;
}