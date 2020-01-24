#include<iostream>
using namespace std;

int permutation(int n, int r)
{   int v=0;
	if(n-r==0)
	  return 1;
	  else
	  {
	   v=(n*permutation(n-1,r));
	   return(v);
	  }
	
  return 0;
}

int combination(int n, int r)
{   int v=0;
	if(r==0)
	  return 1;
	  else
	  {
	   v=(n)*combination(n-1,r-1)/r;
	   return(v);
	  }
  return 0;
}

int main()
{   
  int n,r;
  cout<<"ENTER VALUES OF N AND R ";
  cin>>n>>r ;
  try{
    if(n<r||n<0||r<0)
    throw "-----------INVALID INPUT -----------";
    else if(r==0)
    { cout<<"PERMUTAION_OF "<<n<<"P"<<r<<" IS=> "<<1<<endl;
    cout<<"COMBINATION_OF "<<n<<"C"<<r<<" IS=>"<<1;
}
	else
    {
    cout<<"PERMUTAION_OF "<<n<<"P"<<r<<" IS=> "<<permutation(n,n-r)<<endl;
    cout<<"COMBINATION_OF "<<n<<"C"<<r<<" IS=>"<<combination(n,n-r);
	}
	}
    catch(const char *a)
    {
    	cout<<a;
	}

  return 0;
}
