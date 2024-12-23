#include <iostream>
using namespace std;
int main()
{
	system("cls");
	int rows;
	int cols;
	cout << "\033[32mEnter number of Rows: \033[0m";
	cin >> rows;
	cout << "\033[32mEnter number of Columns: \033[0m";
	cin >> cols;
	int arr[rows][cols];
	cout << "\033[34mEnter Elements of a 2D array...\033[0m" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << "\033[31mEnter element at position (\033[0m" << i + 1 << "," << j + 1 << "): ";
			cin >> arr[i][j];
		}
	}
	while(true){
	cout<<"Press 'y' to print 2D array and 'n' to Exit...";
	char num;
	cin>>num;
	if(num == 'y')
	{
		cout<<"2D Array comes out to be: "<<endl;
		for(int i=0; i<rows; i++)
		{
			for(int j=0; j<cols; j++)
			{
				cout<<arr[i][j]<<endl;
			}
		}
	}
	else
	{
		break;
	}
	}
	return 0;
}