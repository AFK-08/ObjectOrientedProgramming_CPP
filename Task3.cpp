#include<iostream>
#include<string>
using namespace std;
struct Team
{
	string playerName;
	int playerNum;
	int playerPoints;
};
int main()
{
	int index = 0;
	int sum = 0;
	int max = 0;
	const int N = 3;
	Team player[N];
	for (int i = 0;i < N;i++)
	{
		cout << "Enter the player number of Player " << i + 1<<": ";
		cin >> player[i].playerNum;
		cin.ignore();
		cout << "Enter the name of Player " << i + 1 << ": ";
		getline(cin, player[i].playerName);
		cout << "Enter the player points of Player " << i + 1 << ": ";
		cin >> player[i].playerPoints;

		while (player[i].playerNum < 1 || player[i].playerPoints < 0)
		{
			cout << "Invalid Points or Player Number, Enter Again " << endl;
			cout << "Enter the player number of Player " << i + 1 << ": ";
			cin >> player[i].playerNum;
			cin.ignore();
			cout << "Enter the name of Player " << i + 1 << ": ";
			getline(cin, player[i].playerName);
			cout << "Enter the player points of Player " << i + 1 << ": ";
			cin >> player[i].playerPoints;
		}

		sum = sum + player[i].playerPoints;
		if (player[i].playerPoints > max)
		{
			max = player[i].playerPoints;
			index = i;
		}

	}
	cout << endl;
	cout << "Total points scored by the team: " << sum << endl;;
	cout << "Player who scored the most points: " << endl;
	cout << endl;
	cout << "Player Number: " << player[index].playerNum<<endl;
	cout << "Player Name: " << player[index].playerName<<endl;
	cout << "Player Points: " << player[index].playerPoints;
}