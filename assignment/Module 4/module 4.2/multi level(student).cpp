#include<iostream>
using namespace std;
class student                               //grandparent class 
{
    public:
    int rlno;
    student()
    {
        cout<<"Enter stduent Roll number : ";
        cin>>rlno;
    }
};
class score : public student                //parent class
{
    public:
    int sub1,sub2;
    score()
    {
        cout<<"Enter Subject 1 marks : ";
        cin>>sub1;
        cout<<"Enter Subject 2 marks : ";
        cin>>sub2;
    }
};
class result :public score                  //child class
{
    public:
    
    result()
    {
        int reslt;
        reslt = sub1 + sub2;
        cout<<"Result of two subject is : "<<reslt;
    }
};
int main()
{
    result obj;
    
}