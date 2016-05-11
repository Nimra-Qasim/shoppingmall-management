#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<windows.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
using namespace std;

struct Product
	{
		char code[7];
		char name[20];
		char description[50];
		float price;
	};	
	

 char loginuser[20] , loginpassword[20], username[20] , password[20];

void login()
{
	

	ifstream fin;
	
	
	fin.open("user.txt");
	
	if (!fin)
	{
		cout << "error file not attached" <<endl;
	}
	else
	{
		
	    fin.getline(username,20);
	    while (strcmp(loginuser, username) !=0)
        {
            cout<<" \t\t\tUsername: ";

            cin.getline(loginuser, 20); 
			if (strcmp(loginuser, username) ==0)
			{
				true;
					//cout << "your username is correct" <<endl;
				break;
			}	

            else
			{
				false;
               // cout<<"\nInvalid Username.\n";
			}

        }
	}
	fin.close();


       fin.open("password.txt");
	   if (!fin)
	   {
		   cout << "error in file attachment";
	   }
	   else
	   {
	    
        fin.getline(password, 20);

        while (strcmp(loginpassword, password) !=0)

        {

            cout<<"\n \t\t\tPassword: ";
			

            cin.getline(loginpassword, 20);

            if (strcmp(loginpassword, password) ==0)
			{
				cout << "\n\n\t\t\t W";
					Sleep(200);
				cout << "A";
				Sleep(200);
				cout << "I";
				Sleep(200);
				cout << "T";
				Sleep(300);
				cout <<"..";
				Sleep(200);
				cout << "..";
				Sleep(200);
				cout << ".!";
				Sleep(200);
				cout << "!!" <<endl;
				break;
			}

            else
			{

                cout<<"\nInvalid username/Password\n";
			}

        }
	}
	fin.close();
	

	    
	 Sleep(1000);
	 system("cls");
    }
	

void welcome()
{const int SIZE=100;
    int i=0;
	cout <<endl <<endl<<endl<<endl;
	system("color 0D");
	cout << "\t\t*~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout <<"~~";
	Sleep(SIZE);
	cout << "~*"<<endl<<endl<<endl<<endl;
	Sleep(1000);
	cout  << " \t\t\tW";
	Sleep(200);
	cout << "E";
	Sleep(200);
	cout << "L";
	Sleep(200);
	cout << "C";
	Sleep(200);
	cout << "O";
	Sleep(200);
	cout << "M";
	Sleep(200);
	cout << "E";
	Sleep(200);
	cout << "  T";
	Sleep(200);
	cout << "O";
	Sleep(200);
	cout << "  S";
	Sleep(200);
	cout << "H";
	Sleep(200);
	cout << "O";
	Sleep(200);
	cout << "P";
	Sleep(200);
	cout << "P";
	Sleep(200);
	cout << "I";
	Sleep(200);
	cout << "N";
	Sleep(200);
	cout << "G";
	Sleep(200);
	cout << "  M";
	Sleep(200);
	cout << "A";
	Sleep(200);
	cout <<"L";
	Sleep(200);
	cout << "L" << endl<<endl<<endl<<endl;
	Sleep(1000);
	cout << "\t\t*~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout << "~~";
	Sleep(SIZE);
	cout <<"~~";
	Sleep(SIZE);
	cout << "~*"<<endl;
	Sleep(1500);

	system("cls");
}


void show_All_Products()
{
	
	const int S=15;
	const int SIZE=500;
	fstream fio;
	
	fio.open("products.txt",ios::out|ios::in);
	cout <<" \t\t **********************************************\n\n";
	cout << "\n\n\t\t     List of Products of Shopping Mall\n\n";
	cout << "\n\n\t\t ******************************************\n\n";

	cout << left << setw(S) << "NAME" << left<< setw(S) ;
	Sleep(10);
	cout << "CODE" << setw(S);
	Sleep(SIZE);
	cout << "PRICE\t" << left << setw(S);
	Sleep (SIZE);
	cout << "PRODUCTION DATE" << left << endl;
	Sleep(SIZE);
	cout <<left << setw(S) << "icecream" <<left << setw(S);
	Sleep(SIZE);
	cout << "256" <<left << setw(S);
	Sleep(SIZE);
	cout<< "$10" <<left << setw(S);
	Sleep(SIZE);
	cout << "\t 15-06-2013" <<endl;
	Sleep(SIZE);
	cout << left << setw(S) << "book" <<left <<setw(S);
	Sleep(SIZE);
	cout << "36789" <<left << left << setw(S) ;
	Sleep(SIZE);
	cout << "$150" << left << setw(S);
	Sleep(SIZE);
	cout << "\t 09-02-2009" <<endl;
	Sleep(SIZE);
	cout << left << setw(S) << "panadol" <<left << setw(S);
	Sleep(SIZE);
	cout << "68910" << left << setw(S);
	Sleep(SIZE);
	cout << "$20" <<left << setw(S);
	Sleep(SIZE);
	cout << "\t 10-06-2013" << endl;
	Sleep(SIZE);
	cout << left << setw(S) << "shirt" <<left << setw(S);
	Sleep(SIZE);
	cout << "45678" <<left <<setw(S);
	Sleep(SIZE);
	cout << "$300" <<left <<setw(S);
	Sleep(SIZE);
	cout << "\t 04-03-2013" <<endl;
	Sleep(SIZE);
	cout << left << setw(S) << "doll" <<setw(S);
	Sleep(SIZE);
	cout <<"6578" <<left << setw(S) ;
	Sleep(SIZE);
	cout << "$100" <<left <<setw(S);
	Sleep(SIZE);
	cout << "\t 07-05-2012" <<endl;

}
void add_user()
{
	char name[20];
	int password;

	fstream fout;
	fout.open("user.txt" , ios::app);

	cout << "Enter the name you want to add:";
	cin >> name;
	fout << "\n" << name;
	cout << "\nEnter your password:";
	cin >> password;
	fout << "\n" << password;
	fout.close();

}
void add_product()
{
	char name[20];
	int code , price , production_date;
	int S=10;
	fstream fout;
	fout.open("product.txt",ios::app);
	cout << "What you want to add in product...??\n";
	cin >> name;
	cout << "write its code:\n";
	cin >> code;
	cout << "write its price in $ :\n";
	cin >> price;
	cout << "what is its production date?\n";
	cin >> production_date;
	fout <<"\n" <<  left << setw(S)<< name<< left << setw(S) << code <<left << setw(S) <<"$" << price << left << setw(S) << left << setw(S)<<  production_date;
}

void UpdateProduct(char username[])
{
	
	Product *ptr;
	int entries=0;
	char junk[100];
	char code[7];
	char line=10;
	fstream input;
	input.open("products.txt");
	input.getline(junk,100,'\n');
	while(input.eof()==0)
	{
		input.getline(junk,100,'\n');
		entries++;
	}
	ptr=new Product[entries+1];
	input.close();
	input.open("products.txt");

	for(int i=0;i<=entries;i++)
	{
		input.getline(ptr[i].code,7,',');
		input.getline(ptr[i].name,20,',');
		input.getline(ptr[i].description,50,',');
		input>>ptr[i].price;
		input.ignore(100,line);
	}
	input.close();
	cout<<"Enter The Code of The Product you Want to Update : ";
	cin>>code;
	for(int i=0;i<=entries;i++)
	{
		if(strcmp(ptr[i].code,code)==0)
		{
			Product temp;
			cout<<"New Code : ";
			cin>>temp.code;
			strcpy(ptr[i].code,temp.code);
			cout<<"New Name : ";
			cin>>temp.name;
			strcpy(ptr[i].name,temp.name);
			cout<<"New Date of production : ";
			cin>>temp.description;
			strcpy(ptr[i].description,temp.description);
			cout<<"New Price : ";
			cin>>temp.price;
			ptr[i].price=temp.price;
			break;
		}
	}	
	fstream output;
	output.open("products.txt");
	for(int i=0;i<=entries;i++)
	{

		output<<ptr[i].code<<',';
		output<<ptr[i].name<<',';
		output<<ptr[i].description<<',';
		output<<ptr[i].price;
		output<<endl;
	}

}

void user_pannal()
{
	int n;
	cout << "What do you want to do?\n\n";
	cout << "1. show products\n";
	cout << "2.add product\n";
	cin >> n;
	do
	{

	switch(n)
	{
	case 1:
		Sleep(1000);
		system("cls");
		show_All_Products();
		Sleep(2000);
		system("cls");
		break;
	case 2:
		Sleep(1000);
		system("cls");
		add_product();
		Sleep(2000);
		system("cls");
		break;
	
	default:
		cout << "Inavlid operator" << endl;
	}
	}while(n!=1);
}

void admin_pannal()
{
	system("cls");
	welcome();
	Sleep(2000);
	system("cls");
	int a;
	cout << "\t\tWhat do you want do do ?\n\n";
	cout << "1.Show All Products\n";
	cout << "2.Add Product\n";
	cout << "3.Add user \n";
	cout << "4.update product\n";
	cout << "Input your choice\n";
	cin >> a;
	do
	{

	switch(a)
	{
	case 1:
		show_All_Products();
		Sleep(2000);
	system("cls");
		break;
	case 2:
		add_product();
		Sleep(2000);
	system("cls");
		break;
	case 3:
		add_user();
		Sleep(2000);
	system("cls");
		break;
	case 4:
		system("cls");
		UpdateProduct(username);
		break;
	default:
		cout << "Inavlid operator" << endl;
	}
	}while(a!=1);
	
	

}

void add_remove_userUpdates()
{
	system("color 0E");
	int a;
	cout << "\t\tWhat do you want do do ?\n";
	cout << "1.Add user\n";
	cout << "2.Remove user\n";
	cout << "3. user updates\n";
	cout << "Input your choice\n";
	cin >> a;
	do
	{

	switch(a)
	{
	case 1:
		add_user();
		break;
	
	default:
		cout << "Inavlid operator" << endl;
	}
	}while(a!=1);
}
int main()
{
	
	 login();
	 welcome();
	
  int i;
        cout<<"\n\t\t\tWhat do you want to do?\n"<<endl;
       
		cout<<"\n1: Update User.";
		cout<<"\n2: See User Panel.";
		cout<<"\n3: See Admin Panel.";
        cout<<"\n4: Update a Product.";
        cout<<"\n5: Update an order";
		cout<<"\n6: Check Total Sale.";
		cout<<"\n7: See all the products.";
		cout<<"\n8: See specific day sale.";
		cout<<"\n9: See Profie/Loss.";
        cout<<"\n10: Exit ."<<endl;
        cout<<"\nInput your choice:";
        cin>>i;
		switch(i)
			{case 1:
				system("cls");
				welcome();
				system("cls");
				add_remove_userUpdates();
			case 2:
				system("cls");
				welcome();
				system("cls");
				user_pannal();
				Sleep(1000);
					system("cls");
			case 3:
				system("cls");
				welcome();
				system("cls");
				admin_pannal();
					Sleep(1000);
					system("cls");
			case 7:
				Sleep(1000);
				system("cls");
				show_All_Products();
				
		}
		return 0;
    
}
 