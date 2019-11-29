#include <iostream>
#include <iostream>
	
class Date {
	
	public:
	
	   Date( int m, int d, int y ) {
	      setMonth( m );
	      setDay( d );
	      setYear( y );
	   }
	
	   void setMonth( int m ) {
	      month = m;
	      if ( m < 1 ) month = 1;
	      if ( m > 12 ) month = 1;
	   }
	
	   void setDay( int d ) {
	      day = d;
	   }
	
	   void setYear( int y ) {
	      year = y;
	   }
	
	   int getMonth() const {
	      return month;
	   }
	
	   int getDay() const {
	      return day;
	   }
	
	   int getYear() const {
	      return year;
	   }
	
	   void displayDate() const {
	      std::cout << month << '/' << day << '/' << year << std::endl;
	   }
	
	private:
	
	   int month;
	   int day;
	   int year;
	};
	
	using namespace std;
	
	int main() {
	
	   Date date( 11, 8, 1983 );
	
	   cout << "Initial date: ";
	   date.displayDate();
	
	   date.setMonth( 13 );
	
	   cout << "Modified date: ";
	   date.displayDate();
	
	   return 0;
	}

