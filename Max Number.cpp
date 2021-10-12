#include<iostream>

using namespace std;

void max(int a, int b, int c, int d)
{ 
	 cin>> a  >> b >> c >> d ;

	    if(a>b) 
	{
	    if(a>c)
		{
			if(a>d)
			{
				cout<< a<< endl;
			}
		else
			{	
				cout<< d<< endl;
			}	
		}
	}
	    else if(b>c)
	    	{
	    		if(b>d)
	    		{
	    			cout<< b<< endl;
	    		}
	    	else
	    		{
	    			cout<< d<< endl;
	    		}
	    	}

	     if(c>d)
	    	{
	    		cout<< c<< endl;
	   		}
	    else
	    	{
	    		cout<< d<< endl;
	    	}
}

	int main()
	{
	   int a,b,c,d;
	   max(a,b,c,d);
	   return 0;
	}
