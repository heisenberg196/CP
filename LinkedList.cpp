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

node *  rec_rev(node*head){

    if(head->next == NULL){
        return head;
    }
    node *h = rec_rev(head->next);
    head->next->next = head;
    head->next=NULL;
   
    return h;

}

void midpointRunner(node*head){
    if(!head->next)
    {
        cout<<head->d;
        return;

    }
    node * temp1 =head;
    node * temp2 =head;
    while(temp1 && temp1->next){
        temp1=temp1->next->next;
        temp2 = temp2->next;
    }
    cout<<"midpoint "<<temp2->d<<endl;
}

void kthnode(node*head){
int k;
cout<<"enter kth from end";
cin>>k;
k--;
node*temp1 = head;
for (int i = 0; i < k && temp1->next!=NULL; ++i, temp1=temp1->next);
node*temp2=head;
while(temp1->next){
    temp1=temp1->next;
    temp2=temp2->next;

}
cout<<"\n kth from end : "<<temp2->d<<endl;
}

int main()
{
    node*head = NULL;
    while(true){
        int d;
        cout<<"enter val";
        cin>>d;
        if(d==-1)
        break;
    create(head, d);

    }
    node*temp = head;
    while(temp!=NULL){
        cout<<temp->d<<" ";
        temp = temp->next;
    }
    cout<<endl;

    midpointRunner(head);
    kthnode(head);

    //  head = rec_rev(head);

    // temp=head;
    // cout<<temp->d;

    //     while(temp!=NULL){
    //     cout<<temp->d<<" ";
    //     temp = temp->next;
    // }

}