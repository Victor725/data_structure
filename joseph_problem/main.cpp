#include<iostream>
using namespace std;

int main(){
    int m=0,n=0;
    cin>>m>>n;//m people, the nth die
    int* arr=new int[m];
    for(int i=0;i<m;i++){
        arr[i]=1;
    }

    int p=0,q=0; //p---pointer   q---count
    for(int i=0;i<m-1;i++){//leave 1 person alive
        while(q<n){
            if(arr[p]!=0){
                q++;

            }
            if(q==n){
                break;
            }
            p=(p+1)%m;
        }
        arr[p]=0;
        cout<<p+1<<"  ";
        q=0;
        p=(p+1)%m;
    }
    cout<<endl;
    while(true){
        if(arr[p]){
            cout<<"the champion is "<<p+1<<endl;
            break;
        }
        else{
            p=(p+1)%m;
        }
    }
    return 0;
}