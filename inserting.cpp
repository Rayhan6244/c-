#include<iostream>
using namespace std;
int main()
{
    string text, toinsert;
    int position;
    cout<<"Enter text: ";
    cin>>text;
    cout<<"Enter the position: ";
    cin>>position;
    cout<<"Enter the string to insert: ";
    cin>>toinsert;

    string result = text.substr(0,position)+ toinsert+text.substr(position);
    cout<<"Result: "<<result<<endl;
    return 0;
}
