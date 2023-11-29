#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main()
{
    srand(time(0));

    int num = rand() %100 + 1;
    int guess = 0;

    do
    {
        cout<<"Enter number in range (1 to 100)"<<endl;
        cout<<"YOUR NUMBER : ";
        cin>>guess;
        if(guess == num)
        {
            cout<<endl<<"***** !!!CONGRATULATIONS!!! *****"<<endl;
            cout<<"***** YOUR GUESS IS CORRECT *****"<<endl;
        }
        else if(guess < num)
        {
            cout<<endl<<"!!! YOUR GUESS IS LOWER !!!"<<endl;
        }
        else
        {
            cout<<endl<<"!!! YOUR GUESS IS HIGHER !!!"<<endl;
        }
    }while(guess != num);

    return 0;
}
