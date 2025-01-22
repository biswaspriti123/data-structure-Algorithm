#include<iostream>
using namespace std;

 

int getMin(int num[], int n)
{
    int min= __INT16_MAX__;
    for(int i=0; i<n;i++)
    {
        if(num[i] > min)
        {
            min =num[i];
        }
    }
    //returning max value
    return min;
}

int main()
{
    int size;
    cin >> size;
    int num[100];
     
     // taking input in array
    for(int i=0; i<size; i++)
    {
       cin >> num[i];
    }

    cout<< "Minimum value is" << getMin(num, size) <<endl;
    return 0;
}