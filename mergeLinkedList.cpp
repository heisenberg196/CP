#include <bits/stdc++.h>

using namespace std;

class node{
public:
    int d;
    node *next;
   
};
void create(node*&head, int d){
    while(true){
        node * new_node = new node();
        new_node->next=NULL;
    new_node->d = d;
            if(head==NULL){
                cout<<"head created";
                head=new_node;        
            }
            else{
            new_node->next=head;
            head=new_node;
            }
        return;
    }
}
void prt(node*head){
        node*temp = head;
    while(temp!=NULL){
        cout<<temp->d<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

node* mergelist(node*head1, node*head2){
    if(head1==NULL && head2!=NULL ){
        return head2;
    } 
    if(head2==NULL && head1!=NULL ){
        return head1;
    }
    if(head2==NULL && head1==NULL ){
        return NULL;
    }
    node *temp  = NULL;
    if(head1->d<head2->d){
        temp=head2;
        temp->next = mergelist(head1, head2->next);
    }
    else{
        temp=head1;
        temp->next = mergelist(head1->next, head2);
    }
    return temp;
        
}
node * midpt(node * head){
    node * temp1 = head; 
    node * temp2 = head; 
    while(temp1 != NULL and temp1->next!=NULL){
        temp1 = temp1->next->next;
        temp2 = temp2->next;
    }
    return head;
}
node * mergeSort(node * head){
    if( head==NULL or head->next == NULL){
        return head;
    }
    node * mid = midpt(head);

    node * temp1 = head;
    node * temp2 = mid->next;
    mid->next=NULL;

     temp1 = mergeSort(temp1);

     temp2 = mergeSort(temp2);
    node* temp3 = mergelist(temp1, temp2);
    return temp3;
}

int main()
{
    node*head1 = NULL;
    // node*head2 = NULL;
    cout<<"enter sorted list 1 : ";

    while(true){
        int d;
        cin>>d;
        if(d==-1)
        break;
        else
    create(head1, d);

    }
    // cout<<"enter sorted list 2 : ";

    // while(true){
    //     int d;
    //     cin>>d;
    //     if(d==-1)
    //     break;
    // create(head2, d);

    // }
    prt(head1);
    // prt(head2);

    // head1 = mergelist(head1, head2);
    head1 = mergeSort(head1);
    prt(head1);
}