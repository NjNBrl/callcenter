#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<unistd.h>
#include<windows.h>
using namespace std;
int i=-1;
char PRIORITY[5];
class Node_q{
    public:
    long int phone;
    Node_q *next;
};
Node_q *q_head= new Node_q();
class Node_h{
    public:
    long int phone;
    Node_h *next;
};
Node_h *h_head= new Node_h();
class Node_s{
    public:
    long int phone;
    Node_s *next;
};
Node_s *s_head= new Node_s();
void traverse_queue(Node_q *ptr,int pos){
    cout<<"\n\n\n\n"<<endl;
    int c;
    for(c=0;c<pos;c++){
        ptr=ptr->next;
    }
        cout<<"\t"<<"***INCOMING CALLS***"<<endl;
        if (ptr->phone==100 ||ptr->phone==101||ptr->phone==102 ){
            HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h,12);
            cout<<"\t\t"<<ptr->phone<<endl;
         }
        else{
            HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h,7);
            cout<<"\t\t"<<ptr->phone<<endl;
        }
        ptr=ptr->next;
        sleep(2);
}
void insert_At_end_queue(long long phone_no){
    Node_q *new_node=new Node_q();
    Node_q *temp_1=new Node_q();
    if(q_head==NULL){
        q_head=new_node;
        new_node->phone=phone_no;
        new_node->next=NULL;
    }
    else{
        temp_1=q_head;
        while(temp_1->next!=NULL){
            temp_1=temp_1->next;
        }
    }
    temp_1->next=new_node;
    new_node->phone=phone_no;
    new_node->next=NULL;
    i++;
    traverse_queue(q_head,i);
    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,7);
}
void phone_no_generator(){
    int k,j;
    srand(13);
    long long phone_list[15];
    for(i=0;i<15;i++){
        long long store=9000000000;
        long long mul=100000000;
        for(j=1;j<=10;j++){
            srand(10+i+j+3);
            store=store+(rand()%10)*mul;
            mul=mul/10;
        }
        phone_list[i]=store;
    }
    phone_list[5]=100;
    phone_list[8]=101;
    phone_list[14]=102;
    for(k=0;k<15;k++){
        insert_At_end_queue(phone_list[k]);
        sleep(1);
    }
}
void priority_insert(long int phone_no){
    Node_q *new_node=new Node_q();
    new_node->phone=phone_no;
    new_node->next=q_head;
}
void priority_insert2(long int phone_no){
    Node_q *new_node=new Node_q();
    new_node->phone=phone_no;
    new_node->next=q_head->next;
    q_head->next=new_node;
}
void traverse(Node_q *ptr){
    cout<<"\n\n\n\n"<<endl;
 
        cout<<"\t"<<"***INCOMING CALLS***"<<endl;
        if (ptr->phone==100 ||ptr->phone==101||ptr->phone==102 ){
            HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h,12);
            cout<<"\t\t"<<ptr->phone<<endl;
         }
        else{
            HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h,7);
            cout<<"\t\t"<<ptr->phone<<endl;
        }
        ptr=ptr->next;
        sleep(2);
}
void handle(){
    int k;
    long int pass;
    int count=0;
    Node_q *ptr=q_head;
    Node_q *temp;
        while(ptr!=NULL){
            if  ((ptr->phone)==100 || (ptr->phone)==101 || (ptr->phone)==102 ){
                count++;
            }
            ptr=ptr->next;
        }
        if (count==0){
            Node_q *ptr=q_head;
            for(k=0;k<count;k++){
                while(ptr!=NULL){
                    if  ((ptr->next->phone)==100 || (ptr->next->phone)==101 || (ptr->next->phone)==102 ){
                        temp=ptr->next;
                        pass=ptr->next->phone;
                        ptr->next=ptr->next->next;
                        delete temp;
                    }   
                }
            if(k==0){
                priority_insert(pass);
            }
            else{
                priority_insert2(pass);
            }
            Node_q *ptr=q_head;
            }
        }
}
int main(){
    q_head=NULL;
    phone_no_generator();
    handle();
    system("cls");
    traverse(q_head);


}