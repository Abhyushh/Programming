#include <bits/stdc++.h>
using namespace std;


struct node{
    int el;
    node* next;
};

typedef node* nptr;

nptr createLinkedList(){
    nptr head = new node;
    head->el = 0;
    head->next=NULL;
    int x;
    nptr temp = head;
    while(1){
        cout<<"ENter the element value. 0 to exit" <<endl;
        cin>>x;
        if(x == 0)
            return head;
        else
        {
            temp->next=new node;
            temp=temp->next;
            temp->el=x;
            temp->next=NULL;
        }
    }
}

void printLinkedList(nptr head){
    nptr temp = head;
    while(temp){
        cout<<temp->el<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

nptr new_head = NULL;

nptr reverseLinkedList(nptr head){
    if(head == NULL)
        return NULL;
    nptr temp = reverseLinkedList(head->next);
    if(temp == NULL){
        new_head = head;
        return head;
    }
    else{
        head->next = temp->next;
        temp->next = head;
        return head;
    }
}

int main(){
    nptr head = createLinkedList();
    head=head->next;
    printLinkedList(head);
    reverseLinkedList(head);
    printLinkedList(new_head);
}
