#include<iostream>
using namespace std;

void printArray( int arr[], int size)
{
    cout<< "printing the array" <<endl;
    //print the array
    for(int i=0;i<size;i++){
    cout<< arr[i] <<" ";
    }
    cout<< "printing Done" <<endl;
}
int main()
{
    //declare
    int number[15];
     
     // accessing an array
     cout<< "value at 15 index" << number[10] <<endl;

     // initialising an array
     int second[3]={3, 6, 7};

     cout<< "Value at 2 index" <<second[2] <<endl;
      int third[15] ={2,7};
      
     int n=15;
    // printArray(third,15);

      int fourth[10] ={0};
      
      n=10;
     //printArray(fourth,10);

      int fifth[10] ={1};
      n=10;
     // printArray(fifth ,10);

      int fifthSize =sizeof(fifth)/sizeof(int);
      cout<< "size of Fifth is " <<fifthSize <<endl;
       
       char ch[5] ={'a','b','c','p'};
       cout<<ch[3] <<endl;

       cout<< "printing the array" <<endl;
       //print the array

       for(int i=0;i<5;i++){
        cout<<ch[i]<< " ";
       }

       double firstDouble[5];
       float firstFloat[6];
       bool firstBool[9];

    cout<< "Everything is fine" <<endl;
    return 0;
}