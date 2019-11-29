#include <iostream>
#include <string>
	
	class Account {
	
	public:
	
	   Account( std::string accountName, int initialBalance )
	      : name{ accountName } {
	
	      if ( initialBalance > 0 )
	         balance = initialBalance;
	   }
	
	   void deposit( int depositAmount ) {
	      if ( depositAmount > 0 )
	         balance = balance + depositAmount;
	   }
	
	   void withdraw( int withdrawAmount ) {
	      if ( withdrawAmount > balance )
	         std::cout << "Withdrawal amount exceeded account balance.\n";
	      if ( withdrawAmount <= balance )
	         balance = balance - withdrawAmount;
	   }
	
	   int getBalance() const {
	      return balance;
	   }
	
	   void setName( std::string accountName ) {
	      name = accountName;
	   }
	
	   std::string getName() const {
	      return name;
	   }
	
	private:
	
	   std::string name;
	   int balance{ 0 };
	};
	
	using namespace std;
	
	int main() {
	
	   Account account1{ "Jane Green", 50 };
	   Account account2{ "John Blue", -7 };
	
	   cout << "account1: " << account1.getName() << " balance is $"
	      << account1.getBalance();
	   cout << "\naccount2: " << account2.getName() << " balance is $"
	      << account2.getBalance();
	
	   int withdrawAmount;
	
	   cout << "\n\nEnter withdraw amount for account1: ";
	   cin >> withdrawAmount;
	
	   account1.withdraw( withdrawAmount );
	
	   cout << "\naccount1: " << account1.getName() << " balance is $"
	      << account1.getBalance();
	   cout << "\naccount2: " << account2.getName() << " balance is $"
	      << account2.getBalance();
	
	   cout << "\n\nEnter withdraw amount for account2: ";
	   cin >> withdrawAmount;
	   
	   account2.withdraw( withdrawAmount );
	
	   cout << "\naccount1: " << account1.getName() << " balance is $"
	      << account1.getBalance();
	   cout << "\naccount2: " << account2.getName() << " balance is $"
	      << account2.getBalance() << endl;
	
	   return 0;
	}

