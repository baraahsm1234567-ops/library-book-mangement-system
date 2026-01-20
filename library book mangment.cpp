#include<iostream>
#include<string>
using namespace std;
void borrowBook(string books[],bool avalible[],int size,string name){
bool found=false;
for(int i=0;i<size;i++){
    if(books[i]==name){
        found=true;

    if(avalible[i]){
        avalible[i]=false;
        cout<<"Book borrwed sucsisfly!"<<endl;

    }
    else{
        cout<<"Book araldy borrowed"<<endl;
    }

    return;
    }
}
if(!found){cout<<"The book is not founded"<<endl;}
}

void returnedBook(string books[],bool avalible[],int size, string name)
{
    bool found=false;
    for(int i=0;i<size;i++){
        if(books[i]==name){
                found=true;
            if(!avalible[i]){
                avalible[i]=true;
                cout<<"Returned sucssfly!"<<endl;
            }
            else{cout<<"The book is already in library"<<endl;}
        return;
        }
    }
    if(!found){cout<<"This book is not founded"<<endl;}
}



void count(string books[],bool avalible[],int size)
{int count=0;
for(int i=0;i<size;i++)


{
    if(avalible[i])count++;}

        cout<<"The Number books:"<<count<<endl;

}


int main()
{

    int size=3;
    string books[3]={"math","since","English"};
    bool avalible[3]={true,true,true};
    string action, name;
     cout<<"Enter action (borrow,return,count)"<<endl;
    cin>>action;

    if(action=="borrow"){
        cout<<"Enter book name to borrow"<<endl;
        cin>>name;
        borrowBook( books, avalible, size, name);
    }
    else if(action=="return"){
        cout<<"Enter book name to return"<<endl;
        cin>>name;
        returnedBook( books, avalible, size,  name);}
        else if(action== "count"){
                count( books, avalible, size);

        }


else{cout<<"action invalied"<<endl;}































return 0;

}
