#include <iostream>
#include <string>
#include <iomanip>

#include "header.h"
using namespace std;

int main()
{
	OvernightPackage item1("Jaime Lannister", "Penn 1800 St", "King's Landing",
		"Knowhere", "09500", "Tyrion Lannister", "123 AAA street", "Harlem", "Cali",
		"56789", 14.00, 1.50, 1.10);
	TwoDayPackage item2("Jon Snow", "123 5th Street", "Hunting Pot",
		"California", "12556", "Tony Stark", "455 Hawk Street", "Orlando", "Florida",
		"88865", 22.00, 1.50, 8.00);

	cout << fixed << setprecision(2);
	cout << "--------------------------------------\n";
	cout << "Overnight Delivery\n";
	cout << "Sender        " << item1.getsender_name() << "\n";
	cout << "              " << item1.getsender_address() << "\n";
	cout << "              " << item1.getSendCity() << " " <<
		item1.getsender_state() << " " << item1.getsender_ZIP() << "\n";
	cout << "\n";
	cout << "Recipient     " << item1.getrecipient_name() << "\n";
	cout << "              " << item1.getsender_address() << "\n";
	cout << "              " << item1.getrecipient_city() << " " <<
		item1.getrecipient_state() << " " << item1.getrecipient_ZIP() << "\n";
	cout << "Cost          $ " << item1.calculateCost() << "\n";
	cout << "--------------------------------------\n";

	cout << "\n\n";
	cout << "--------------------------------------\n";
	cout << "2 Day Delivery\n";
	cout << "Sender        " << item2.getsender_name() << "\n";
	cout << "              " << item2.getsender_address() << "\n";
	cout << "              " << item2.getSendCity() << " " <<
		item2.getsender_state() << " " << item2.getsender_ZIP() << "\n";
	cout << "\n";
	cout << "Recipient     " << item2.getrecipient_name() << "\n";
	cout << "              " << item2.getsender_address() << "\n";
	cout << "              " << item2.getrecipient_city() << " " <<
		item2.getrecipient_state() << " " << item2.getrecipient_ZIP() << "\n";
	cout << "Cost          $ " << item2.calculateCost() << "\n";
	cout << "--------------------------------------\n";
	return 0;
}
