#include<iostream>
#include<ctime>
#include<string>
using namespace std;

/*int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c;
	a = 10;
	b = 8;
	c = 3;
	cout << "�����= " << a + b + c << endl;
	cout << "������������= " << a * b * c << endl;
	cout << "�������= " << (a + b + c) / 3 << endl;


}*/
/*int main()
{
	setlocale(LC_ALL, "rus");

	int a, b, c;

	cout << "������� ��� �����: " << endl;
	cin >> a >> b >> c;
	cout << "����� ���� �����= " <<a+b+c<< endl;
	cout << "������������ ���� �����= " <<a*b*c<< endl;
	cout << "������� �������������� ���� �����= " <<(a+b+c)/3<< endl;

}
int main()
{
	setlocale(LC_ALL, "rus");
	float a, b, c;
	float sum;
	float proiz;
	float arifmet;
	cout << "������� �����: " << endl;
	cin >> a >> b >> c;


	sum = a + b + c;
	proiz = a * b * c;
	arifmet = (a + b + c) / 3;

	cout << "����� ���� ����� �����= " << sum << endl;
	cout << "������������ ���� ����� �����= " << proiz << endl;
	cout << "�������������� ���� ����� �����= " << arifmet << endl;


}*/
/*int main() //�������� ���������, ����������� �����, ��������� � ���������� �� ��������.
{
	setlocale(LC_ALL, "rus");
	int a;
	cout << "������� �����" << endl;
	cin >> a;
	if (a % 2 == 0)
		cout << "����� ������" << endl;
	else
		cout << "����� �� ������" << endl;

	int var;
	cout << "������� ����� ��� �������� �� ��������: ";
	cin >> var;
	if (var % 2 == 0)
		cout << "�����: " << var << " ������";
	else
		cout << "�����: " << var << " ��������";
}*/
/*int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, selection;
	cout << "Numbers: " << endl;
	cin >> a >> b;

	cout << "Yor choise? " << endl <<
		"1. slojil! " << endl <<
		"2. ubavil! " << endl <<
		"3. umnojil! " << endl <<
		"4. razdelil! " << endl <<
		"5. mod! " << endl;
	cin >> selection;
	switch (selection)
	{
	default:
		cout << "ti durak? eto prosto calculator!" << endl;
		break;
	case 1:
		cout << "Rezultat slojeniya: " << a + b << endl;
		break;
	case 2:
		cout << "Rezultat vichita: " << a - b << endl;
		break;
	case 4:
		cout << "Rezultat deleniya: " << (float)a / b << endl;
		break;
	case 3:
		cout << "Rezultat umnojeniya: " << a * b << endl;
		break;
	case 5:
		cout << "Rezultat moda: " << a % b << endl;
		break;
	}
}*/
/*int main() { //�������� �������
//1. ����������� ���������, ������� ������� �� ����� ����� �� ��������.
//����� ��������, ����� ������������ ������, � ����� ����� ����� - ������������, ��� �������������� - ��������� ������������.
	setlocale(LC_ALL, "rus");
	char symbol;
	int index = 0;
	int dlina;
	int type;
	cout << "������� ������ �����: ";
	cin >> dlina;
	cout << "������� ������� �����: ";
	cin >> symbol;
	cout << "������� ��� �����: " << endl
		<< "1. ������������ " << endl
		<< "2. �������������� " << endl;
	cin >> typeline;

	if (typeline!=1 && typeline!=2)
	{
		cout << "�� ����� �� ������, �����������! ";
		return 0;
	}


	while (index<dlina)
	{
		if (type==1)
		{
			cout << symbol << endl;
		}
		if (type==2)
		{
			cout << symbol;
		}
		index++;
	}
	cout << endl;


}*/
/*int main()
//2. �������� ���������, ������� ������� ����� ���� ����� �������� ����� � ���������, ��������� ������������.
{
	setlocale(LC_ALL, "rus");

	int memory=0;
	int begin;
	int end;
	cout << "������� ������ ���������: ";
	cin >> begin;
	cout << "������� ����� ���������: ";
	cin >> end;

	do
	{
		if (begin%2!=0)
		{
			memory += begin;
		}
		begin++;
	} while (begin<end);
	cout << "����� �������� �����: " << memory;

}*/
/*int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, button;
	cout << "������ �����: ";
	cin >> a;
	cout << "������ �����: ";
	cin >> b;
	cout << "���. ��������: " << endl
		<< "1. �������" << endl
		<< "2. �������" << endl
		<< "3. ��������" << endl
		<< "4. ���������" << endl;
	cin >> button;
	switch (button)
	{
	case 1:
		cout << "�����: " << a + b;
		break;
	case 2:
		cout << "�������: " << a - b;
		break;
	case 3:
		cout << "�� ����������: " << a * b;
		break;
	case 4:
		cout << "�� ��������: " << (float)a / b;
		break;
	}

}*/
/*int main() //1. ����������� ���������, ������� ������� �� ����� ����� �� ��������.
		   //2. ����� ��������, ����� ������������ ������, � ����� ����� ����� - ������������, ��� �������������� - ��������� ������������.
{
	setlocale(LC_ALL, "rus");
	char line;
	int lineDlina;
	int lineUse;
	int index = 0;
	cout << "�������� ��� �����: ";
	cin >> line;
	cout << "�������� ����� �����: ";
	cin >> lineDlina;
	cout << "�������� ����������� �����" << endl
		<< "1. ������������" << endl
		<< "2. ��������������" << endl
		<< "\t:";
	cin >> lineUse;
	switch (lineUse)
	{
	default:
		cout << "�� �����? �����������!";
		break;
	case 1:
		while (index<lineDlina)
		{
			cout << line << endl;
			index++;
			break;
		}
	case 2:
		while (index < lineDlina)
		{
			cout << line;
			index++;
			break;
		}



	}
	cout << endl << endl;

}*/
/*int main() //��������� ������ ���������� �������. ��������� ���������� ��������� �����. rand. srand �� #7
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	const int SIZE = 10;
	int arr[SIZE];

	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		arr[i] = rand() % 20;

		for (int j = 0; j < i; j++)
		{
			if (arr[j]==arr[i])
			{
				i--;
				break;
			}
		}

	}


	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i]<<endl;
	}

}*/
/*int main() //��������� ������ ���������� �������. ��������� ���������� ��������� �����. rand. srand �� #7
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	const int SIZE = 10; // ������� ��������� ������� SIZE ��������� �� �������� 10
	int arr[SIZE];		 // ������� ������ ��������� SIZE, ������ ������� ��������� ������� ����� � ��������� SIZE
	bool ���������������;// �������� ���������� ���� bool, ������� � ��� ���� ��� �����, �� �������� � ���������� ���� �� ����� �������������� �����
						 // � �������

	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); ) // ������� ���� ��� � ���������� i=0, ��� ������� ����� ����������� ���� i ������ ��� ����������
														 // ��������� � �������, � ������ ��������� ����� ���� �� ����� ��������� ���, ���� �������
														 // ������� � ����������� ���������� ������� �� ����� ���������
	{
		��������������� = false; // ����� � ����� �������� ���������� bool, � ���������� � ����, �� �� �� ����� ��� ���� ������� ����� ����� � �������.
		int ������������������� = rand() % 20; // �������� ����� ���������� int ������� ����� ��������� ����� � ��������� ������� �� ��������� �����
											   // ��������� ����� � ������� �� ������ �� 20, ��� ��������� ��������� ����� �� 0 �� 19

		for (int j = 0; j < i; j++) // ������� ������� ��� ��� ���������  ����� ��������� ����� ��������� �����, ��������� ���������� int ������� j
									// ��������� �� 0 ��������, � �������� ���������� ����� j ����� ������ i, ����� �� ������ ������ ������
									// ��������� ��������� ���������� j ����� ���� �� ��� ������ � ����������� ��������� �������
		{
			if (arr[j]==�������������������) // ������� ������� if (����) c ��� �������� ���� �� ����� ��������� ����� � ����� �������, ���� ����� �����
											 // ���� �� �� ������ � ����, ���� ���� �� ���������� ����.
			{
				��������������� == true; // ���� �� ������� ����� � ���� � ����� ��������� ����� ��� ���� � �����, �� ���� bool ���������� �������
										 // �� ���������� ��������� ������ false(����), �������� �� true(������)
				break;                   // ���� ����� ����� ����� ��� ���� � �������, ������ ������ ���� ��������� �� ����, ���� ������.
			}
			if (!���������������) // ����� ������� ��� ���� �������� if(����) c ��������� �� ������ (true or false) ����� bool ���������� � �������� ��
								  // �������� false, ������ �� ������ � ���� ������ � ��� ������, ���� ������ ���������� ����� ���� � �������, � ����
								  // ����� ����� ������� ����, �� �� ������� �� ����� ��� ��������� � ������ � ������ �������� ������.
								  // ���������������!=true � !��������������� �������� ����������� �������������
			{
				arr[i] = �������������������; // ���������� �� ���� � �������, �������������� ���� �������� � ���������.
				i++;						  // ������ ��������� �� ��������� ����, ����� ��������� ����� ��������� �����
			}
		}
	}


}
int main() */
/*int main() //1.����������� ���������� �������� ������������� ����� � ������  2.����� ���������� ����� � ������� � ������� � �������
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	const int SIZE = 10;
	int arr[SIZE];
	bool �������;

	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); )
	{
		������� = false;
		int ����������� = rand() % 20;

		for (int j = 0; j < i; j++)
		{
			if (arr[j] == �����������)
			{
				������� = true;
				break;
			}
		}
			if (!�������)
			{
				arr[i] = �����������;
				i++;
			}

	}
		int minValue = arr[0]; // ������� ���������� ���, ��� �������� ������ ������������ �������� � �������, ���� ��������� �� �������� ��������
								// �������� � �������, ����� � ���� ��� �������� �� ���������.
		for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++) // ������� ���� ���, ���������� i ��������� �������� 1, ����� ����� � ����� ����������
															   // ������� ������� ������� � 1 ��������� �������.
		{
			if (arr[i]< minValue)	// ������� ����, ����� ��������� �� ����� �����, � ���� ����� �������� � ������� ����� ������ ��� �������� � ���
									// � ����� ����������, �� �����  ����������� ��� �������� � ���� ����������
			{
				minValue = arr[i]; // ���� ����� � ������� ������ ��� � ���������� minValue, �� �� ����� ������������� ��� ��������
			}
		}
		cout << "����������� �������� = " << minValue << endl; // �������� �� ����� � ������� ���������� �������� � �������
}*/
/*int main() //���� ������, ��� �� ����� �������.
{
	srand(time(NULL));
	const int ROW = 2;
	const int COL = 5;
	int arr[ROW][COL];
	bool check;

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL;)
		{
			check = false;
			int newRandomValue = rand() % 10;
			for (int k = 0; k < j; k++)
			{
				if (arr[i][k] == newRandomValue)
				{
					check = true;
					break;
				}
			}
			if (!check)
			{
				arr[i][j] = newRandomValue;
				j++;

			}
		}
	}
	for (int k = 0; k < ROW; k++)
	{
		for (int l = 0; l < COL; l++)
		{
			cout << arr[k][l] << "\t";
		}
		cout << endl;
	}
}*/
/*void hey(int* pa, int* pb) // �������� ������� �� ����� 49 ������� ���������� ��������
						   // �������� �������, �������� ������� �������� ���������� � ������� ����������.
{
	int temp = (*pa);
	(*pa) = (*pb);
	(*pb) = temp;


}
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int a, b;

	cout << "������� ����� ������: " << endl;
	cin >> a;
	cout << "������� ����� ������: " << endl;
	cin >> b;

	hey(&a, &b);
	cout << "hey ������� ��������� " << endl
		<< "a= " << a << endl
		<< "b= " << b << endl;



}*/
/*template<typename T, typename T2>
void Swap(T &a, T2 &b) // �� �� ����� 52. 1) �������� ��������� ������� ������� ������ ������� �������� 2-� ���������� � ������� ������.
{
	T temp = a;
	a = b;
	b = temp;
}
int main()
{
	setlocale(LC_ALL, "rus");

	string a, b;
	cout << "������� ������ �����: ";
	cin >> a;
	cout << "������� ������ ����� ";
	cin >> b;
	Swap(a, b);
	cout << "����� ���������� �������! " << endl
		<< "a= " << a << endl
		<< "b= " << b << endl;


}*/
/*void FillArray(int* const arr, int const size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}

}

void ShowArray(const int* const arr, int const size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void push_back(int*& arr, int& size, int value)
{
	int* newArray = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = arr[i];
	}
	newArray[size] = value;
	size++;
	delete[]arr;
	arr = newArray;

}
void pop_back(int*& arr, int& size)
{

	int* newArray = new int[size]; //����� ������ ��� �������� ������ ������
	for (int i = 0; i < size; i++)
	{
		newArray[i] = arr[i];

	}

	size--; //��������� ���������� ���� �� 1, ���� 6 ����� 5
	delete[]arr;
	arr = newArray;
}

int main()
{
	int size = 5;
	int* arr = new int[size];
	FillArray(arr, size);
	ShowArray(arr, size);
	push_back(arr, size, 666);
	ShowArray(arr, size);
	pop_back(arr, size);
	ShowArray(arr, size);



	delete[]arr;

}*/
/*int strlen2(const char* str) // ������� ���������� �������� Simplecode
{
	int counter = 0;
	while (str[counter])
	{
		counter++;
	}

	return counter;
}
int strlen3(const char* str) // ��� ������� ����� ���
{
	int index = 0;
	for (int i = 0; ; i++) // �������, 2 ������� �� �����������, ��� ��� ������ � ������ � ������� ��� ���� �������, ������� � ����� ��������� ��������
	{
		if (str[i]!='\0') // ������ ����� ���� �� ����� ��������� �� ������� � ������ �������, ���� ����� ��������, ���� ���� �� ��������� �� ������ ���� ����������
		{
			index++; // ����� ����������� ���� ���������� �� 1 ������ ���� �����
		}
		else // ��� ������ ������� ��� �� ����������, ������ �� ��������� �� ���� ����������, �� �� ������ � ������� ���� �����, � ����� �������� � ���� ����, � ��� � ��� ����� � *���
		{
			break; // ��� ���� ������� ��� �� ����� ���
		}
	}
	cout << endl;
	return index;
}
int main() //�������� ������� �������� ���� ���������� ������� strlen
{
	const char* str = "���������������      ";
	cout << strlen(str)<<endl;
	cout << strlen2(str);
	cout << strlen3(str);
}*/
/*//1. �������� ���������� � ������� ������� ����� ����� ��������� ����� ����� ������� ���������� �������. �������� ������ ��������, ���� � ������ ������.
int main()
{
	setlocale(LC_ALL, "rus");
	int chocolate, priceofchokolate, coffe, priceofcoffe, milk, priceofmilk;
	cout << "������� ���� ��������: ";
	cin >> chocolate;
	cout << "���������� ��������: ";
	cin >> priceofchokolate;
	cout << "������� ���� ����: ";
	cin >> coffe;
	cout << "���������� ����: ";
	cin >> priceofcoffe;
	cout << "������� ���� ������: ";
	cin >> milk;
	cout << "���������� ������ ";
	cin >> priceofmilk;
	cout << "����� ��������: " << chocolate * priceofchokolate << endl
		<< "����� ����: " << coffe * priceofcoffe << endl
		<< "����� ������: " << milk * priceofmilk << endl
		<< "����� ����� �� ���� �������: "
		<< (chocolate * priceofchokolate) + (coffe * priceofcoffe) + (milk * priceofmilk);


}*/
/*//2. �������� ��� ���������� ���� int � ��������� ������ �������� ��������, ������ ���������� ����� ������ ���������� ����������� �� 3, � ������ ���������� ����� ����� ������ ����.
int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c;
	a = 5;
	b = a + 3;
	c = a + b;
	cout << "���e������ � = " << a << endl
		<< "���������� b = " << b << endl
		<< "���������� � = " << c << endl;
}*/
/*//1. �������� 4 ���������� � ������� ������ ������ � ���������� ������������ ������ � ��� ��������. ����� �����, ���������� �� �� ������.
int main()
{
	int a;
	double b;
	float c;
	bool d;

	cout << "Vvedite int a: ";
	cin >> a;
	cout << "Vvedite double b: ";
	cin >> b;
	cout << "Vvedite float c: ";
	cin >> c;
	cout << "Vvedite bool d: ";
	cin >> d;
	cout << "a= " << a << endl
		<< "b= " << b << endl
		<< "c= " << c << endl
		<< "d=<<" << d << endl;
}*/
/*//2. �������� 5 ���������� ���� char, ����������  ������������ ������ ����� �� ���� ���� � �������� ��� ������� (�����) �� �����.
int main()
{
	setlocale(LC_ALL, "rus");

	char a, b, c, d, f;
	cout << "������� ����� �� ���� ���� :"<<endl;
	cin >> a >> b >> c >> d >> f;
	cout << "�� ��������: "
		<< a << b << c << d << f;
}*/
/*//3. ������� �� ����� ����� � ����� ����
int main()
{
	setlocale(LC_ALL, "rus");
	cout << "� ������ � ��������� �� ������� �� �������� ��," << endl
		<< "��� �������� ���, � ������ �������� ��, ��� ������� �?" << endl
		<< "� ��� �������� ���� � ���� �� �������.� �� ������:" << endl
		<< "<<������ ���� �� �� �����>>. ��� �������:<<�����?" << endl
		<< "� ������ �����������>>.� ������� ��������." << endl
		<< "//�.�. '� ��� ������� �������'//" << endl << endl;

}*/
/*//4. ������������ ������ ������ 2 �����. ��� ���� �������� �� ����� ������������ ���� �����, ����� � �������.  �������� ��� �� ������� �������������� ���� ��������� �����.
int main()
{
	setlocale(LC_ALL, "rus");

	int a, b;
	cout << "������� ��� ����� ����� enter: " << endl;
	cin >> a >> b;
	cout << "������������ ���� ����� :" << a * b << endl
		<< "����� ��� �����: " << a + b << endl
		<< "�������: " << a - b << endl
		<< "�������: " << (float)a / b << endl
		<< "������: " << a % b << endl;


}*/
/*//1. ��������������� ������:  ���� �������������� ����� (� ������� 5678), ������� �� �����  � �������� ������� ����� �� ������� ��� ����� �������.
//�� ���� �� ������ ������� �� ������ 8765. ���������: ����� ����� �� ����� ��������� �����, ���� ���������  ������� �� ������ �� 10.
int main()
{
	setlocale(LC_ALL, "rus");

	int mainNumber = 5678;

	cout << "���� ����� �����: " << mainNumber << endl;
	cout << "�����  ���������: ";
	cout << mainNumber % 10;
	mainNumber /= 10;
	cout << mainNumber % 10;
	mainNumber /= 10;
	cout << mainNumber % 10;
	mainNumber /= 10;
	cout << mainNumber % 10;
	mainNumber /= 10;

	cout << endl << endl;


}*/
/*//���������� �������� ������ � �������� �� ����� ������� � �������� � �����,  �� ���� ���� ��������, � ����� ����� � ������� � ����� �����.
//������ ����� ����� � ������ ���. ���������� ������ � 5% �������.  �������  �������  ���������  �  ����� �
//������������� * (���������������� / 100)  / ��������� * �����������.
//�������� � �����: �������� ������ �� ������� � ���������� � ���������� profit
//�������� �� ���� ���� : �������� % �� 1 ����� �� ���� ���� �������� � ���������� � profit
//sumDeposit + profit
int main()
{
	setlocale(LC_ALL, "rus");
	float a, b;

	cout << "������� ����� �������� $: ";
	cin >> a;
	cout << "������� ���������� �������: ";
	cin >> b;
	float procent = 5;
	const float daysinyear = 365;
	const float daysinmount = 30;
	float profit;
	profit = a * (procent / 100) / daysinyear * daysinmount;
	cout << "�������� � �����: "<<a<<"*"<<procent/100<<"/"<<daysinyear<<daysinmount<<"=" << profit << endl;
	profit *= b;
	cout << "�������� �� ���� ���� " << profit << endl;
	cout << "����� ����� ������� � ����� ����� : " << a + profit << endl;




}*/
/*int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int SIZE;
	cout << "������� ������: ";
	cin >> SIZE;
	int* array = new int[SIZE];
	cout << "array = ";
	for (int i = 0; i < SIZE; i++)
	{
		array[i] = (rand() % 20+1);
		cout << array[i] << "    ";
	}
	delete[] array;

	cout << endl;

	system("pause");
	return 0;
}*/
/*int main()
{ // ������ �� ����������� ����� 2� ���������� ����� �������
	int arr[5]{ 5, 8, 12, 19, 22 }; // �������� ������ �� 5 ����� ����������� �������

	int temp; // ��������� ����������
	int m0 = arr[0];// ���������� m0 ��������� �������� 0 ������, ��� 5. ����� �0=5
	int m1 = arr[1]; // ���� ����� ����� �1=8
	if (m0 > m1)
	{
		temp = m0; //� ����=5
		m0 = m1; // � �0 ��������� �1 , 5=8, �0=8
		m1 = temp; //�1=5
	}
	for (int i = 2; i < 5; i++) // ���� ���, ����� ���� � 3 �������, � 3� �����, ��� ��� �������� 1 � 2 ������ �� ��� ������ � �1 �0
	{
		if (arr[i] < m0) // ���� ������� �������� � ������� ������ 5
		{
			m1 = m0; m0 = arr[i]; // �� ��������� ��� �������� � �0
		}
		else if (arr[i] < m1) // ���� ��� �������� ������ 8
		{
			m1 = arr[i]; // �� ��������� ��� �� ������ ������
		}
	}
	cout << m1 + m0 << endl; // ������ ��� ���� ����� ������ ����������, ����� ��� ���

	
	
}*/