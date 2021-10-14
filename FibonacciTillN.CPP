#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    
    cout<<"enter the total numbers you want for fibbonacci series it shoul be less than 50--"<<endl;

    cin >> n;
    int arr[50];
    
    for(int i=2;i<=n+1;i++)
    {arr[0]=0;
    arr[1]=1;
        arr[i]=arr[i-1]+arr[i-2];
        cout<<arr[i-2]<<endl;
        
    }
    
    //write your code here
    int k=0;

    cout<<endl;
    for(int i=0;i<n;i++){
        k+=arr[i];
    }
    cout<<"the sum is--"<<k<<endl;

    
}
