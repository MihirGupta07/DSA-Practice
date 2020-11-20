// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
void sort012(int[],int);

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

// } Driver Code Ends


void sort012(int a[], int n)
{
    int l=0,m=0,h=n-1;
   for(int i = 0; i<=h;i++)
   {
       switch(a[i])
       {
           case(0):
           {
               swap(a[i],a[l]);
               l++;
               m++;
               break;
               
           }
           case(1):
           {
               m++;
               break;
           }
           case(2):
           {
               
               swap(a[i],a[h]);
               h--;
               break;
               
           }
       }
   }
     
}
