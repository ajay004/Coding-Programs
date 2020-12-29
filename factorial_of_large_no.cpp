#include <iostream>
using namespace std;

int main() {
	int n,t;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[200];
	    int m = 1; 
	    a[m]=1;
	    for(int i=n; i>=1; i--)
	    {
	       int temp = 0 ;
	   for(int j=1; j<=m; j++)
	   {
	      a[j] = a[j]*i + temp;
	   //   cout<<"a[j]->"<<a[j]<<endl;
	      temp = a[j]/10;
	      //cout<<"temp->"<<temp<<endl;
	      if(j==m)
	      if(temp!=0)
	      {
	          m++;
	          a[m] = 0;
	    //      cout<<"m->"<<m;
	      }
          a[j] = a[j]%10; 	   
	       
	   }
	    }
	    for(int i=m; i>=1; i--)
	    {
	        cout<<a[i];
	    }
	    cout<<"\n";
	    
	}
	return 0;
}
