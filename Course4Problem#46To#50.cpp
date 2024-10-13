#include <iostream>

using namespace std;

// #46
void PrintLettersAToZ()
{
	for (int i = 65; i <= 90; i++)
	{
		cout << char(i) << "\n";
	}
}

// #47

float ReadPositiveNumber(string Meassage)
{

	float Num = 0;

	do
	{
		cout << Meassage << "\n";
		cin >> Num;

	} while (Num < 0);

	return Num;
}

float TotalMonth(float TotalLoanAmount , float MonthlyInstallment)
{

	return TotalLoanAmount / MonthlyInstallment;

}

void PrintMonthsToPay()
{
	float TotalLoanAmount = ReadPositiveNumber("Enter total loan amount");
	float MonthlyInstalment = ReadPositiveNumber("How much do you want to pay as a monthly installment ?");

	cout << "You will pay for " << TotalMonth(TotalLoanAmount, MonthlyInstalment) << " Months" << "\n";
}

// #48
float GetMonthlyInstallment(float TotalLoanAmount , float HowManyMonths)
{
	return TotalLoanAmount / HowManyMonths;
}

void PrintMonthlyInstallment()
{
	float TotalLoanAmount = ReadPositiveNumber("How much the loan amount to loan ?");
	float HowManyMonths = ReadPositiveNumber("How many months do you want to pay for ?");

	cout << "You will pay " << GetMonthlyInstallment(TotalLoanAmount , HowManyMonths) << " Monthly as an installment";
}

// #49
string ReadPinCode()
{
	string Pin = "";
	cout << "Enter Pin code\n";
	cin >> Pin;

	return Pin;
}

bool Login()
{
	string Pin;

	do
	{
		 Pin = ReadPinCode();

		if (Pin == "1234")
		{
			return 1;
		}

		else
		{
			cout << "Wrong pin\n";
			system("color 4F");
		}


	} while (Pin != "1234");

	return 0;
}

void PrintAccountAmount()
{
	if (Login())
	{
		system("color 2F");
		cout << "Your palance is " << 7500 << "\n";
	}

}

// #50
bool Login3Tries()
{

	string pin;
	int counter = 3;

	do
	{
		
		counter--;

		pin = ReadPinCode();

		if (pin == "1234")
		{
			return 1;
		}

		else
		{
			cout << "Wrong pin , You still have  " << counter << "  Tries\n";
			system("color 4F");
		}


	} while (counter >=1 && pin != "1234");

	return 0;

}

void PrintAccountAmount3Tries()
{

	if (Login3Tries())
	{
		system("color 2F");
		cout << "Your palance is " << 7500 << "\n";
	}
	else
	{
		cout << "Your card is rejected, please call the bank to return your card\n";
	}
}

int main()
{
	// #46
	//PrintLettersAToZ();

	// #47
	//PrintMonthsToPay();

	// #48
	//PrintMonthlyInstallment();

	// #49
	//PrintAccountAmount();

	// #50
	//PrintAccountAmount3Tries();

	return 0;
}


