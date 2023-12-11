/*	Define a class to represent a bank account. Include the following members:
	 Data Members :
	-Name of the depositor
	-Account Number
	-Type of Account
	-Balance amount in the account
	Member Functions :
	-To assign values
	-To deposited an amount
	-To withdraw an amount after checking balance
	-To display name and balance
*/

#include<iostream>

using namespace std;

class bank
{
		public:
			int acc_no;
        	string name, acc_type;
        	float balance;
        
        void getdata()  
        {	
           	cout<<"---------- BANK -----------";
            cout<<"\n Name of Depositor : ";
        	cin>>name;
        	cout<<"\ Accout No 	: ";
        	cin>>acc_no;
        	cout<<" Account Type 	: ";
        	cin>>acc_type;
        	cout<<" Balance in Account : ";
        	cin>>balance;
        }
        
		void displaydata()
        {
        	cout<<"\n -------------------------";
        	cout<<"\n Name 		: "<<name;
			cout<<"\n Accout No. 	: "<<acc_no;
        	cout<<"\n Account Type 	: "<<acc_type;
        	cout<<"\n Balance 	: "<<balance; 
			cout<<"\n -------------------------"; 
		}
		void deposit()
        {
        	int dept;
        	cout<<"\n\n Enter Deposit Amount = ";
        	cin>>dept;
        	balance+=dept;
        	cout<<"\n ----------------------"; 
        	cout<<"\n Total balance = "<<balance;
        	cout<<"\n ----------------------"; 
		}
        
		void withdraw()
        {
        	int witdr;
        	cout<<"\n\n Enter Withdraw Amount = ";
        	cin>>witdr;
        
			if(witdr>balance)
            {    
				cout<<"\n Cannot Withdraw Amount";
			}
			balance-=witdr;
        	cout<<"\n ----------------------"; 
			cout<<"\n Total balance = "<<balance;
			cout<<"\n ----------------------"; 
		}	
			
};

int main()
{
        bank b1; 
		b1.getdata();
		b1.displaydata();
		b1.deposit();
		b1.withdraw(); 
        return 0;
}

//........Coded by JALPA VADGAMA