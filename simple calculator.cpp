#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    char x;
    while(true)
    {

    cout<<"Enter the number one: "<< endl;
    cin>>num1;
    cout<<"Enter the number two: "<<endl;
    cin>>num2;

    cout<< "press a is Sum"<<endl;
    cout<< "press b is Substraction"<<endl;
    cout<< "press c is Multipication"<<endl;
    cout<< "press d is Division"<<endl;
    cout<< "press e is Remainder"<<endl;
    cin>>x;

   if(x=='a')
    cout<< "The Sum= "<< num1+num2<<endl; 
    
    else if(x=='b')
    cout<< "The Substraction= "<< num1-num2<<endl;

   else if(x=='c')
    cout<< "The Multipication= "<< num1*num2<<endl;
      
    else if(x=='d')
   
    cout<< "The Division= "<< (float)num1/num2<<endl;
    

    else if(x=='e')
    cout<< "The Remainder= "<< num1%num2<<endl;

    else
        cout<< "Invalid number"<<endl;


    }
    return 0;


}
