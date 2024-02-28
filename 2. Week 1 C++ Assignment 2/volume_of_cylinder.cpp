#include<iostream>
using namespace std;
int main()
{
    float radius,height;
    float pi=3.1415;
    cout<<"Enter a radius of a cylinder :";
    cin>>radius;
    cout<<"Enter a height of a cylinder : ";
    cin>>height;
    float volume=pi*radius*radius*height;
    cout<<"Volume of a cylinder is : "<<volume;
    }