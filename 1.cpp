#include<iostream>
using namespace std;


 
 int add(int x,int y)
 {
    cout<<"the addition is:"<<x+y<<endl;    
    cout<<"--------------------------------------------------"<<endl;
 }

 int sub(int x,int y)
 {
    cout<<"the substraction is:"<<x-y<<endl;
    cout<<"---------------------------------------------------"<<endl;
 } 

int mul(int x,int y)
{
      cout<<"the multiplication is:"<<x*y<<endl;
      cout<<"---------------------------------------------------"<<endl;  
}

int div(float x,float y)
{
      cout<<"the division is:"<<x/y<<endl;
      cout<<"---------------------------------------------------"<<endl; 
}

int mod(int x,int y)
{
      cout<<"the mode is:"<<x%y<<endl;
      cout<<"---------------------------------------------------"<<endl;  
}

 int main()
 {  
    int user ,x,y;

   do
   {
        cout<<"Enter 1 for addition(+)"<<endl;
        cout<<"Enter 2 for subtraction(-)"<<endl;
        cout<<"Enter 3 for multiplication(*)"<<endl;
        cout<<"Enter 4 for division(/)"<<endl;
        cout<<"Enter 5 for mode(%)"<<endl;
        cout<<"Enter 0 for exit"<<endl;
        cout<<"---------------------------------"<<endl;

        cout<<"Enter your choice:-";
        cin>>user;

         if ( user>=1 && user<=5)
        {
              cout<<"Enter frist number:-";
              cin>>x;

              cout<<"Enter second number:-";
              cin>>y;
        }

        
        switch (user)
        {
            case 1:
              add(x,y);
              break;

            case 2:
              sub(x,y);
              break;

            case 3:
              mul(x,y);
              break;
              
            case 4:
              div(x,y);
              break;

            case 5:
              mod(x,y);
              break;

            case 0:

                cout << "Exiting program" << endl;

            break;

            default:

                cout << "Invalid choice" << endl;
        }
   }
   while (user!=0);
}