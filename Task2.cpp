//#include<iostream>
//using namespace std;
//struct Apartment
//{
//	short int numOfBeds;
//	short int numOfBaths;
//	int monthlyRent;
//};
//int main()
//{
//	Apartment apartment;
//	cout << "Enter the number of beds: ";
//	cin >> apartment.numOfBeds;
//	cout << "Enter the number of baths: ";
//	cin >> apartment.numOfBaths;
//	while ((apartment.numOfBeds < 1 || apartment.numOfBeds>3) || (apartment.numOfBaths < 1 || apartment.numOfBaths>2))
//	{
//		cout << "Invalid input" << endl;
//		cout << "Enter the num of beds: ";
//		cin >> apartment.numOfBeds;
//		cout << "Enter the num of baths: ";
//		cin >> apartment.numOfBaths;
//	}
//
//	if (apartment.numOfBeds == 1 && apartment.numOfBaths == 1)
//		apartment.monthlyRent = 8000;
//	else if (apartment.numOfBeds == 1 && apartment.numOfBaths == 2)
//		apartment.monthlyRent = 0;
//
//	if (apartment.numOfBeds == 2 && apartment.numOfBaths == 1)
//		apartment.monthlyRent = 14000;
//
//	else if (apartment.numOfBeds == 2 && apartment.numOfBaths == 2)
//		apartment.monthlyRent = 16000;
//
//	if (apartment.numOfBeds == 3 && apartment.numOfBaths == 1)
//		apartment.monthlyRent = 0;
//	else if (apartment.numOfBeds == 3 && apartment.numOfBaths == 2)
//		apartment.monthlyRent = 18500;
//
//	cout << endl;
//	cout << "Here are the details: " << endl;
//	cout << endl;
//	cout << "Number of beds: " << apartment.numOfBeds << endl;
//	cout << "Number of baths: " << apartment.numOfBaths << endl;
//	cout << "Your monthly Rent: " << apartment.monthlyRent << endl;
//
//	return 0;
//
//}