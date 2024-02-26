#include<iostream>
using namespace std;
int main()
{
    float pi=3.1415;
    float radius,height;
    cout<<"Enter the Height of the Cylinder : ";
    cin>>height;
    cout<<"Enter the radius of the Cylinder : ";
    cin>>radius;
    float volume=pi*radius*radius*height;
    cout<<"The Volume of the Cylinder is : "<<volume<<endl;
    
}