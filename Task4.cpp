//#include<iostream>
//#include<string>
//using namespace std;
//struct Customer
//{
//	string name;
//	string address;
//	string city;
//	string telephone;
//	string lastPaymentDate;
//	double accountBalance;
//};
//int main()
//{
//	const int N = 10;
//	Customer customer[N];
//	int choice;
//	cout << "1. Enter the Customer's data" << endl;
//	cout << "2. Change the contents of Account" << endl;
//	cout << "3. Display the data" << endl;
//	cout << "Enter your choice: ";
//	cin >> choice;
//	if (choice == 1)
//	{
//		for (int i = 0;i < N;i++)
//		{
//			cout << "Enter Customer's name: ";
//			getline(cin, customer[i].name);
//			cout << "Enter Customer's address: ";
//			getline(cin, customer[i].address);
//			cout << "Enter Customer's city: ";
//			getline(cin, customer[i].city);
//			cout << "Enter Customer's telephone: ";
//			getline(cin, customer[i].telephone);
//			cout << "Enter Customer's Last Payment date: ";
//			getline(cin, customer[i].lastPaymentDate);
//			cout << "Enter Customer's balance: ";
//			cin >> customer[i].accountBalance;
//			cin.ignore();
//		}
//
//		if (choice == 3)
//		{
//			for (int i = 0;i < N;i++)
//			{
//				cout << customer[i].name << endl;
//				cout << customer[i].address << endl;
//				cout << customer[i].city << endl;
//				cout << customer[i].telephone << endl;
//				cout << customer[i].lastPaymentDate << endl;
//				cout << customer[i].accountBalance << endl;
//			}
//		}
//	}
//	
//
//}