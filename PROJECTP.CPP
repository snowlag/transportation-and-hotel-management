
/* Name: ankit joshi
  class: 11 sci
  roll num:05
  Topic:factorial,permutation and combination.
  */
 #include<iostream.h>
#include<stdlib.h>
int factorial(int f);
int permutation(int n,int r);
int combination(int nc,int rc);
int menue();

int factorial(int nf)
{
 int val=1;
 for(int i=1;i<=nf;i++)
  {
   val=val*i;
   }
   return val;
   }

   int permutation(int n,int r)
  {
   int num,den,val1,final;

   num=factorial(n);
   val1=n-r;
   den=factorial(val1);
   final=(num/den);
   return final;
   }

   int combination(int nc,int rc)
   {
    int num,den,val1,final;
    num=factorial(nc);
    val1=nc-rc;
    den=(factorial(rc)*factorial(val1));
    final=num/den;
    return final;
    }
    int menue()
    {
     int option;
     cout<<" \npress the option"<<endl;
     cout<<"1. find factorial of a number"<<endl;
     cout<<"2. find permutation(npr)"<<endl;
     cout<<"3. find combination(ncr)"<<endl;
     cout<<"4. exit"<<endl;
     cin>>option;
     return option;
     }
     main()
      {
       do
	{switch(menue())
	 {
	   case 1:int num;
		  cout<<"enter the number whoes factorial is to be counted:";
		  cin>>num;
		  cout<<"factorial of "<<num<< " is "<<factorial(num)<<endl;
		  break;
	   case 2:int ni,ri;
		  cout<<"enter the value of n ang r:";
		  cin>>ni>>ri;
		  cout<<"permutation with n as "<<ni<<" and r as "<<ri<<" is "<<permutation(ni,ri)<<endl;
		  break;
	  case 3: int nci,rci;
		  cout<<"enter the value of n and r:";
		  cin>>nci>>rci;
		  cout<<"combination with n as "<<nci<<" and r as "<<rci<< "is "<<combination(nci,rci)<<endl;
		  break;
	  case 4:
		 exit(0);
		 break;
	 default: cout<<"wrong choice.please see the options again"<<endl;
		  }
		   }while(1);
		 }