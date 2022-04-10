#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a,b;
	string Q,W,E,R,T,Y,U;
	while(a != -1)
 {
   	cout<<"=================================================\n\n";
    cout<<"\n\t\t1.Start Billing\n\n";
    cout<<"\t\t2.Add or Remove Item\n\n";
    cout<<"\t\t3.Show Item Details\n\n";
    cout<<"\t\t4.Exit Program\n\n";
    cout<<"\t\tPlease Enter Required Option: ";
    cin>>a;
    cout<<endl;
     if(a==4)
    {
    	return 0;	
	}
	 else if(a==1)
	{
   	  cout<<"=================================================\n\n";
	  cout<<" BILL DETAILS ";
      cout<<"ITEM NO"; 
      cout<<"NAME";
      cout<<"PRICE";  
      cout<<"QUANTITY";
      cout<<"TAX %";
      cout<<"DISCOUNT %";
      cout<<"NET AMOUNT";	
	}
	else if(a==2)
	{
      cout<<"=================================================\n\n";	
	  cout<<" Enter the number of items you want to add :";
	  cin>>b;
	  cout<<endl;
    for(int i=0; i<b; i++)
	 {
	  cout<<"\ta.ITEM NO: ";
	  cin>>Q; 
	  cout<<endl;
      cout<<"\tb.NAME OF ITEM: ";
      cin>>W;
       cout<<endl;
      cout<<"\tc.PRICE :";
      cin>>E;
       cout<<endl;
      cout<<"\td.QUANTITY : ";
      cin>>R;
       cout<<endl;
      cout<<"\te.TAX % : ";          
      cin>>T;  
	   cout<<endl;                  
      cout<<"\tf.DISCOUNT % : ";
      cin>>Y;
       cout<<endl;
      cout<<"\tg.NET AMOUNT : ";
      cin>>U;
       cout<<endl;
	 }	
	}
	else if(a==3)
	{
	  cout<<"=================================================\n\n";
	  cout<<" Enter the number of items you want to view :";
	  cin>>b;
	  cout<<endl;
    for(int i=0; i<b; i++)
	 {
	  cout<<"\ta.ITEM NO :"<<Q<<endl; 
      cout<<"\tb.NAME :"<<W<<endl;
      cout<<"\tc.PRICE :"<<E<<endl;
      cout<<"\td.QUANTITY :"<<R<<endl;
      cout<<"\te.TAX % :"<<T<<endl;
      cout<<"\tf.DISCOUNT % :"<<Y<<endl;
      cout<<"\tg.NET AMOUNT :"<<U<<endl;
	  cout<<"=================================================\n\n";	
	 }	
	}
	
 }
}
