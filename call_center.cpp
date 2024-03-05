#include<iostream>
#include<iomanip>
#include<conio.h>
#include<unistd.h>

using namespace std;
void intro1(){
    cout<<"\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t\t***************************************************************"<<endl;
    cout<<"\t\t\t\t\t\t\t\tWELCOME TO CALL CENTER SIMULATOR"<<endl;
    cout<<"\t\t\t\t\t\t***************************************************************"<<endl;
}
void intro2(){
  cout<<"\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\tOBJECTIVE OF THIS PROGRAM:"<<endl;
    cout<<"\t\t\t\t1.USERS CAN SELECT THE OPERATOR SKILLS:"<<endl;
    cout<<"\t\t\t\t\t-EXPERT\n\t\t\t\t\t-INTERMEDIATE\n\t\t\t\t\t-ROOKIE"<<endl;
    cout<<"\t\t\t\t2.USERS CAN SELECT THE WORKING HOURS OF THE DAY:"<<endl;
    cout<<"\t\t\t\t\t-PEAK HOURS\n\t\t\t\t\t-NORMAL HOURS\n\t\t\t\t\t-LOW LOAD HOURS"<<endl;
    cout<<"\t\t\t\t*This program simulates the call handling by the operators with different skill sets during different work hours and\n\t\t\t\thow the calls are queued, how priority calls are handled and how phone numbers are securely stored."<<endl;

}
int operator_select(){
    int a;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\tSELECT THE OPERATOR SKILLS:"<<endl;
    cout<<"\t\t\t\t\t1.EXPERT\n\t\t\t\t\t2.INTERMEDIATE\n\t\t\t\t\t3.ROOKIE"<<endl;
    cout<<"\t\t\t\t\t---------------------------"<<endl;
    cout<<"\t\t\t\t\tChoose:1,2 or 3?"<<endl;
    cin>>a;
    return a;
}
int work_hour_select(){
    int a;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\tSELECT THE WORKHOUR:"<<endl;
    cout<<"\t\t\t\t\t1.PEAK[HIGH TRAFFIC]\n\t\t\t\t\t2.MEDIUM\n\t\t\t\t\t3.LOW TRAFFIC"<<endl;
    cout<<"\t\t\t\t\t---------------------------"<<endl;
    cout<<"\t\t\t\t\tChoose:1,2 or 3?"<<endl;
    cin>>a;
    return a;
}
int main(){
    int op;
    int work_hour;
    intro1();
    cout<<"\n\n\t\t\t\t\tPress ENTER"<<endl;
    getch();
    system("cls");
    intro2();
    cout<<"\n\n\n\t\t\t\t\tPress ENTER"<<endl;
    getch();
    system("cls");
    op=operator_select();
    system("cls");
    work_hour=work_hour_select();
    system("cls");
    return 0 ;
}