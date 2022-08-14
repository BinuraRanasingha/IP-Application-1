#include <iostream>
using namespace std;
int main()
{

	int account_no[5];
	char name[5][20];
	char trans_type;
	float amount[5];
	int i;

	for (i = 0; i < 5; i++)

	{

		cout<<"Enter the account number:";

		cin>>account_no[i];

	}



	for (i = 0; i < 5; i++)

	{

		cout<<"Enter the name:";

		cin>>name + i>>name + i>>name + i>>name + i>>name + i;

	}



	for(i=0;i<5;i++)

	{

		cout<<"Enter the account type:";

		cin>>trans_type;

		/*printf("Enter the account type:");

		scanf("%c", &account_type);

		printf("Enter the account type:");

		scanf("%c", &account_type);

		printf("Enter the account type:");

		scanf("%c", &account_type);

		printf("Enter the account type:");

		scanf("%c", &account_type);*/



	}



	for (i = 0; i < 5; i++)

	{

		cout<<"Enter the amount deposited or withdrawn:";

		cin>>amount[i];

	}



	/*for(i=0;i<5;i++)

	{

		printf("%s",name+i,name+i,name+i,name+i,name+i);

	}*/

	return 0;

}