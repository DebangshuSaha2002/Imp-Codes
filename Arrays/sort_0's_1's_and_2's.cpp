#include<iostream>
using namespace std;
int main()
{
    int a[]={0,1,0,2,1,0,1,2};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<n;
    int c0=0;
        int c1=0;
        int c2=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                c0++;
            }
            else if(a[i]==1){
                c1++;
            }
            else 
            {
                c2++;
            }
            
        }
        cout<<"0's "<<c0<<endl;
        cout<<"1's "<<c1<<endl;
        cout<<"2's "<<c2<<endl;

        for(int i=0;i<c0;i++){
            a[i]=0;
        }

        cout<<endl;
        for(int k=c0;k<c0+c1;k++){
            a[k]=1;
        }


        cout<<endl;
        for(int m=c0+c1;m<c0+c1+c2;m++){
            a[m]=2;
        }

        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
    }
