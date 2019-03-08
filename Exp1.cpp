#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main ()
{
	int GameNo;
	string TicketType;
	int NumberTix;
	const int box = 250;
	const int sideline = 100;
	const int premium = 50;
	const int genAd = 25;
	double Total = TicketType * NumberTix;


	cout << "Enter Game day (1, 2, 3, 4) "<< endl;
	cin >> GameNo;
	
	cout << "Enter Ticket Type (box, sideline, premium, general admission) "<< endl;
	cin >> TicketType;
	std::string << box << = 250 << std::end;
	std::string << sideline << std::int << = << 100 <<std::end;
	std::string << premium << = << 50 <<std::end;
	std::string << general admission << = << 25 <<std::end;

	cout << "Enter Number of Tickets "<< endl;
	cin >> NumberTix;

	cout << "Total Price: " << Total << endl;
 	std::cout << TicketType << "*" << NumberTix << std::endl;

	_getch();
	return 0;
}