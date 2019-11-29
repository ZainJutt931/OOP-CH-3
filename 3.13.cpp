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
	
	void displayAccount( Account accountToDisplay ) {
	   cout << accountToDisplay.getName() << " balance is $"
	      << accountToDisplay.getBalance() << endl;
	}
	
	int main() {
	
	   Account account1{ "Jane Green", 50 };
	   Account account2{ "John Blue", -7 };
	
	   cout << "account 1: "; displayAccount( account1 );
	   cout << "account 2: "; displayAccount( account2 );
	
	   int depositAmount;
	
	   cout << "\nEnter deposit amount for account1: ";
	   cin >> depositAmount;
	
	   cout << "adding " << depositAmount << " to account1 balance\n\n";
	   account1.deposit( depositAmount );
	
	   cout << "account 1: "; displayAccount( account1 );
	   cout << "account 2: "; displayAccount( account2 );
	
	   cout << "\nEnter deposit amount for account2: ";
	   cin >> depositAmount;
	
	   cout << "adding " << depositAmount << " to account2 balance\n\n";
	   account2.deposit( depositAmount );
	
	   cout << "account 1: "; displayAccount( account1 );
	   cout << "account 2: "; displayAccount( account2 );
	}

