#include<iostream> // ���������� �����
#include<ctime> // ���������� ������� � 1940 ���� ��� ������� srand()
#include<string> // ���������� �������
#include<fstream> // ���������� ������ � ������ ifstream ofstrem fstream
#include<Windows.h> // ���������� �������� �������
#include <memory> // ���������� ����� ���������� auto_ptr, unique_ptr, shared_ptr
#include<vector>//���������� stl �������
#include <list> //���������� stl �����
#include <forward_list> //���������� forward_list
#include<array> // ���������� array
#include<deque> // ���������� deque
#include<set> // ���������� set and multiset
#include<map> // ���������� map and multimap
#include<thread> // ���������� ������������� ��� ������ � ��������, ������������� ���������� ���������� chrono
#include<chrono> // ���������� ������������� ��� ������ �� ��������, ���������� ��������, ���� ����� �������� � chrono �� ��� �������
#include<stack> // ���������� stack
#include<queue> // ��������� �������.
#include "Sum.h" // ����� "" ���������� ��� ������
#include"MyClass.h"// ����������� ������ ������
#include <functional> // ��������� functional
#include<algorithm> // ��� ������ � ����������� STL ���������� ��� ����������
#include<numeric> // ���������� ��� ������ � ���������� accumulate
#include <mutex> //���������� ��� ������ � mutex ��� ������������� ������ �������
#include "SimpleTimer.h"

using namespace std; // ������������ ���� std:: 


/*int main()
{
	setlocale(LC_ALL, "ru");
	cout << "������!"<<endl;
	int age, a, b;
	age = 12;
	a = 1;
	b = 0;
	cout << age << a << b << endl;
	cout << age << " " << a << b << endl;
	cout << age << " " << a << " " << b <<endl;
	cout << age << " " << a << " " << b << endl;

	double Age=1.12, A=2.24, B=3.36;
	cout << Age << A << B << endl;
	cout << Age << ' ' << A << ' ' << B << endl;

	char man, woman,thing ;
	man = 'a';
	woman = 'b';
	thing = 'c';
	cout << man << " " << woman << " " << thing << endl;

	bool s = true, w = false;
	cout << s <<" "<< w << endl;

	int t = 5, r = 3, x;
	x = t + r;
	cout << x << endl;



}*/
/*int main()
{
	int a = 6,b; // �������� ���������� a,b �=6;
	b = ++a*a++ ; // � ������ ����������� ���������� ���������, ������ b = 7*7 b= 49. ���������� � ����������� �� ������� � ����� 7 � �� 6,
	// ����� ��� ��� � ����� 7 ��� ���������� ���� �� ���� 7*7, ��������� ��������� ���������� ������������ � ����������� �������, � �� ����� ������
	cout << b << endl;

}*/
/*int main()
{
	int a = 3, b = 3;
	cout << !(a == b) << endl; // �������� ���������
	cout << ((a == b) && (5 < 4)) << "" << endl; // ������� �������� �� ����� false
	cout << ((a == b) || (1 > 0)) << endl; // ���� ��� ��������� ��, �� ���� ���� ���� ��������� �����, �� ���������� true

}*/
/*int main()
{
	setlocale(LC_ALL, "rus");
	bool isRain = true;
/*	if (isRain)
	{
		cout << "���� �����, ��� ����� ����! " << endl;
	}
	else
	{
		cout << "����� ���, ���� �� �����! " << endl;
	}
	bool israin = false;
	if (israin) {
		cout << "���� �����, ��� ����� ����" << endl;
	}
	else {
		cout << "����� ���, ���t �� �����! " << endl;
	}
	int a;
	cout << "������� �����: " << endl;
	cin >> a;

	if (a > 5)
		cout << "���� ����� ������ ����! " << endl;
	else if (a == 5)
		cout << "���� ����� ����� ����! " << endl;
	else
		cout << "���� ����� ������ ����! " << endl;


}*/
/*int main() //Switch
{
	setlocale(LC_ALL, "rus");
	int a;
	cout << "1 or 2?" << endl;
	cin >> a;
	switch (a)
	{
	default:
		cout << "You are idiot :D" << endl;
		break;
	case 1:
		cout << "Number 1";
		break;
	case 2:
		cout << "Number 2";
		break;
	}


}*/
/*int main() //����
{
	setlocale(LC_ALL, "rus");

	int b = 1;

	while (b < 20)
	{
	cout << "���������� b = " << b << endl;
	b++;
	}


}*/
/*int main() //�����. ���� do while. ��� ���. ��� ������
{
	setlocale(LC_ALL, "rus");
	int a = 11;
	do
	{
		cout << "a = " << a << endl;
		a++;
	}
	while (a < 10);


}*/
/*int main() //���� 16,17 ���� For
{
	setlocale(LC_ALL, "rus");
	/*{
		int i = 0;
		cout << "1 ����" << endl;
		for (; i <= 10; i++)
		{
			cout << "���������� i= " << i << endl;
		}
		cout << "2 ����" << endl;
		for (; i <= 20; i++)
		{
			cout << "���������� i= " << i << endl;
		}}
	{for (int i = 0, j = 10; i < 10, j != 5; i++, j--)
	{
		cout << " ���������� i= " << i << endl;
		cout << " ���������� j= " << j << endl;
	}}
}*/
/*int main() //�������� ����� break. �������� break. ��������. ������. ���������. ���� #18
{
	setlocale(LC_ALL, "rus");

	/*{cout << "������ ����� " << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "���������� i= " << i << endl;
		if (i==3)
		{
			break;
		}
	}
	cout << "����� ����� " << endl;
	}
}

	cout << "������ ����� " << endl;

	int i = 0;
	while (true)
	{
		cout << "���������� i= " << i << endl;
		i++;
		if (i==6)
		{
			break;
		}
	}

	cout << "����� ����� " << endl;
}*/
/*int main() //���� 19 Continue
{
	setlocale(LC_ALL, "rus");

	for (int i = 0; i < 20; i++)
	{
		if (i%2==0)
		{
			continue;
		}
		cout << "���������� i= " << i << endl;
	}

}*/
/*int main()
{
	setlocale(LC_ALL, "rus");

	for (int i = 1; i < 5; i++)
	{
		cout << "�������� 1� ���� �������� for �������� � " << i << endl;

		for (int j = 1; j < 5; j++)
		{
			cout << "\t�������� 2� ���� �������� for �������� � " << j << endl;
		}
	}

}*/
/*int main() //�������� ���������, ������� ������� �� ����� ������������� �������� *. ������ � ������ ������� �������������.
{
	setlocale(LC_ALL, "rus");

	/*int shirina, visota;
	cout << "������� ������ ��������������: ";
	cin >> shirina;
	cout << "������� ������ ��������������: ";
	cin >> visota;

	for (int v = 0; v < visota; v++)
	{
		for (int s = 0; s < shirina; s++)
		{
			cout << "*";
		}
		cout << endl;
	}

	/*int x, y;
	cout << "������� ����� ��������������: ";
	cin >> x;
	cout << "������� ������ ��������������: ";
	cin >> y;
	for (int i = 0; i < x; i++)
	{
		cout << "*";
	}
	cout << endl;
	for (int j = 2; j < y; j++)
	{
		cout << "*";
		for (int i = 2; i < x; i++)
		{
			cout << " ";
		}
		cout << "*" << endl;
	}

	for (int i = 0; i < x; i++)
	{
		cout << "*";
	}
}*/
/*int main() //���� 25 �������.
{
	setlocale(LC_ALL, "rus");

	int arr[4];
	{
		arr[0] = 5;
		arr[1] = 7;
		arr[2] = 10;
		arr[3] = 1;
	}

}*/
/*int main() //���� 26 ������������� �������� ������.
{
	setlocale(LC_ALL, "rus");

	int arr[4]; // ��� �� ������� ������ � ���������� int � ������� ������� ����� � ��� ���������
	{
		arr[0] = 5; //��� �� ��������� �������� � ������� �� ���������
		arr[1] = 7;
		arr[2] = 10;
		arr[3] = 1;
		cout << arr[0];
	}
	//����, �� ������ ������� ��� ��� � ���� �������

	int arr[] = { 5,7,10,1 }; // ����� ���������� ���� ������� � ������ ������
	int arr[]{ 5,7,10,1 }; // ������ ����� ���, ������ ��� �����.
	int arr[3]{}; // ������� ��� � ������� ��� ��������, �� ������ �� ��������� � �������� �������, ����� ��� �� ���� ������.
	cout << arr[0];
	cout << arr[1];
	cout << arr[2];
	cout << arr[3];
}*/
/*int main() //���� #27. ����� �������. ������� � �����. ���� � ��������. Array c++. C++ ��� ����������.
{
	setlocale(LC_ALL, "rus");

	const int size = 5;
	/*int arr[size]{ 5,25,35,45,55 }; //� ��������� �������� ���������
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << endl;
		}
	}

	int arr[size]; // ��� �������� �������� ���������

	for (int i = 0; i < size; i++)
	{
		arr[i] = i;
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}

}*/
/*int main() //sizeof ��� ���. sizeof c++ ������. ������ ���������� ��������� �������. sizeof array. ���� #28.
{
	setlocale(LC_ALL, "rus");

	int a;
	cout << "���������� �= " << sizeof(a) << endl; //����� ������� �� ����� ������ ������ �������� ����� � ��������� ��������� ��� ������
	cout << "���������� double= " << sizeof(double) << endl;

	int arr[]{ 5,412,5351,321,2131 }; // ������� ������
	int b = sizeof(arr); // ������ ������ ������� � ������
	int c = sizeof(int); // ������ ������� ���������� ��� � ������
	cout << sizeof(arr) << " " << sizeof(int) << endl; //������ �� ����� ������� ������ ������� � ���������� ��� � ������
	cout << sizeof(arr) / sizeof(int) << endl; // ������ ������� ��������� � �������

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		cout << arr[i]<<endl; //������ arr[i] ? ��������� � ������� for �� ��������� ��� i = 0, i ������ ������� ������� �������� �� ������(int)
							  //������ ������ ������� = 20, ������ int = 4, 20/4=5, ����� i<5, i++. ��������� � ������� 5, ���������� i ���� ����������
							  //����� ������������� �� 1 �� ���������� ������� �����, ����� ������� ��� ��� 5 ��������� ��������� � �������
	}	// �� ����� ������ �� ������ ������, �������� �� ��� ������� �� �������, � ����� ��������� ������, ����� ������� ����� , � ������:
	cout << endl << endl;

	for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++) // ������� �� ����� sizeof ������ �������, � ����� sizeof ��� ������� ��������
														   // � ��� ��� ������� �������� ������������� ���� �������, �� ������ ����� ����� �����������
														   // ������ ������ �� ��������� ������ ���� ���� ������� ��� �����.
	{
		cout << arr[j] << endl;
	}
}*/
/*int main() //rand. srand. rand ������ ��������. srand time null. ���������� ��������� �����. randomize. ���� #29.
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int a = rand()%10;
	cout << a << endl;
	a = rand()%10; // ��� �������� ����� ��������� � 0 �� 9
	cout << a << endl;

	int const SIZE = 10;
	int arr[SIZE]; // ������� ������ �� �� ���������.

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100 ;
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}
}*/
/*int main() // ��������� ������ ��� ���. ����������� �������. ������. ������. ��� ����� ������. Array. C++ #30
		   // ��������� ������ �������������. ��������� ������ �������. ���������. ������. ���� #31
		   // ��������� ������� �����. ����������. ��������� ������ �����. C++ ��� ����������. #32
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	const int ROWS = 5, COLS = 8; //��������� ��������� ��� � ��������� ROWS and COLS , ��� ������ �������� �������

	int arr[ROWS][COLS]{}; // ������� ��������� ������ �� ����������,�� ��� ������, ��� ����� ���� 0

	for (int i = 0; i < ROWS; i++) // ��� ��� ���������� ������� ���� ���, �������� �� ����� �� ������, ����� ���������� �� �������
	{
		for (int j = 0; j < COLS; j++) // ������� ��� ���������� �������
		{
			arr[i][j] = rand() % 20; // ������ �������� ����� �������������� ��������� ����� �� 0 �� 19
		}
	}


	for (int i = 0; i < ROWS; i++) // ��� ������ � ������� ������� ���� ���, �������� �� �� ������, ����� ��������� �� �������
	{
		for (int j = 0; j < COLS; j++) // ������� ������ ������� �� ����� ��������� �������
		{
			cout << arr[i][j] << "\t"; // ����� ����� ��������� ������ �� ������� � ��������, � ����������
		}
		cout << endl;
	}

}*/
/*void foo() //������� c++ �������. ���������. ����������, ���������� �������. ���������, ���������. C++ #33
{
	cout << "� ����� ��������� ������" << endl;
}
int sum(int a, int b)  //������� c++ �������. ���������. ����������, ���������� �������. ���������, ���������. C++ #33
{
	int result; //������ ������ ������� ����� ���� �����
	result = a + b;
	return result;
}
int Sum(int s,int f)  //������� c++ �������. ���������. ����������, ���������� �������. ���������, ���������. C++ #33
	{
	return s + f; // �������� ������ ������� ����� ���� �����
	}
int main() //������� c++ �������. ���������. ����������, ���������� �������. ���������, ���������. C++ #33
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int c ;
	c = sum(2, 5);
	cout << c << endl;
	foo();
	int q = 11;
	int w = 12;
	sum(q, w);
	cout << sum(q, w) << endl;
}*/
/*int foo(int b) //�������� ���������� � ������� �� ��������. ��������� �������. �������� ���������� � �������. #34
{
	return ++b; // ���� �������� void, ���������� ����� �������� �� return, ��� ���� �� ����� ������������ �������� ��� ������ ������� � ���������� �.
				// ��������� �������� int foo(int a) ����� ���������� �� ����� �������� �� return, �� ����� �������� ��������� ����� ������� ��� ����������, �� b++ � ++b.
}
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int value = 1;
	value= foo(value);
	cout << value << endl;
}*/
/*void FillArray(int arr[],const int size) //�������� ������� � �������.��� �������� ������ � �������.C++ ��� ����������.���� #35.
{				// � ���������� �� ������� ������, � ��������� ���������
	srand(time(NULL));
	for (int i = 0; i < size; i++)   // ��� ������� ���������� ������� �������� ��������������� �������
	{
		arr[i] = rand() % 10;
	}
}
void PrintArray(int arr[], const int size) //�������� ������� � �������.��� �������� ������ � �������.C++ ��� ����������.���� #35.
{
	for (int i = 0; i < size; i++) // ��� ������� ������ � ������� �������
	{
		cout << arr[i] << endl;
	}
}
int main() //�������� ������� � �������.��� �������� ������ � �������.C++ ��� ����������.���� #35.
{
	setlocale(LC_ALL, "RUS");

	const int SIZE = 10;
	int Massiv[SIZE];

	FillArray(Massiv, SIZE);
	PrintArray(Massiv, SIZE);

}*/
/*int a; // ������� ���������, ���������� � ��������� ����������.
void foo(int a)
{
	a++;
}
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int b = 3;
	foo(b);
	a++;
	cout << "\t= " << a << endl;
	cout << "\t= " << b << endl;

}*/
/*void foo(int q,int a=7,double b=0.5) // ���� 38 ��������� �� ���������.
{
	for (int i = 0; i < a; i++)
	{
		cout << "#" << endl;
	}
}
int main()
{
	foo(1);
}*/
/*inline void foo(int a=7) // ���� 39 inline c++ ��� ���. �������� ����� inline. ������������ �������.
{
	for (int i = 0; i < a; i++) // ����� ������� � ��� ���� � �����������
	{
		cout << "#" << endl;
	}
}*/
/*int sum(int a, int b) // ���� 40 ���������� �������
{
	a++;
	return a + b;
}
int sum(int a, int b, int c)
{

	return a + b + c;
}
double sum(double a, double b)
{
	return a + b;
}
int main()
{
	cout << sum(3, 3) << endl;
	cout << sum(4, 2, 3) << endl;
	cout << sum(3.4,1.3) << endl;
}*/
/*template <typename T1, typename T2>     //������� �������. ��������� ������� c++. template typename. template class. ���� #41
void Sum(T1 a, T2 b)
{
	cout << a << endl;
	cout << b << endl;
}
int main()
{
	Sum(3, "parametr");
}*/
/*int Factorial(int N) // ��������. ���������
{
	if (N==1)
	{
		return 1;
	}
	return N * Factorial(N - 1);
}
int main() // ��������. ���������
{
	cout << Factorial(5) << endl;
}
int main() // ��������� ��� �������� ������ For
{
	setlocale(LC_ALL, "rus");
	int N;
	int fac = 1;
	cout << "������� �����, ��� �������� ����������: " << endl;
	cin >> N;

	for (int i = N; i >= 1; i--)
	{
		fac = fac * i;
	}
	cout << "\n��������� �����: " << fac << endl;
}*/
/*int main() //��������� c++ ��� ���. ��� ���� �����. ��������� c++ �������������. C++ ��� ����������. ���� #46
{
	int a = 5;
	cout << "a\t= " << a << endl;
	int* px = &a;

	cout << px << endl;
	cout << *px << endl;
	*px = 2;
	cout << px << endl;
	cout << *px << endl;
	cout << "a\t= " << a << endl;
}*/
/*void foo(int* pa) // �������� ���������� � ������� �� ��������� c++. �������� ��������� � ������� ��. ���� #48
{
	(*pa)++;
}
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int a = 0;
	cout << a << endl;
	foo(&a);
	cout << a << endl;
}*/
/*void foo(int* pa, int* pb, int* pc) //������� ���������� �������� ������� ����� ���������. ������� ���������� ��������� ��������. #49
{
	(*pa) = 555;
	(*pb)++;
	(*pc) = -20;

}
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int a = 0, b = 0, c = 1;
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	cout << "c= " << c << endl << endl;;

	cout << "�������� foo ���������! " << endl;
	foo(&a, &b, &c);
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	cout << "c= " << c << endl;



}*/
/*int main() // ���� 50 ������ � ��������� �������
{
	setlocale(LC_ALL, "rus");
	int a = 5;
	int* Ukazatel = &a;
	int& Ssilka = a;
	cout << "Ukazatel \t" << *Ukazatel << endl;
	Ukazatel+=2;									// �������� ��������� �� 4 �����, ����� ����� ���������� ����� ��������� � �������� ������ �� ������ ������
	cout << "Ukazatel \t" << *Ukazatel << endl;

	Ssilka += 2; // ��� ������ � �������� � �� � ������ ������������ 2
	cout << "Ssilka \t" << Ssilka << endl;
	Ssilka = 55; // ��� ������ ���� �������� ���������� � ����� ����� ������
	cout << "���������� � \t" << a << endl;
	int *Ukazatel2 = &Ssilka; // ������� ����� ��������� � ��������� � ���� ����� ������, � ������� �������� ����� ���������� �
	cout << "���������� � " << a << endl;
	*Ukazatel2 = 38;
	cout << "Ukazatel2 \t  " << a << endl;


}*/
/*void foo(int a) //�������� ���������� � ������� �� ������. ������� ����� ������� � ����������. ���� #51
{
	a = 1; // ����� ������ �� ���������, ��� ��� ���� �� ����������, ������� ���� ��� ��� �� ���, ������ � ������� ����� � �������� ���������� ��������
}
void foo2(int& a)
{
	a = 2; // �������� �������� �� ������, �������� � ������ ������������� �������� � �������
}
void foo3(int* a)
{
	*a = 3;
}
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int value = 5;
	cout << "���������� Value= " << value << endl << endl;

	cout << "Foo" << endl;
	foo(value);
	cout << "Value= " << value << endl << endl;

	cout << "Foo2" << endl;
	foo2(value);
	cout << "Value= " << value << endl << endl;

	cout << "Foo3" << endl;
	foo3(&value);
	cout << "Value= " << value << endl << endl;
}*/
/*int main() //new c++ ��� ���. new c++ ������. c++ new delete. delete c++ ��� ���. delete c++ ������. ���� #53
{
	int* pa = new int;
	*pa = 10;
	cout << *pa << endl;
	delete pa; // ������� ������� ������
	pa = NULL; // ����� ������� ���������
	if (pa!=NULL)
	{
		cout << pa << endl;
	}
	delete pa;
}*/
/*int main() // ������������ ������ �++ ������. ��������, ����������, ��������, ������ ������������� �������. #55
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int size = 6; // ���������� ���� = 6, ��� ������ ����� �������
	int* arr = new int[size]; // ������� ��������� �� ������, ��������� ��������� � ������������ ������
	for (int i = 0; i < size; i++) //���� �� ���������� ������� ��������� ����� � ��������� �� 0 �� 20
	{
		arr[i] = rand() % 20 + 1;
	}
	for (int i = 0; i < size; i++) // ���� �� ����� �������
	{
		cout << arr[i] << "\t"; // ���� ����� ������� �������� ������ �� ����� �������
		cout << arr + i << endl; // �� ������������ ������������� , ������� ��������� ����� ������ �� ����� �������
	}
	delete[]arr; // ������� �� ����� �����

}*/
/*//���� 58 ����������� ������������� �������.
void FillArray(int* const arr, int const size) // ������� �� ��������� ������� ���������� ������� �� 0 �� 9
{		// � ������� ����������� ��������� �������, ����� ������ �� ���������� � �������, � ���� ������ �� ������� �� ��������� � �����
			// ����������� ������������� ������ �������, ��� ��� �� ����� ��� � ����
	for (int i = 0; i < size; i++) // �������� �� ������� ������� � �������� �������� � �����.
	{
		arr[i] = rand() % 10; //��������� �� ������� , ���� i<size, � ��������� ��������� ����� � �������� �������
	}
}
void ShowArray(const int* const arr, int const size) // �� ������ ������� ��������� ���������� �� �������, �� � ��� ��� ��� ����������� ��� � ����������� ��������� �� ������+
			// ������� ����������� ������������� ������.
{
	for (int i = 0; i < size; i++) // ���� ����� ��� � �� ����������, ������ ��� ����� ������� ����� ������� � ����������� � ���������
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
int main() // ������� ��� �������, ����� ����������� � ���������� ���� � ������, �������.
{
	setlocale(LC_ALL, "rus");
	int size = 10; // ������ ������� ����� 10
	int* firstArray = new int[size]; // ������� ������������� ������ � �������� � 10 �����
	int* secondArray = new int[size]; // ������� ������ ����������� ������ �� 10 �����
	FillArray(firstArray, size); // �������� ������ ������� �������� ��� ���������� ������� � �������� � 10 �����, ���������� ������� �� �������.
	FillArray(secondArray, size); // ���� ����� ��� � � ����� ����

	//firstArray = secondArray; !!!!��� ���������� ������!!!! ��� �� ������ ����������� ���� � ����� ����� � ������ ���� ����������! ������ ������ ��� ��������� �� ���� � ����� ������

	cout << "firstArray =\t";
	ShowArray(firstArray, size); // ������ ������� ������� � ������� ������ ������ � �������� 10 �����
	cout << "secondArray =\t";
	ShowArray(secondArray, size); // // ���� �����, � ������� ��������� ������ ������� ����� � ��� ������, ��� � � ���������� �������
	delete[]firstArray; // ������� ������ ������� �������
	firstArray = new int[size]; // �������� ��� �������(���������) ����� ����� � ����������� ������, ��� ��� �� ������� ������ ������
	for (int i = 0; i < size; i++) // ���� ��� ��� ���������� ������ �������, �� ��� �� ���������� �������, � ����� ����������� �� ��������� �������� �� ������� �������
	{
		firstArray[i] = secondArray[i]; // ��� ����� �������� ���������� ��������
	}
	cout << "============================================" << endl; // ������ �������������� �����
	cout << "firstArray =\t";
	ShowArray(firstArray, size); //��� ������� �� ������� ����������, ������ ���������� ������� �����, ������ � ������
	cout << "secondArray =\t";
	ShowArray(secondArray, size); // ������ ��������� ����������, �� ��� � ������� ��������, ������ ����� ��� ������� � ����������� �������!


	delete[]firstArray; // � ����������� ������� � ��� ��� ����� ���� �� ������� ������ �� ������� �������, � ������ �� ��������� ��������� ������, ���� ������ ���,��!
	delete[]secondArray; // � ��� ��� ����� ������ ������, � ����� ������� ������ ���� ��� ��� �����, ��� ������ �� ���������, � ��� ����� ��� ����� ����� �������.��



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
void push_back(int *&arr, int &size,int value) // 1) *&arr, �� �������� ��������� �� ������, ������ �� ��������� �� ������, ���� ���������� ������ ���������, �� � ����� ����
//������� ��������� ����� ���������, � ��� �� �� ����� ����� ���������� ���� ������� ������ �� ���� ����� ��������� ����� �� �����. 2) ��� �� � � size, ���� �� ������� ���
//��� ������� �� size � main'e �� ������ ������ ���� ������� �� �����������, ������� ������ �������� ���� 5 ����� �������, � �� �������� size �� 1 ������ �� 6.
{
	int* newArray = new int[size+1]; // ������� ����� ��������� �� ������, � ��� ����� �� ���������, ���� ������� ���� ���������� ������ ������
	for (int i = 0; i < size; i++)
	{
		newArray[i] = arr[i]; // ��� ����� ������������� ������
	}
	newArray[size] = value; // ��� ���� ����� �� ������, � ��� ����� � ��� ������ ������ �������� �� 1 ������, �� ��� �� ��������� ����� ������ ��� ����, � ��� ��� �����
	//� ������� ���������� � 0 ��������, � � ��� ���� 5 ��������� (0,1,2,3,4) � ��� size � ��� ������� �������� � mine 5 �� ��� ���������� ��� � ������� � ����������� 6 �������
	// 5 ��������� � ������� ��� (0,1,2,3,4) , 6 ��������� ��� (0,1,2,3,4,5�) ��� ��� ������� ������ � �������� � size, ��� � ����������. ������� ����� � ���� ����� �� ��������
	//��� ���������� � ����� ��� ������, � ����� ������ ��� ����, ��������� ������ � ����� � ������.
	size++; // ��� � �� ����� ����� ������ size ����������� �� ������� ����� ���������� ������ �������� � ������, �� �� � ��� ��� � ��� �������� �� +1.
	//UPD � �������� ���������� � ����� ��� ���� ��������� ����������� ���������� size �� +1, ����� � ���� ������� � ����� ��� ��� ������ �� +1, ��� ��� �� � ����� �������
	// �������� size �������� �� ������, � ���� �� �������� �������� �� ������, �� �� ����� �������� ������ ������� ��������� � �����
	delete[]arr; // ��� �� ��������� ������ ������ ������ ������� �������
	arr = newArray; // ��� ��� ��� ������ ������ ������, �� ����������� ��� ����� ������.

}
void pop_back(int*& arr, int& size) // ��� �������� ������� 1 �������
{
	size--; // �������� ��������� ����� ������ �� 1, ������ 6 ����� 5
	int* newArray = new int[size];
		for (int i = 0; i < size; i++)
		{
			newArray[i] = arr[i]; // ��������� ������ �� ����� 5 ���������
		}

		delete[]arr;
		arr = newArray;
}
int main()
{
	int size= 5;
	int* arr = new int[size];
	FillArray(arr, size);
	ShowArray(arr, size);
	push_back(arr, size, 666);
	ShowArray(arr, size);
	pop_back(arr, size);
	ShowArray(arr, size);




	delete[]arr;

}*/
/*int main() // ���� 62 ������� ASCII
{
	setlocale(LC_ALL, "rus");
	for (int i = 0; i <= 255; i++)
	{
		cout << "code = " << i << "\t" << "char = " << (char)i << endl;
	}

}*/
/*void foo(const char* str)
{
	cout << strlen(str);
}
int main() // ���� 63 ��������� ���������� ������ � �������
{
	setlocale(LC_ALL, "rus");

	const char *charArr[] = {"Hello","World","!","Test" };
	for (int i = 0; i < 4; i++)
	{
		cout << charArr[i]<<" " ;
	}
	cout << endl;
	const char* str = "hello world!";
	foo(str);
}*/
/*int main() // ���� 64 ������������ �����
{
	//char str1[255] = "hello"; ��� �������� �� ����� �� ��� ����
	//char str2[255] = "world";
	// strcat_s(str1, str2); ��� ����� � ���� �� ��������
	setlocale(LC_ALL, "rus");
	string str1 = "������";
	string str2 = "��������";
	string str3 = "�����";
	string result;
	result = "������� "+ str3 + "\t��� " + str1 + "\t�������� " + str2;  // + ��� ������������� �������� � ������ ������!
	cout << result;

}*/
/*void foo1() // ��������� �� ������� � �������� ���������. �������� ������� � �������� ���������. Y��� #65
{
	cout << "void foo1" << endl;;
}
void foo2(int a)
{
	cout << "void foo2\tint a= " << a << endl;;
}
int foo3(int a)
{
	cout << "int foo3(int a)" << endl;
	return a - 1;
}
int foo4(int a)
{
	cout << "int foo4(int a)" << endl;
	return a * 2;
}
string DataFromBD()
{
	return "DataFromBD";
}
string DataFromWebServer()
{
	return "DataFromWebServer";
}
string DataFromAstral()
{
	return "DataFromAstral";
}
void ShowInfo(string(*ShowInfo)()) // ��� ���������� ��������� �� �������, ��� ������ �� ����������������� void, �������� �������(���_�������(*�������� �������) ������� �����
									// �������������� ������ ���� �������, � ������� ������� ��� � �������� ����� �������,(���������) � ��� ��� ���
{
	cout << ShowInfo() << endl; // ��� ������ ����� �� ����� � �������� �������� ������� ������� ����� �������
}



int main()
{
	void (*fooPointer1)(); // ��� ��������� ��� � �������
	fooPointer1 = foo1;
	fooPointer1();


	void(*fooPointer2)(int a); // ��� � ���������� ��� � �������
	fooPointer2 = foo2;
	fooPointer2(5);

	int(*fooPointer3)(int b);
	fooPointer3 = foo3;
	cout << fooPointer3(5) << endl;

	int(*fooPointer4)(int c);
	fooPointer4 = foo4;
	cout << fooPointer4(5) << endl;

	ShowInfo(DataFromBD);
	ShowInfo(DataFromAstral);
	ShowInfo(DataFromWebServer);


}*/
/*#define PI 3.14 //������������ ��� ���. ��������� #define. �������. ��������� ������������� ��� ���. C ++ ���� #66
#define begin {
#define end }
#define  tab "\t"
int main()
{
	for (int i = 0; i < 5; i++)
	begin
		cout << i << endl;
	end
}*/
/*#define FOO(x,y)((x)*(y)) // c++ ������ �������. ������� � �����������. ������ � �����������. C ++ ��� ����������. ���� #67
int main()
{
	cout << FOO(5, 6) << endl;
}*/
/*#define DEBUG // ���� ������������� //#define �� ����� � ������ � ����� �� ����� ����������
int main()
{
	setlocale(LC_ALL, "rus");

#ifdef DEBUG
	cout << "������ �����" << endl;
#endif // DEBUG
	for (int i = 0; i < 5; i++)
	{
		cout << i << endl;
	}
#ifdef DEBUG
	cout << "����� �����" << endl;
#endif // DEBUG

#ifdef DEBUG // #if DEBUG > 5  ������� "����" � ����������� ���������. ���������� ���� ������� �������!
	cout << "DEBUG ���������" << endl;
#else // #elif ���������� ������������� ��������
	cout << " DEBUG �� ���������" << endl;
#endif // DEBUG

}*/
/*// �������� ��������� �������� ��� ���.��� ��������.��� ������������.C ++ ��� ����������.���� #69
int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	cout << "������� ���������� � = ";
	cin >> a;
	if (a < 10)
	{
		cout << a << " ������ 10";
	}
	else if (a>10)
	{
		cout << a << " ������ 10";
	}
	else
		cout << a << " ����a 10";
	//// ��������� ��������
	a < 10 ? cout << a << " ������ 10" : a>10 ? cout << a << " ������ 10" : cout << a << " ����� 10"; // ���� ����� ��� � �� ���� ������ � ���� �������




}*/
/*//argc argv c++ ��� ���. ��������� ������� main argc argv. ��������� main. C ++ ���� #70
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "rus");

	for (int i = 0; i < argc; i++)
	{
		cout << argv[i] << endl;
	}
}*/
/*//��� ����� �����. ��� ����� ������ ������. ��������� ������ ���. ����� ��� ���. ���� #73
class Human
{
public:
	int age;
	string name;
	int weight; // ���� �������� ���� � �� ����������� :D

};
class point
{
public:
	int x, y, z;

};
int main()
{
	Human firstHuman; // ����� ���, ���� ���� ����� �
	firstHuman.age = 30;
	firstHuman.name = "Ivanov Ivan Ivanovich";
	cout << firstHuman.age << endl
		<< firstHuman.name << endl;
	Human secondHuman;
	firstHuman.age = 15;
	firstHuman.name = "Oleg";
	cout << firstHuman.age << endl
		<< firstHuman.name << endl;

	point a;
	a.x = 1;
	a.y = 3;
	a.z = 5;


}*/
/*//������ ������. ��� ����� ������ � ����������������. ����� ������ ������. �������. C++ ���� #74
class Human
{
public:
	int age, weight;
	string name;

	void print() // ������� �������� � ����������� ������� ��������� ��� � ���� ������.
	{
		cout << "���: " << name << "\n�������: " << age << "\n���: " << weight <<"��"<< endl;
	}


};

int main()
{
	setlocale(LC_ALL, "rus");
	Human firstHuman;
	firstHuman.age = 30;
	firstHuman.name = "Petruha Maslenok";
	firstHuman.weight = 100;
	firstHuman.print(); // ��� ��� ������� �� ��������� ������� ��������� � ������, � �������� � ���� ��� � ��� ����, �� � ���� ��� ������ �� �������� �� ����������
	// ����� ����� ������� �������� ������ ����� ������� firstHuman, ��� ��� �� ������ ��������� ���������� ����� Human, � ����� ��� ������� ������ ������ Human, �
	// �������� ������ ���� ������ ������� ����������, ������ ������ ������� ���. �� ����� ����� ����� ��������� � ������, ����� �������� ������ � �������� . ������� ��� ������.





}*/
/*//������������ ������� �������. public private protected ��� ���. ������������� �������. C++ ���� #75
class Human
{
public:
	int a, b;
	void pointer()
	{
		cout << str1 << str2;
	}
private:
	string str1 = "private";


protected:
	string str2 = "protecto";
};
int main()
{
	Human firsthuman;
	firsthuman.pointer();
}*/
/*//��� ����� ������� � ������� ��� ������. ������ get � set. ������������ ���. ������. C++ ���� #76
class pointer
{
private:
	int x, y, z;
public:

	int GetY()
	{
		return y;
	}
	void SetY(int valueY)
	{
		y = valueY*2;
	}

	int GetX()
	{
		return x; //� ��� ������ ���������� ���� �, ������� ��� �������
	}
	void SetX(int valueX) // � �������� ������������� ������� � �����
	{
		x = valueX; // ��� ��� ������� ������������� �
	}
	void show()
	{
		cout << "X= " << x << "\nY= " << y << endl;
	}



};
int main()
{
	pointer a;
	a.SetY(11);
	a.SetX(5);
	a.show();
	//int result = a.GetX();
	//cout << "x= " << result;


}*/
/*//������������ ��� ������. private ������. ��� ����� ������������. C++ ��� ����������. ����#77
class CoffeBreaker
{
private:

	int voltage=217+rand()%10;


public:


	void Start()
	{

		if (voltage>=220)
		{
			cout << "VjuHHHH!";
		}
		else
		{
			cout << "VjuHHH slomalsya D:";
		}
	}




};
int main()
{
	CoffeBreaker COffeMachine;
	COffeMachine.Start();

}*/
/*class pointer
{
private:
	int x, y;
public:

	pointer(int valueX,int valueY) // ��� �����������, ���� �� �� �������� � ������ ����������� �� �� ����� ������ � ������� �� ���������.
	{
		x = valueX;
		y = valueY;
	}

	int GetY()
	{
		return y;
	}
	void SetY(int valueY)
	{
		y = valueY * 2;
	}
	int GetX()
	{
		return x;
	}
	void SetX(int valueX)
	{
		x = valueX;
	}

	void show()
	{
		cout << "X= " << x << "\nY= " << y << endl << endl;
	}



};
int main()
{
	//pointer a; // ��� ��� �� ������� ����������� , � � ��� ���� ��������� ���� ���������, ��� ������ ��� �� ��������
	pointer a(5, 44); //��� �������� �������, � ����������� ���� ������������� ���������� ����� ��������� � ��������� ��������.
	a.show();
	pointer b(77, 14);
	b.show();


}*/
/*//���������� ������������� ������. ��� ����� ����������. ��� ����������� �����������. ����#79
class point
{
private:
	int x, y;

public:

	point() // ��� �������� ����������� �� ���������, ����������� ������� ������������, ������ � ��� ����� IDE ����� ����������
	{
		x = 0;
		y = 0;
	}

	point(int valueX, int valueY) // � ��� ������ ����������� Point ����������, � ����������� �� ���������� ��������� ���� ��� ��� ��� ����
	{
		x = valueX;
		y = valueY;
	}
	point(int valueX, bool boolean)
	{
		x = valueX;
		if (boolean)
		{
			y = 1;
		}
		else
		{
			y = -1;
		}
	}
	void print()
	{
		cout << "x= " << x << "\ty= " << y << endl << endl;
	}

};
int main()
{
	point a(44, 2);
	a.print();
	point b;
	b.print();
	point c(3,false);
	c.print();

}*/
/*//���������� ��� ���. ����� ����� ���������� ������ � ���. ���������� � �����������. ����������. #80
class MyClass
{
	int* data; //��������� �� ����
public:
	MyClass(int size)
	{
		data = new int[size]; // � ���� �������� ������������ ������
		for (int i = 0; i < size; i++)
		{
			data[i] = i;
		}
		cout << "������ " << data << " �������� �����������!" << endl;
	}
	~MyClass()
	{
		delete[]data; // ����� ������� ������������ ������, ��� ��� ���������� ������ �����������, � ���������� � ������������ ���.������ �� �������
		cout << "������ " << data << " �������� ����������!" << endl;
	}

};
void foo()
{
	cout << "Foo ������ ��������� " << endl;
	MyClass(1);
	cout << "Foo ����� ��������� " << endl;
}
int main()
{
	setlocale(LC_ALL, "ru");
	foo();
	//MyClass secondclass(2);
	//MyClass thirdclass(3);

}*/
/*class Myclass //�������� ����� this � ���. ��� ��������. ��� ��� �����. ��� ���� ����� this ��������� C++ #81
{
	int x, y;
public:
	Myclass()
	{
		x = 0;
		y = 0;
		cout << this << " constructor " << endl;
	}
	Myclass(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
		cout << this << " constructor " << endl;

	}
	void print()
	{
		cout << " x= " << x << " \ty= " << y << endl << endl;
	}

	/////////////////////////////////////////////////////////////////
	void SetY(int y) // ���� ����� ���, �� ���������� �� ������ ������ y ��������� �������, � ������ 0
	{
		this->y = y; //����� ��������� y=5 ; ���� �������� this->
	}
	int GetY()
	{
		return y;
	}

};
int main()
{
	Myclass classOne;
	classOne.print();
	Myclass classTwo(3, 8);
	classTwo.print();
	cout << "=========================" << endl; // ���� ������ � this->
	classOne.SetY(5);
	classOne.print();



}*/
/* //����������� �����������. ��� ���. ������. ����� ���������� ����������� �������� �� ��������� C++ #82
class MyClass
{
private:
	int Size;
public:
	int* data; // ������� ������, � ��������� ��� � ���� ������, ��� ��� �� ��������� �� ������ ������� �������

	MyClass(int size) // �������� ����� �������� �� ���������� ��������� � ������� ������� �� ������� � ������������ ������
	{
		this->Size = size; // ���������� Size ����� ����������� ��� size ������� �������� �� ���. ��� ��� ���� ����� �� ������� ������ ������� � ��� ������.
		this->data = new int[size]; // ����� �������� ������� ������������ ������ ����� ���, ���� ����� ������ ��� ��������� �� ������� ���������.
		for (int i = 0; i < size; i++) //����� �� ��������� ������ �� 10 ���������
		{
			data[i] = i; // ��� ����� ���� ���������� �������� � ������ �������
		}
		cout << this << " �������� �����������!" << endl; //this ������ ����� ������ � ������, � �� ��� ��������
	}

	MyClass(const MyClass& other) // ����������� �����������, � �������� &other �������� ������ ������� ����� �����������, � ����� ������ ��� classOne
	{
		this->Size = other.Size; // ������ �� classOne ���������� � ����� ������, ������ ��� ������ �������.
		this->data = new int[other.Size]; // �������� ����� ����� � ������ ��� ������, ������������� ��� 10 ��������� ������� � ��� ������� � classOne

		for (int i = 0; i < other.Size; i++) // � ������� ����� ��� ����� ������ 10 ���, ��� ��� � classOne 10 ���������
		{
			this->data[i] = other.data[i]; // ����� ��������� ����� ������ ������� �� ������� �������, �� classOne � classTwo
		}
		cout << this << " �������� ����������� �����������" << endl;
	}

	~MyClass()
	{
		delete[]data;
		cout << this << " �������� ����������!" << endl;
	}

};
void Foo(MyClass value)
{
	cout << "��������� ������� Foo" << endl;

}
MyClass foo2()
{
	cout << "��������� ������� Foo_2!" << endl;
	MyClass temp(2);
	return temp; // ����� ����� ���������� ������, �� �� ����� foo2()
}
int main()
{
	setlocale(LC_ALL, "rus");

	MyClass classOne(10);
	MyClass classTwo(classOne); // �������� 1� ������


	//////////////////////////////////////////////////////////////////////
	//foo2(); //  ��� ����� �� ����� ���� ������� ��������� ����� ������
	//Foo(classOne);
} // ��� ������ �� �������� ����, � ������� �� �����, � ��� ���������� ����������, � ��� � ����� �������� ������� ������ � ��������� �� �������� ������ ����� ��������� �����.
*/
/* //���������� ���������� ������. ���. ���������� ��������� ������������. C++ ��� ����������. ����#83
class MyClass
{
private:
	int Size;
public:
	int* data;

	MyClass(int size)
	{
		this->Size = size;
		this->data = new int[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = i;
		}
		cout << this << " �������� �����������!" << endl;
	}

	MyClass(const MyClass& other)  // ����������� �����������
	{
		this->Size = other.Size;
		this->data = new int[other.Size];

		for (int i = 0; i < other.Size; i++)
		{
			this->data[i] = other.data[i];
		}
		cout << this << " �������� ����������� �����������" << endl;
	}

	MyClass& operator = (const MyClass& other) // ���������� ��������� ������������ a=b ��� ||a.operator=(b);|| ��� ����� ����������
	{
		cout << this << " �������� ����������� ������������" << endl;

		this->Size = other.Size; // ������� ������� ������ � � ��� � � b
		if (this->data != nullptr) // ������ �������� ���� �� � ��� ������ � ������� �
		{
			delete[]this->data; // ��� ��� ���� ������� ������� � ����, ������� ������ � ������� �
		} //��������� � ��� ������ 2 ������� � �� 2 ������ �� ������, � b �� 2 ������ �� �����������

		this->data = new int[other.Size]; // �������� ����� ������� � ��� ������, �������� ������� � ���������� ��������� �� �������� �� ��������

		for (int i = 0; i < other.Size; i++)
		{
			this->data[i] = other.data[i]; //�������� �� b � �
		}
		return *this;
	}

	~MyClass()
	{
		delete[]data;
		cout << this << " �������� ����������!" << endl;
	}

};
int main()
{
	setlocale(LC_ALL, "rus");

	MyClass classOne(10);
	MyClass classTwo(2);
	MyClass classThree(4);
	classOne = classTwo = classThree;


}*/
/*//���������� ��������� ��������� == � �� ����� !=. ���������� ���������� ���������� ���������. C++ #84
class point
{
private:
	int x, y;
public:
	//bool operator==(const point &other) // �������� ��������� � �� ���������, ��������� � ���� ������ ��������� �����������.
	//{
	//	if (this->x==other.x&&this->y==other.y) // ���������� ���� � � �, �������� "��� � ����� ������ � � ��� � ����� ������ �"
	//	{
	//		return true; // ��� ��� � ��� &&(�) �� ���� ���� ���� false, �� ��� ������ false
	//	}
	//	else
	//	{
	//		return false; // ������ ��� ����� ��� �� �����, ��� �� ��������, ������ ����� ������� ������ � �����
	//	}
	//}
	bool operator==(const point& other) // ��� ����������
	{
		return this->x == other.x && this->y == other.y; // �� ����� ���������� ��������� ����� ���������
	}
	bool operator !=(const point& other)
	{
		return !(this->x == other.x && this->y == other.y); // operator != �� ���������, ���� ��� �� ����� ������ false
	}
	point() // ��� ����� ������ ����������� �����������
	{
		x = 0;
		y = 0;
		cout << this << "constructor" << endl;
	}

	point(int valueX, int valueY) // ��� �����������
	{
		x = valueX;
		y = valueY;
	}

	void SetY(int valueY)
	{
		y = valueY * 2;
	}
	int GetY()
	{
		return y;
	}

	void SetX(int valueX)
	{
		x = valueX;
	}
	int GetX()
	{
		return x;
	}

	void show()
	{
		cout << "X= " << x << "\nY= " << y << endl << endl;
	}
};
int main()
{
	point a(5, 1);
	point b(9, 4);
	bool result = a == b;
	cout <<"a==b"<< result << endl;
	point c(7, 6);
	point d(7, 6);
	bool result2 = !(c == d);
	cout <<"c==d"<< result << endl;

}*/
/*//���������� ��������� ��������. ���������� ���������� ������.C++ ��� ����������. ����#85
class point
{
private:
	int x, y;
public:

	point() // ��� �� ����������� �����������
	{
		x = 0; //��� ��� ��� ���� � � � ����������������� ������.
		y = 0;
		cout << this << "constructor" << endl;
	}

	point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
	}
	point operator +(const point& other)
	{
		point temp; // � ������� ��� ����� ���� ��� ��������� �,�; ��� ����� ����������������� ������ ��� ��� � ��� ��������� ����������� �����������, � �� ���������� ���� �� 0
		temp.x = this->x + other.x;
		temp.y = this->y + other.y;
		return temp;

	}

	void SetY(int valueY)
	{
		y = valueY;
	}
	int GetY()
	{
		return y;
	}

	void SetX(int valueX)
	{
		x = valueX;
	}
	int GetX()
	{
		return x;
	}

	void show()
	{
		cout << "X= " << x << "\nY= " << y << endl << endl;
	}
};
int main()
{
		 //(x,y) ��� ��������� �� � �������� � �����, ��� ���������� ���� ��������.
	point a(5,3);
	point b(4,7);
	point c = a + b;
	c.show();
}*/
/*//���������� ���������� � ����������. ������������ � �����������. ��� ���������� ����������. C++ #86
class point
{
private:
	int x, y;
public:

	point()
	{
		x = 0;
		y = 0;
		cout << this << "constructor" << endl;
	}

	point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
	}

	void SetY(int valueY)
	{
		y = valueY;
	}
	int GetY()
	{
		return y;
	}

	void SetX(int valueX)
	{
		x = valueX;
	}
	int GetX()
	{
		return x;
	}

	void show()
	{
		cout << "X= " << x << "\nY= " << y << endl << endl;
	}
	point& operator ++() // ���������� ��������� ���������� �
	{
		this->x++; // ��� ������ ���������, ����� ��� � ���
		this->y += 1;
		return *this;
	}
	point& operator++(int value) // ���������� ���������, ����������� � ���������� ��� ������
	{
		point temp(*this);
		this->x += 1;
		this->y++;
		return temp;
	}
	point& operator--(int value) // ���������� ���������, ����������� � ���������� ��� ������
	{
		point temp(*this);
		this->x -= 1;
		this->y--;
		return temp;
	}
	point& operator --() // ���������� ��������� ���������� �
	{
		this->x--; // ��� ������ ���������, ����� ��� � ���
		this->y -= 1;
		return *this;
};
int main()
{
	point a(1, 1);
	++a;
	a.show();

}*/
/* //���������� ��������� �������������� . ���������� ���������� ������. C++ ��� ����������. ����#87
class TestClass
{
public:
		int &operator[](int index)
		{
			return arr[index];
		}

private:
	int arr[5]{51,3,22,71,18};
};

int main()
{
	TestClass a;
	cout << a[0] << endl;

}*/
/*//������������� ������� � ������ ������. ��� ���� ������������. ��� ������������. ��� ���� ������� #88
class Test;
class point
{
private:
	int x, y;
public:

	point()
	{
		x = 0;
		y = 0;
		cout << this << "constructor" << endl;
	}

	point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
	}

	void SetY(int valueY)
	{
		y = valueY;
	}
	int GetY()
	{
		return y;
	}

	void SetX(int valueX)
	{
		x = valueX;
	}
	int GetX()
	{
		return x;
	}

	void show()
	{
		cout << "X= " << x << "\nY= " << y << endl << endl;
	}
	point& operator ++()
	{
		this->x++;
		this->y += 1;
		return *this;
	}
	point& operator++(int value)
	{
		point temp(*this);
		this->x += 1;
		this->y++;
		return temp;
	}
	point& operator--(int value)
	{
		point temp(*this);
		this->x -= 1;
		this->y--;
		return temp;
	}
	point& operator --()
	{
		this->x--;
		this->y -= 1;
		return *this;
	}
	friend void ChangeX(point& value, Test& valuedata);
};
class Test
{
private:

	int Data = 0;
	friend void ChangeX(point& value, Test& testvalue)

};

void ChangeX(point& value, Test& testvalue)
{
	value.x = -1;
	testvalue.Data = 6;

}
int main()
{
	Test test;
	point a(5, 12);
	a.show();
	ChangeX(a, test);
	a.show();


}*/
/*//����������� ������� ��� ������. ������� ������� � �� ������. ������� �������� ������ ��� ������. #89
class MyClass
{
public:
	MyClass();
	~MyClass();

	void PrintMessage();

private:

};

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}
void MyClass::PrintMessage()
{
		cout << "Hello" << endl;
}
int main()
{

	setlocale(LC_ALL, "rus");
	MyClass a;
	a.PrintMessage();

}*/
/*//������������� ����� ������. ���. friend c++ ��� ���. ������� ������. C++ ��� ����������. ����#90
class Human;
class Apple;
class Human
{
public:
	void TakeApple(Apple& apple); // ��� ������� �������������

	void EatApple(Apple& apple) // ��� �������� �� �������� ������������� � ��� ������, � ����� ������� �� ����� �������� ������
	{

	}
};
class Apple
{
public:
	Apple(int weight,string color)
	{
		this->weight = weight;
		this->color = color;
	}
private:
	int weight;
	string color;
	friend void Human::TakeApple(Apple& apple); // �� ��������� ��� ������� � ������ human �������������
};
void Human::TakeApple(Apple& apple) //������� ������� �� �����, ������ ����� �� ���� ������.
{
	{
		cout << "TakeApple "  << " Weight " << apple.weight << " Color " << apple.color << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");

	Apple apple(150, "Red");
	Human Human;
	Human.TakeApple(apple);


}*/
/*//������������� ������. ���. friend class. friend c++ ��� ���. C++ ��� ����������. ���� #91
class Human;
class Apple;
class Human
{
public:
	void TakeApple(Apple& apple);

	void EatApple(Apple& apple)
	{

	}
};
class Apple
{
public:
	friend Human; // ��� �� ��������� ������ HUMAN �������� ������ � private and protected ����� ������ Apple
	Apple(int weight, string color)
	{
		this->weight = weight;
		this->color = color;
	}
private:
	int weight;
	string color;

};
void Human::TakeApple(Apple& apple) //������� ������� �� �����, ������ ����� �� ���� ������.
{
	{
		cout << "TakeApple " << " Weight " << apple.weight << " Color " << apple.color << endl;

	}
}

int main()
{
	setlocale(LC_ALL, "rus");

	Apple apple(150, "Red");
	Human Human;
	Human.TakeApple(apple);


}*/
/*//static ��� ���. ����������� ���� ������. �������������. �������� ����� static. C++ #92
class Apple
{
public:

	static int Count;

	Apple(int weight, string color)
	{
		this->weight = weight;
		this->color = color;
		Count++; // ��� �������� ������� (������) �� ����� ����������� ���������� (count) �� �������.
				 // ��� ��� ���������� Count ����������� � ���� ��� ���� ��������, �� ��� ����� �������������� ���������� �����.
	}


private:
	int weight;
	string color;

};
int Apple::Count = 0;
int main()
{
	setlocale(LC_ALL, "rus");

	Apple apple(150, "Red");
	Apple apple2(100, "Green");
	Apple apple3(170, "Yellow");
	cout << apple.Count << endl; // �� ����� ��� ��� �� ������
	cout << apple2.Count << endl;// �� ����� ��� ��� �� ������
	cout << apple3.Count << endl; // �� ����� ��� ��� �� ������

	cout << Apple::Count << endl; // ����� ��������� ����� � ������, ����� �������. ����� ��������� � ����������� ���������� ��� �� ����� ��������� �������.

}*/
/*class Gamer // ��� �������� ������� � ����� 93 id ��� ��������
{
private:
	int id = rand()%1000;
	string name;
	int age;
public:
	static int GamersCount;
	Gamer(string name,int age)
	{
		this->name = name;
		this->age = age;
		GamersCount++;
		id;
	}
	int GetId()
	{
		return id;
	}
	void show()
	{
		cout << "User name: " << name << "\nUser age: " << age<<"\nUser id: "<<id << endl;
	}

};
int Gamer::GamersCount = 0;
int main()
{
	setlocale(LC_ALL, "rus");
	Gamer Zadrot("Egorka", 15);
	cout<<Zadrot.GetId()<<endl;
	Gamer Noob("Oleja", 7);
	Noob.show();


}
*/
/*//����������� ������ ������ ����� �����. ����������� static. ��� ������. ���. ��� ����������. ���� #94
class Apple
{
public:
	Apple(int weight, string color)
	{
		this->weight = weight;
		this->color = color;
		Count++;
		id = Count;
	}
	int GetId()
	{
		return id;
	}
	static int GetCount()
	{
		return Count;
	}
	static void ChangeColor(Apple &apple,string color) // ��������� �����
	{
		apple.color = color;

	}
	void ChangeColorNoStatic(string color) // ������� ����� ��� � ���� ������ �� ���������,
	{
		this->color = color;
	}
	void show()
	{
		cout << "Apple Weight: " << weight << "\t Color: " << color << endl;
	}

private:
	static int Count;
	int weight;
	string color;
	int id;
};

int Apple::Count = 0;

int main()
{
	setlocale(LC_ALL, "rus");

	Apple apple(150, "Red");
	apple.show();
	apple.ChangeColor(apple, "White");
	Apple::ChangeColor(apple, "Black0"); // ����� ��������� �������� ����� �����:D
	apple.show();

	Apple apple2(100, "Green");
	Apple apple3(170, "Yellow");
	cout<<Apple::GetCount()<< endl;



}*/
/*//��������� ������ �++ ������. ���������� ������. ����� �����. inner class. ���. ��� ���������� #95
class Image
{
private:
	class Pixel
	{
	private:
		int r;
		int g;
		int b;


	public:
		Pixel(int r, int g, int b)
		{
			this->r = r;
			this->g = g;
			this->b = b;
		}
		string GetInfo()
		{
			return "Pixel: r= " + to_string(r) + " g= " + to_string(g) + " b= " + to_string(b);
		}
	};

	static const int SIZE = 5;
	Pixel Pixels[SIZE]
	{
		Pixel(105,25,30),
		Pixel(0,0,10),
		Pixel(60,115,200),
		Pixel(50,50,75),
		Pixel(5,100,40)

	};

public:

	void GetImageInfo()
	{
		for (int i = 0; i < SIZE; i++)
		{
			cout << Pixels[i].GetInfo() << endl;;
		}
	}



};
int main()
{
	Image Img;
	Img.GetImageInfo();


}*/
/*//������ �������� ������. ������������. �����������. �������� �����������. ��� C++ ��� ���������� #96
class Image
{
private:


public:

	void GetImageInfo()
	{
		for (int i = 0; i < 4; i++)
		{

		}
	}



};


class Pixel
{
private:
	int r;
	int g;
	int b;


public:

	Pixel() // ����������� �� ��������� ��� �������� ������� �������, ��� ���� ������ �� ������ �������
	{
		//r = 0; ����� ��������������� ������ �����������
		//g = 0;
		//b = 0;
		r = b = g = 0; // ��� ������ ������ �� ����, ����� �������� ���� ��������� 0, ����� ��� �� �������� �����.
	}

	Pixel(int r, int g, int b)
	{
		this->r = r;
		this->g = g;
		this->b = b;
	}
	string GetInfo()
	{
		return "Pixel: r= " + to_string(r) + " g= " + to_string(g) + " b= " + to_string(b);
	}
};

int main()
{
	const int LENGTH = 5;
	Pixel arr[LENGTH]; // ������ ����������������� ����(������)
	cout << arr[0].GetInfo() << endl; // ����� GetInfo ������� ��������� ��������? ������ ������� ���������� rgb.
	arr[0] = Pixel(5, 25, 35); // ���� ���� 0, �� ��������� �� ��������
	cout << arr[0].GetInfo ()<< endl;
	//Pixel arr[LENGTH] ����������� ������
	//{
	//	Pixel(10,0,110),
	//	Pixel(100,20,30),
	//	Pixel(405,50,540),
	//	Pixel(210,220,110),
	//	Pixel(30,20,70)
	//};

	int SIZE=rand()%10+1; // ������� ������������ ������.
	Pixel* array = new Pixel[SIZE];
	array[0] = Pixel(3, 55, 100);
	cout << array[0].GetInfo() << endl;

	delete[]array;

}*/
/*//��� ����� ��������� � ����������. ��������� ����� �������� � ���������. ���. C++ ��� ���������� #97
class Cap // ��� ������ ���������
{
public:
	string GetColor()
	{
		return color;
	}

private:

	string color = "red";

};
class Maneken
{
public:
	void InspectTheManeken()
	{
		cout <<"Look at Maneken and see "<<"cap " << cap.GetColor() << endl;
	}


private:
	Cap cap;
};

class Human
{
public:
	void Think()
	{
		brain.Think(); // � ������ Think ������ Human, �������� ����� Think ������� brain.
	}
	void InscpectTheCap()
	{
		cout << "��� ����� " << cap.GetColor()<<" �����" << endl;
	}

private:
	//class brain �������� ��������� ��� ������ human, �� ������ ����� �� ����� ��� ������������
	class Brain // ��� ����������
	{
	public:
		void Think()
		{
			cout << "� �����!!" << endl;
		}
	};
	Brain brain; // ������� ������ Brain ��� Human, ����� �� ���� ��� ������������.
	Cap cap;
};
int main()
{
	setlocale(LC_ALL, "rus");
	Human human;
	human.Think();
	human.InscpectTheCap();
	Maneken Ken;
	Ken.InspectTheManeken();
}*/
/*//������������ � ��� ������. ��� ����� ������������. ��� ���� ����� ������������ �������. ���. C++ #98
class Human
{
private:
	string name ;
public:
	// string name; // ������� Student and Proffesor �������� ��� ���� ������, ����� ��� ���� ����� ������������� �� ������ Student ������� ZaochnikStudent!
	string GetName() // ���� ����� ������, � ������� ����� ������ �� ����� �������� ��� ���������� � �������, ����� �������� ������� ��������� �� HUMAN!:D
	{

		return name;
	}
	void SetName(string name)
	{
		this->name = name;
	}
};
class Student : public Human
{
public:

	string group;
	void Learn() // ������ Human ���� ����� �� ��������.
	{
		cout << " � �����! " << endl;
	}
};
class ZaochnikStudent :public Student
{
public:
	void Learn()
	{
		cout << "� ����� � ������������ ���� �������� ��������! :D " << endl;
	}

};
class Proffesor : public Human
{
public:

	string object;

};
int main()
{
	setlocale(LC_ALL, "Rus");
	Student student;
	student.Learn();
	ZaochnikStudent student2;
	student2.Learn();
	student2.SetName("�������� ��������");
	cout << student2.GetName() << endl;

}*/
/*//������������ ������� ��� ������������. private public protected ������������� �������. ���. C++ #99
class A
{
private:
	 string msgTwo = "��������� ���";
public:
	string msgOne = "��������� ����";
protected:
	string msgThree = "��������� ���";


};
class B : public A
{
public:

	void PrintMsg()
	{
		cout << msgOne << endl;
		cout << msgThree << endl;
	}
};
class C : private A
{
public:
	void PrintPrivateMsg()
	{
		cout << msgOne << endl;
	}
};


int main()
{
	setlocale(LC_ALL, "rus");
	B b;
	b.PrintMsg();

}*/
/*//������� ������ ������������� ��� ������������. ��� ���������� ������������. ��� C++ ���������� #100
//������� ������ ������������ ��� ������������.�����������.��� C++ ��� ����������.���� #101
class A
{
public:
	A()
	{
		cout << "���������� ����������� �� ��������� ������ �" << endl;
	}
	~A()
	{
		cout << "���������� ���������� �� ��������� ������ �" << endl;
	}
};
class B :public A
{
public:
	B()
	{
		cout << "���������� ����������� �� ��������� ������ B" << endl;
	}
	~B()
	{
		cout << "���������� ���������� �� ��������� ������ B" << endl;
	}
};
class C :public B
{
public:
	C()
	{
		cout << "���������� ����������� �� ��������� ������ C" << endl;
	}
	~C()
	{
		cout << "���������� ���������� �� ��������� ������ C" << endl;
	}

};
int main()
{
	setlocale(LC_ALL, "rus");

	C c;


	return 0;

}*/
/*//����� ������������ �������� ������ �� ������������ ������-����������. ������������. ��� C++ #102
class A
{
public:
	A()
	{
		msg = "������ ���������";
	}
	void msgPring()
	{
		cout << msg << endl;
	}
	A(string msg)
	{
		this->msg = msg;
	}
	A(string msg,int value)
	{
		this->msg = msg;
	}
private:
	string msg;
};
class B :public A
{
public:
	B():A("���� ����� ���������") // ��������� ����������� A(string msg) ����������� � ���� ���������.
	{

	}
	B() :A("sda",1) // ����� ��� ����� ��������� ����������� � ����� �����������
	{

	}
};

int main()
{
	setlocale(LC_ALL, "rus");

	A a("sdasdas");
	a.msgPring();

	B b;




	return 0;

}*/
/*//����������� ������ ������ c++. �������� ����� virtual. �������� ����� override. ���. C++ #103
class GUN
{
public:
	virtual void Shoot()
	{
		cout << "One shoot one kill, no LUCK just SKILL!" << endl << endl;

	}

};
class GUNPulimet:public GUN
{
public:
	void Shoot() override
	{
		cout << "Just know it, BANG BANG BANG!" << endl << endl;
	}

};
class Player
{
public:
	void Shoot(GUN* gun) // � ���������� ��������� �������� ������, ��� ����������� �������, � ��� �����
	{
		gun->Shoot();
	}

};
int main()
{
	setlocale(LC_ALL, "rus");
	GUN pistol;
	GUNPulimet pulimet;

	//GUN* weapon = &pistol;  //� ��������� ������ GUN, ����������� ������ ������� ������ GUNPulimet
	//weapon->Shoot(); // ��� ������ ������� Shoot, ��������� ����� � GUNPulimet

	Player csgo;
	csgo.Shoot(&pulimet); // ��� ��� � ���������� ������� � ��� ���������, ���� ����� ��������� ������ �� ������ ������

}*/
/*//����������� ����� �++ ������. ����� ����������� �������. virtual. override. ����������� ��� C++ #104
class Weapon //���� ����� �����������
{
public:
	virtual void Shoot() = 0; //�������� ����������� ��� ��� ����� ����������� �������.
	void Foo()// ������������� ����� ����� �������� � �����������
	{
		cout << "FOO()" << endl;
	}
};
class Knife:public Weapon
{
public:
	void Shoot()override
	{
		cout << "Knife ~Vjuuuh!~" << endl;
	}
};
class Gun:public Weapon
{
public:
	 void Shoot() override
	{
		cout << "Pistol !~BANG~!" << endl;

	}
};
class MachineGun :public Gun
{
public:
	void Shoot() override
	{
		cout << "MachineGun ~BANG~BANG~BANG~ !" << endl;
	}
};
class Bazooka:public Weapon
{
	void Shoot()override
	{
		Bazooka BOOM;// ����� �� ������������� ������.
		BOOM.Foo();
		cout << "Bazooka ~BIGBADABOOM~!" << endl;
	}
};
class Player
{
public:
	void Shoot(Weapon* weapon) // � ���������� ��������� �������� ������, ��� ����������� �������, � ��� �����
	{
		weapon->Shoot(); //��������� ��������� �� ����� ���?
	}
};
int main()
{
	setlocale(LC_ALL, "rus");
	Gun pistol;
	MachineGun pulimet;
	Knife carambit;
	Bazooka muha;
	Player csgo;
	cout << "Player take weapon" << endl << endl;
	csgo.Shoot(&pulimet); // ��� ��� � ���������� ������� � ��� ���������, ���� ����� ��������� ������ �� ������ ������
	cout << "Player change weapon" << endl << endl;
	csgo.Shoot(&pistol);
	cout << "Player change weapon" << endl << endl;
	csgo.Shoot(&muha);
	cout << "Player change weapon" << endl << endl;
	csgo.Shoot(&carambit);
	cout << "Player noob,his dead D:" << endl << endl;

	carambit.Foo();// ������������ ����� � ���������� ������ �������� � �����������.

	//Gun* weapon = &pulimet;  //� ��������� ������ Gun, ����������� ������ ������� ������ MachineGun
	//weapon->Shoot(); // ��� ������ ������� Shoot, ��������� ����� � MachineGun
}*/
/*//����������� ���������� ������ C++. ��� ��� �����. ������������. �����������. ��� ���������� #105
class A
{
public:
	A()
	{
		cout << "�������� ������������ ������ ������ �" << endl;
	}
	virtual ~A()
	{
		cout << "����������� ������������ ������ ������ �" << endl;
	}
};
class B :public A
{
public:
	B()
	{
		cout << "�������� ������������ ������ ������ B" << endl;
	}
	~B() override
	{
		cout << "����������� ������������ ������ ������ B" << endl;
	}

};
int main()
{
	setlocale(LC_ALL, "rus");
	//B b;
	A* bptr = new B;
	delete bptr;




	return 0;
}*/
/*//����� ����������� ���������� c++. ������������. �����������. virtual. override. ��� ���������� #106
class A
{
public:
	A()
	{

	}
	virtual ~A() = 0;

};
A::~A() {};
class B :public A
{
public:
	B()
	{

	}
	~B() override
	{

	}

};
int main()
{
	setlocale(LC_ALL, "rus");
	//B b;
	A* bptr = new B;
	delete bptr;




	return 0;
}*/
/*//������������ ������������ c++. ����� ������������ �� ������������. ���. �++ ��� ����������. #107
class Human
{
public:
	Human(string name)// 3. ���� ����������� �������� ��� ��������, � ������ ��� ��������� ��������
	{
		this->name = name+"!"; // ������ �� �������� ������, ��� ��� �������������� ������������, ������ ������ ������ � ����� ������������, ���� �� �� ���� ��������� �������� �� ������ � �����.
		this->age = 0;
		this->weight = 0;
	}
	Human(string name,int age):Human(name) // 2. ��� �� ����, �� � ���� ������� ��� �� ������ �� ����������� ���� 4. ����� ����� ����������� ���� � �������� age
	{
		this->age = age;
	}
	Human(string name,int age,int weight):Human(name,age) //1. ��� ����, �� ����� ���������� ���� ������ �� ����������� � 2�� ����������� 5. ����������� ����, �������� weight � �������� � ����
	{
		this->weight = weight;
	}

	string name;
	int age;
	int weight;

};
int main()
{
	setlocale(LC_ALL, "rus");

	Human hum("��������",26,78); // ��������� ����������� � 3�� �����������



}*/
/*//c++ ����� ������������ ������ �������� ������. ���. �������� �++ � ����. ��� ����������. ���� #108
class Msg
{
public:

	Msg(string message)
	{
		this->message = message;
	}


	virtual string GetMsg() // �� ��������� ������� ������� ����� ::Msg:: ����� ����� ��� ����������� �� ���������� ����, ����� ��� �� ��� ������ �� ���������� � ����������� ��������.
	{
		return message;
	}

private:
	string message;

};
class BreaketMsg :public Msg
{
public:
	BreaketMsg(string message) :Msg(message) // ��� �� ���������� �� ������� ����� Msg, ��� ��� ��� ������ ����������� �� �������� ������, �� ��� ���������� � �������� ���� ����� ������.
	{

	}
	string GetMsg() override
	{
		return "[" + ::Msg::GetMsg() + "]"; // ��� ::Msg:: ����� ��������(����� ������ ����), c ����� ����������� �� ������� ����� ��������� ����� ������ �������� ������ Msg
	}
};
class Printer
{
public:
	void Print(Msg* message) // ���������� ��������� ��������� �� ����� Msg
	{
		cout << message->GetMsg() << endl;
	}

};
int main()
{
	setlocale(LC_ALL, "rus");

	Msg m("������!"); // ������� ������ ������ Msg ������� ��� m �������� ���� ������.

	Printer p;
	p.Print(&m);  // � ������ Printer ����� Print ��������� � ���� ������� �� ����� Msg �� ������� ������� ���������� Msg. ������ �� ���� �������� m ������� ������, ��� ���� ����� Printer
				   // ������ � ���� ��������� �� ��� ������, ����������� ������� Print �� ������ ��� ������ ������� �������, ������� �� �����, ����������� ������� GetMsg ������� ���������� ������.

	BreaketMsg b("Hey");
	p.Print(&b);




}*/
/*//������������� ������������ c++ ������. ���. �������� �++ � ���� ��� ����������. ���� #109

class Car
{
public:
	string str1 = "���� ������ ������";

	void Drive()
	{
		cout << "� ���!" << endl;
	}

};

class Airplain
{
public:
	string str1 = "���� ������ �������";

	void Fly()
	{
		cout << "� ����!" << endl;
	}

};
class FlyingCar:public Car,public Airplain
{
public:


};
int main()
{
	setlocale(LC_ALL,"rus");

	Car bmw;
	bmw.Drive();

	Airplain s7;
	s7.Fly();
	cout << endl << endl;
	FlyingCar FC; // ����� FlyingCar ��������� ��� ������, � ����� �������� �� ������ ����� ������!
	FC.Drive();
	FC.Fly();
	cout << endl << FC.::Car::str1 << endl; // ��� ��� �� ������� ������� ���������� ���������� ���� ������, �� ������� ����� ::Car:: � ::Airplain:: ����� �� ������� ���� ������ � ������� ��� ������
	cout << endl << FC.::Airplain::str1 << endl;

	Car* ptrC = &FC;
	Airplain* ptrA = &FC;



	return 0;
}*/
/*//������� ������ ������������� ��� ������������� ������������. ���. �++ ����������. ���� #110
//������� ������ ������������ ��� ������������� ������������. ���. �++ ����������. ���� #111
class Car
{
public:
	Car()
	{
		cout << "�������� ����������� ������ Car" << endl;
	}
	string str1 = "���� ������ ������";

	~Car()
	{
		cout << "�������� ���������� ������ Car" << endl;
	}

	void Drive()
	{
		cout << "� ���!" << endl;
	}

};

class Airplain
{
public:
	Airplain()
	{
		cout << "�������� ����������� �����a Airplain" << endl;
	}
	string str1 = "���� ������ �������";

	~Airplain()
	{
		cout << "�������� ���������� ������ Airplain" << endl;
	}

	void Fly()
	{
		cout << "� ����!" << endl;
	}

};
class FlyingCar :public Airplain, public Car // ����������� ��������� �� �������, � �� � ������ ����������� = Airplain->Car->FlyingCar.
{
public:
	FlyingCar()
	{
		cout << "�������� ����������� �����a FlyingCar" << endl;
	}

	~FlyingCar()
	{
		cout << "�������� ���������� ������ FlyingCar" << endl;
	}

};
int main()
{
	setlocale(LC_ALL, "rus");

	FlyingCar fc;
	cout << endl << endl;



	return 0;
}*/
/*//�++ ������������� ������������ ���������� ������. ���. �������� �++ ��� ����������. ���� #112
class Car
{
public:
	Car()
	{
		cout << "�������� ����������� ������ Car" << endl;
	}
	string str1 = "���� ������ ������";

	~Car()
	{
		cout << "�������� ���������� ������ Car" << endl;
	}

	void Use()
	{
		cout << "� ���!" << endl;
	}

};

class Airplain
{
public:
	Airplain()
	{
		cout << "�������� ����������� �����a Airplain" << endl;
	}
	string str1 = "���� ������ �������";

	~Airplain()
	{
		cout << "�������� ���������� ������ Airplain" << endl;
	}

	void Use()
	{
		cout << "� ����!" << endl;
	}

};

class FlyingCar :public Airplain, public Car // ����������� ��������� �� �������, � �� � ������ ����������� = Airplain->Car->FlyingCar.
{
public:

	FlyingCar()
	{
		cout << "�������� ����������� �����a FlyingCar" << endl;
	}

	~FlyingCar()
	{
		cout << "�������� ���������� ������ FlyingCar" << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "rus");

	FlyingCar fc;
	((Airplain)fc).Use();
	((Car)fc).Use();
	//�������� ����������� �����a Airplain
	//�������� ����������� ������ Car
	//	�������� ����������� �����a FlyingCar
	//	� ����!
	//	�������� ���������� ������ Airplain
	//	� ���!
	//	�������� ���������� ������ Car
	cout<< endl;

	fc.::Car::Use(); // �� ��� ��� ����� ����� ���������� ���� �����
	fc.::Airplain::Use();
	//	� ���!
	//	� ����!
	cout << endl;

	fc.Car::Use();
	fc.Airplain::Use();
	//	� ���!
	//	� ����!
	//	�������� ���������� ������ FlyingCar
	//	�������� ���������� ������ Car
	//	�������� ���������� ������ Airplain
	return 0;
}*/
/*//��� ����� ��������� � ���. ��������� c++ ������. �������� �++ ��� ����������. ���� #113
class InterfaceBicycle // ���� ����� �������� ����������� ���� ����� ������������ ������, �� � ��� ��� ������ ����� ������������,����� ����� �����������
{
public:
	virtual void TwistTheWeel() = 0; // ����������� ������
	virtual void Ride() = 0;


};
class SimpeBicycle:public InterfaceBicycle //����� ��������� ����������
{
public:
	void TwistTheWeel() override // ���������� ����������� ������� InterfaceBicycle
	{
		cout << "�������� ����� TwistTheWeel() � ������ SimpeBicycle " << endl;
	}
	void Ride() override // override ����� ��� �������� ������������, ��� �� ���������� ������ ����� ������ ��������
	{
		cout << "�������� ����� Ride() � ������ SimpeBicycle " << endl;
	}
};

class SportBicycle :public InterfaceBicycle //����� ��������� ����������
{
public:
	void TwistTheWeel() override // ���������� ����������� ������� InterfaceBicycle
	{
		cout << "�������� ����� TwistTheWeel() � ������ SportBicycle " << endl;
	}
	void Ride() override // override ����� ��� �������� ������������, ��� �� ���������� ������ ����� ������ ��������
	{
		cout << "�������� ����� Ride() � ������ SportBicycle " << endl;
	}
};

class Human
{
public:
	void RideOn(InterfaceBicycle& bicycle) //�������� ������ �� ����� ������ ������� ������������� ��������� InterfaceBicycle
	{
		cout << "������ ����" << endl;
		bicycle.TwistTheWeel();
		cout << "�������!" << endl;
		bicycle.Ride();
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	Human rider;
	SimpeBicycle bicycle;
	SportBicycle gongavelik;
	rider.RideOn(bicycle);
	cout << endl;
	rider.RideOn(gongavelik);

}*/
/*//����������� ������������ c++. ����������� ������������ c++. �������� �++ ��� ����������. ���� #114
class Component
{
public:
	Component(string companyName)
	{
		cout << "constructor Component" << endl;
		this->companyName = companyName;
	}
	string companyName;
};
class GPU :public  Component
{
public:
	GPU(string companyName) :Component(companyName)
	{
		cout <<"constructor GPU"<< endl;
	}
};
class Memory :public Component
{
public:
	Memory(string companyName):Component(companyName)
	{
		cout << "constructor Memory" << endl;
	}

};
class GraphicCard:public GPU,public Memory
{
public:
	GraphicCard(string GPUcompanyName, string MemorycompanyName) :GPU(GPUcompanyName), Memory(MemorycompanyName)
	{
		cout << "constructor GraphicCard" << endl;
	}
};
///////////////////////////////
///////////////////////////////
class Character
{
public:
	Character()
	{
		cout << "�������� ����������� Character " << endl;
	}
	int HP; // ��������� ������������ ������������ �� ����� ������������ ���� HP, ��� �� ��� ���������� ��� ����.
};
class Orc:public virtual Character
{
public:
	Orc()
	{
		cout << "�������� ����������� Orc " << endl;
	}
};
class Warrior:public virtual Character
{
public:
	Warrior()
	{
		cout << "�������� ����������� Warrior " << endl;
	}
};
class OrcWarrior :public Orc , public Warrior
{
public:
	OrcWarrior()
	{
		cout << "�������� ����������� OrcWarrior " << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "rus");

	GraphicCard gc("AMD","Samsung");
	cout << "================================" << endl<<"================================" << endl;
	OrcWarrior Warlord;



}*/
/*//������ � ������� �++. ������ � ����. c++ ofstream. �������� �++ ��� ����������. ���� #115
int main()
{
	setlocale(LC_ALL, "rus");

	string path = "myFile.txt";
	ofstream fout;
	fout.open(path,ofstream::app); // ����� ������� ����������� open, �������� �������� ofstream ::app, ������� �� ��������� ������� open ������� ������ ������ ��� �������� �����, � ��������� �� � �����.
	fout.is_open(); // ��������� ���������� �� ������� ����

	if (!fout.is_open()) // ����������� ����� �������� �� ������� �����
	{
		cout << "���� ������� �� ����������" << endl;
	}
	else
	{
		for (int i = 0; i < 5; i++)
		{
			cout << "������� �����: " << endl;
			int a;
			cin >> a;
			fout << a;
			fout << "\n";
		}

	}
	fout.close(); //��������� ���� � ����������� �������

}*/
/*//������ � ������� �++. ������ �� ����� �++ ifstream. �������� �++ ��� ����������. ���� #116
int main()
{
	setlocale(LC_ALL, "rus");

	string path = "myFile.txt";

	ifstream fin;
	fin.open(path);
	if (!fin.is_open())
	{
		cout << "������" << endl;
	}
	else
	{
		cout << "�� ����!" << endl;
		//char ch;
		//while (fin.get(ch)) // ����� get ���������� bool, ���� ������� ���� �� ���������� true, ����� ������� ���������� �� ������ false, � ���� ����������.
		//{
		//	cout << ch ;
		//}
		string str;
		//while (!fin.eof())
		//{
		//	str = ""; // ��� ���
		//	fin >>str; // �� ���� ���� �������� �� ������� �������, ���� ������ ���� ������� �������� ��� ������
		//	cout << str << endl; // ����� ��������� ������ �� ����������������, ���� � ������ �������� ���������� str �������� ������
		//}

		while (!fin.eof())
		{
			str = "";
			getline(fin, str); // ���� ����� ����� ���������� �������, � ��������� �� ����� ������ ������ �� ����� ���������
			cout << str << endl;
		}
	}
	fin.close();

}*/
/*//������ ������� ������ � ���� �++. ������ ������� �� ����� c++ ��� ����������. ���� #117
class Point
{
public:
	Point()
	{
		x = y = z = 0;
	}
	Point(int x,int y, int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	int x;
	int y;
	int z;

	void print()
	{
		cout <<"x= "<< x <<"\ty= "<< y << "\tz= " << z << endl;
	}

};

int main()
{
	setlocale(LC_ALL, "rus");

	Point point(333,221,111);
	string path = "myFile.txt";
	ofstream fout;
	fout.open(path, ofstream::app);

	if (!fout.is_open())
	{
		cout << "���� ������� �� ����������" << endl;
	}
	else
	{
		cout << "���� ������!" << endl;
		fout.write((char*)&point, sizeof(Point));
	}

	fout.close();

	ifstream fin;
	fin.open(path);
	if (!fin.is_open())
	{
		cout << "���� �� ������(" << endl;

	}
	else
	{
		cout << "���� ������)" << endl;
		Point pnt; // ������� ������ ���� ����� ���������� ������ ������� �������.
		while (fin.read((char*)&pnt, sizeof(Point)))
		{
			pnt.print();
		}

	}
	fin.close();
}*/
/*//������ � ������ � ���� �++ ��������� ����� fstream c++. �������� �++ ��� ����������. ���� #118
int main()
{
	setlocale(LC_ALL, "rus");
	string path = "myFile.txt";
	fstream fs;
	fs.open(path,fstream::in|fstream::out|fstream::app); // �� �������, ������, ���������� ����, ����� ��-������� ���.
	if (!fs.is_open())
	{
		cout << "���� �� ������!" << endl;
	}
	else
	{
		cout << "���� ������" << endl;
		string msg;
		int value;
		cout << "������� 1 ��� ������ � ����: " << endl;
		cout << "������� 2 ��� ������ �� �����: " << endl;
		cin >> value;
		cout << "============================" << endl << "============================" << endl;
		switch (value)
		{
		default:
			cout << "�����������, �� �� ����� D:" << endl;
			break;
		case 1:
			cout << "������� ��������� ��� ������ � ���� 'myFile.txt'" << endl;
			SetConsoleCP(1251);
			cin >> msg;
			fs << msg << "\n"; // ����� ������ fs �������� ��������� � ����
			SetConsoleCP(866);
			break;
		case 2:
			cout << "������ ������ �� ����� 'myFile.txt'" << endl;
			while (!fs.eof())
			{
				msg = ""; // �������� ���������� ��������� ����� �� �������� ������ ����������
				fs >> msg; // �� ������������ getline ��� �����, ������� � ��� �� �����
				// �� fs � ���������� msg ������ ��������� ������� ���������� �������
				cout << msg << endl;
			}
			break;
		}
	}
	fs.close();
	system("pause");
	return 0;
}*/
/*//��������� ���� ����� � ���� c++. ���������� ����������. �������� �++ ��� ����������. ���� #119
class Point
{
public:


	Point()
	{
		x = y = z = 0;
	}
	Point(int x, int y, int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
private:
	int x;
	int y;
	int z;
	friend ostream& operator<<(ostream& os, const Point& point);
	friend  istream& operator >>(istream& is, Point& point);

};
ostream& operator<<(ostream& os, const Point& point)
{
	os << point.x << " " << point.y << " " << point.z;
	return os;
}
istream& operator >>(istream& is, Point& point)
{
	is >> point.x >> point.y >> point.z;
	return is;
}

int main()
{
	setlocale(LC_ALL, "rus");

	string path = "myFile.txt";
	Point omega(1, 2, 3);

	//cout << omega << endl; // ����� ��������� ���������� <<

	fstream fs;
	fs.open(path, fstream::in | fstream::out | fstream::app);
	if (!fs.is_open())
	{
		cout << "Error, lay down your armsD:" << endl;
	}
	else
	{
		cout << "Congratulations, file is open" << endl;
		//fs << omega << "\n"; // � ������� �������������� << ��� �� ��� � ����� � �����, � ��� ���������� ������ � ����
		while (!fs.eof())
		{
			Point alpha;
			fs >> alpha;
			if (fs.eof())
			{
				break;
			}
			cout << alpha << endl;
		}

	}
	fs.close();


}*/
/*//�++ try catch. ��������� ���������� �++. try catch ��� ���. �������� �++ ��� ����������. ���� #120
int main()
{
	setlocale(LC_ALL, "rus");
	string path = "myFile.tt";

	ifstream fin; // * ����� �������� ���������� ���������� ����� ����� ������.
	fin.exceptions(ifstream::badbit | ifstream::failbit); // ��� ���� �� �����/�� �������� �������� ������� try/catch ���.. ��� ��� ������ ��������� � �������� � ifstream, ���� ������� � ifstream
	// ���������� ����������� ��� �������, ��� �� try/catch �������� � ��� �� ���� ���� ifstream
	try // ������� �� ����� �������� ���� �� ������� exceprion � ����������� ����� try
	{
		cout << "������� ������� ����!" << endl;
		fin.open(path); // ���� �� ���� ������� ����� ������ �� ���, �� �� ��������� ������� ���� �� �� ������� *
		cout << "���� ������� ������!" << endl; // ��� �� ����������
	}
	catch (const ifstream::failure& ex) // ������� ����
	{
		cout << ex.what() << endl;
		cout << ex.code() << endl;
		cout << "������" << endl;
	}
	fin.close();
}*/
/*//��������� ���������� �++ ������. throw c++ ������. �������� �++ ��� ����������. ���� #121

void Foo(int value)
{
	if (value<0)
	{
		cout << "������ ����� � ����, ������� � Catch" << endl;
		throw value;
	}
	cout << "���������� " << value << endl;
}
void Foo2(int value)
{
	if (value < 0)
	{
		throw "����� ������ 0";
	}
	cout << "���������� " << value << endl;
}
void Foo3(int value)
{
	if (value<0)
	{
		throw exception (" ����������, �� ��������������� ����������");
	}

}


int main()
{
	setlocale(LC_ALL, "rus");



	try
	{
		cout << "������� ��������� ������� Foo" << endl;
		Foo(-55);
		cout << "������� Foo ���������!" << endl;
	}
	catch (const int ex)
	{
		cout << "�� ������� " << ex << endl;
	}

	try
	{
		Foo2(-10);
	}
	catch (const char*ex)
	{
		cout << "�� ������� " << ex << endl;
	}

	try
	{
		Foo3(-29);
	}
	catch (const exception& ex)
	{
		cout << "�� �������" << ex.what() << endl;
	}

}*/
/*//��������� ������ catch. ��������� ���������� �++. �������� �++ ��� ����������. ���� #122

void Foo(int value)
{
	if (value < 0)
	{
		throw ", ������� value < 0 �� ���������";
	}
	if (value == 0)
	{
		throw exception(", ����� = 0");
	}
	if (value == 1)
	{
		throw 1;
	}
}


int main()
{
	setlocale(LC_ALL, "rus");

	try
	{
		Foo(1);
	}
	catch (exception& ex)
	{
		cout << "�� ������� ���� 1" << ex.what() << endl;
	}
	catch (const char* ex) // ��� ��� �� �������� ���� �������, � ������ ��� ������ �����, ����� �������� ��������� �� ���
	{
		cout << "�� ������� ���� 2" << ex << endl; // ��� ��� �� ����� �� ������ � �������, �� ����� ������ � ����� �������
	}
	catch (...) // ����� ���� ����� ������ � ����� �����, ��� ��� ����� ���� ������� ������ ����� �������� �� �����
	{
		cout << "���-�� ����� �� ���" << endl; // ����� ������ ���������� �� ��������� ����, ���� ������� �� �� ������ ����� ����� ��� ���� ������. �� �� ����� ����� �����
	}

}*/
/*//���� ����� exception c++. �������� ������������ ������ ����������. �++ ��� ����������. ���� #123

class myException :public exception
{
public:
	myException(const char* msg,int DataState) :exception(msg)
	{
		this->DataState = DataState;
	}
	int GetDataState()
	{
		return DataState;
	}
private:
	int DataState;
};

void Foo(int value)
{
	if (value < 0)
	{
		throw exception(", ����� = 0");
	}
	if (value == 1)
	{
		throw myException("����� ����� 1",value);
	}
	cout << "���������� = " << value << endl;
}


int main()
{
	setlocale(LC_ALL, "rus");

	try
	{
		Foo(1);
	}
	catch (myException& ex)
	{
		cout << "myExceprion()" << endl;
		cout << "������� ���� 1 " << ex.what() << endl;
		cout << "��������� ������ " << ex.GetDataState() << endl << endl;
	}

	try
	{
		Foo(1);
	}
	catch (exception& ex)
	{
		cout << "exception()" << endl;
		cout << "������� ���� 1 " << ex.what() << endl;

	}

}*/
/*//������������� ��� enum �++. �������� �++ ��� ����������. ���� #124
enum Speed
{
	MIN=150,
	RECOMEND=600,
	MAX=800
};
class PC
{
public:
	enum PCstate
	{
		ON,
		OFF,
		SLEEP
	};

	PCstate GetState()
	{
		return State;
	}
	void SetState(PCstate State)
	{
		this->State = State;
	}
private:
	PCstate State;
};

int main()
{
	setlocale(LC_ALL, "rus");

	PC pc;
	pc.SetState(PC::PCstate::SLEEP);

	switch (pc.GetState())
	{
	case PC::PCstate::ON:
		cout << "PC in ON" << endl;
		break;
	case PC::PCstate::OFF:
		cout << "PC in OFF" << endl;
		break;
	case PC::PCstate::SLEEP:
		cout << "PC in SLEEP" << endl;
		break;
	}
	//////////SPEEED//////////////////
	Speed sp = Speed::MAX;
	cout << sp << endl;


}*/
/*//������������ ���� �++. namespace c++ ��� ���. �������� �++ ��� ����������. ���� #125
namespace secondNS
{
	void foo()
	{
		cout << "foo() secondNS" << endl;
	}
}
namespace thidNS
{
	namespace secondNS
	{
		void foo()
		{
			cout << "foo() secondNS in thidNS" << endl;
		}

	}
}
int main()
{
	setlocale(LC_ALL, "rus");
	secondNS::foo();
	thidNS::secondNS::foo();

}*/
/*//������� ������� �++ �������. ���������� ������. �������� �++ ��� ����������. ���� #126
class Point
{
public:
	Point()
	{
		x = y = z = 0;
	}
	Point(int x,int y,int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

private:
	int x;
	int y;
	int z;

};


template <typename T,typename T2>
class MyClass
{
public:

	MyClass(T value, T2 value2)
	{
		this->value = value;
		this->value2 = value2;
	}
	void DataTypeSize()
	{
		cout <<"value= "<< sizeof(value)<<" value2= "<<sizeof(value2) << endl;
	}


private:
	T value;
	T2 value2;
};

int main()
{
	setlocale(LC_ALL, "rus");
	int V = 2;
	Point A;
	MyClass<int,Point>C(V,A);
	C.DataTypeSize();

	int B = 2;
	int N=31;
	MyClass<int,int>D(N,B);
	D.DataTypeSize();


}*/
/*//������������ ��������� �������. �������� �++ ��� ����������. ���� #127
class Point
{
public:
	Point()
	{
		x = y = z = 0;
	}
	Point(int x, int y, int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

private:
	int x;
	int y;
	int z;

};

template <class T>
class TypeSize
{
public:

	TypeSize(T value)
	{
		this->value = value;

	}
	void DataTypeSize()
	{
		cout << "value= " << sizeof(value)<<" bit" << endl;
	}


protected:
	T value;

};
template<class T>
class TypeInfo :public TypeSize<T>
{
public:
	TypeInfo(T value):TypeSize<T> (value)
	{

	}
	void ShowTypeId()
	{
		cout << "�������� ���� " << typeid(this->value).name() << endl;
	}

private:

};

int main()
{
	setlocale(LC_ALL, "rus");

	int a = 2;
	TypeInfo<int>b(a);
	b.DataTypeSize();
	b.ShowTypeId();

	Point c;
	TypeInfo<Point>d(c);
	d.DataTypeSize();
	d.ShowTypeId();
}*/
/*//������������� ������� ������. �������� �++ ��� ����������. ���� #128
template<typename T>
class Printer
{
public:
	void Show(T value)
	{
		cout << value << endl;
	}


protected:

};



template<>
class Printer<string>
{
public:
	void Show(string value)
	{
		cout<<"___"<< value <<"___"<< endl;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");

	Printer<string> p;
	p.Show("Hello World");
}*/
/*//��������� � C++ | struct C++. ������� ����� ���������� � �������. �������� �++ ��� ����������.#129
template<typename T>
class SmartPointer
{
public:
	SmartPointer(T *ptr)
	{
		this->ptr = ptr;
		cout << "Constructor" << endl;
	}
	~SmartPointer()
	{
		delete ptr;
		cout << "Destructor" << endl;
	}
	T& operator*()
	{
		return* ptr;
	}
private:
	T* ptr;

};
int main()
{
	SmartPointer<int> ptr = new int(5);
	cout <<* ptr << endl;
	*ptr = 111;
	cout <<"change data "<< *ptr << endl;
}*/
/*//auto_ptr | unique_ptr | shared_ptr | ����� ���������. �������� �++ ��� ����������. ���� #131
int main()
{

	auto_ptr<int> ap1(new int(5));
	auto_ptr<int>ap2(ap1); // auto_ptr ������ ������ ap1, �������� �� � ap2 , ������ ����� ������ � ap2

	unique_ptr<int> up1(new int(5));
	//unique_ptr<int> up2(up1); ��� ��������� �� ����������, ���������� ����� unique_ptr
	unique_ptr<int> up2;
	up2 = move(up1); // ���������� ����� move, �� �������� ����� ����� �� ��� � auto_ptr, ������ ����� ������ � up2, � up1 ������ ��������.
	up2.swap(up1); // �������� ������ �������, �� ���� ��������� ����� �� ��� � ����
	int* p = up1.get(); // ������ ���������
	int* p = new int(6);
	unique_ptr<int> p1(p);
	p1.reset(); //�������� ������ *p
	p1.release() // �������� ��������� p1






}*/
/*//������������ ������ � ����� ���������. �������� �++ ��� ����������. ���� #132
int main()
{
	int SIZE;
	cin>> SIZE; // ��� ��� ������ ������������ �� ����� ������ ������ ���������� �����.
	//int* arr = new int [SIZE] {1, 5, 21, 11, 3}; // ����� ������� ������
	//shared_ptr<int[]>ptr(arr); // � �������� ��������� �� ���� � ����������� shared_ptr
	shared_ptr<int[]>ptr(new int [SIZE] {}); // ���� ����� ����� �������� � ����������� ������������ ������ ��� ���.
	for (int i = 0; i < SIZE; i++)
	{
		ptr[i] = rand() % 10;
		cout << ptr[i] << endl;
	}
	//shared_ptr<shared_ptr<int[]>[]> arr(new shared_ptr<int[]>[SIZE]); ����� ����������, �� ���������� ��� ��� ������ �������� ���������� ������������� �������.
	//shared_ptr<int[][SIZE]> ptr(new int[SIZE][SIZE]);


}*/
/*//���������� ������������ ������ c++ ����� 1 | ���� #133
  //���������� ������������ ������ c++ ����� 2 | ���� #134
  //���������� ������������ ������ c++ ����� 3 | ���� #135
template<typename T>
class List // � ��� ����������� ������, �������� ����� ����������������� � ���������� ������������ ������
{
public:
	List();
	~List();
	void pop_front();
	void push_back(T data);
	void push_front(T data);
	void insert(T value, int index);
	void removeAt(int index);
	void pop_back();
	void clear();
	T& operator[](const int index);
	int GetSize()
	{
		return Size;
	}


private:

	template<typename T> // ����� Node ������ ���� ��������� ��� ������ � ������ ������ ������, ��� ��� � ��� ��� ���� � ���� �� ��� �������� ������.
	class Node // �����- ����. �� ������ ����������������� �� �����, � ��� ����� ������ ����� List
	{
	public:
		Node* pNext; // ��� ���� �����, ����� ��������� �� ��������� Node
		T data; // ������
		// nullptr ����� ���� �������� ��������� ������� ������ ����� ����� �� �������� �� nullptr (�������� �� ���������) ������ ������ �� ���������
		// T data= T() ��� ���������� �������� �� �������� � ��� ��� ��� ������, ����� �� ���� ������
		Node(T data = T(), Node* pNext = nullptr) // ����������� ��������� ������ � ��������� �� ��������� ������� (Node)
		{
			this->data = data; // ����������� �������� ��������� ��������������� ����� ������ Node
			this->pNext = pNext;
		}
	};
	int Size; // ���� ���������� ��������, �������� ������� Size+1, ������� Size -1.
	Node<T>* head; // ������ ���� Node, ���� � ��� ������ � ������ ������ ������, ������ ���� ���������� ��������� ��� �������� ������������ ������ ����� ���������� � ������������ ������



};

template<typename T>
List<T>::List()
{
	Size = 0;
	head = nullptr;
}

template<typename T>
List<T>::~List()
{
	clear();
}

template<typename T>
void List<T>::pop_front() // ������� ������ ������� � ������ ��������� �� ��� ������� head'om
{
	Node<T>* temp = head; // ��������� ������ temp (���������) ��� ��� head ���� ���������, ������ ����� head (0 ������ ������ ��� ��������)
	head = head->pNext; // � ���� ����������� ����� ���������� ��������
	delete temp; // ������� ����, ������ �� ��� ��� ��������
	Size--;


}

template<typename T>
void List<T>::push_back(T data) // ����� �� ���������� stl, ��������� ������� � ����� ������ (��������� ������)
{
	//������� ������ ��������� �� ������ �� � ��� �������
	if (head == nullptr) // ���� ���� ����� ������ �� �� ����� ��������� �� null
	{
		head = new Node<T>(data); // ���� ������� ������, �� �� ������ ������� ��� � �������� ��� � ����������� ���� ����� ������
	}
	else // ���� ������ �� ������
	{
		Node<T>* current = this->head; //��������� ����������, ��������� �� ����, ����������� �������� ���������
		while (current->pNext != nullptr) // ��������� �� ��� ��������� ���� pNext ������ �������� �������� (������� Node)
		{
			current = current->pNext; // ���� �� ����� nullptr �� �  ���� current ����� ����������� ��������� �� ��������� ������� �������
			// � ��� �� ��� ��� ���� �� ������ �� Node � ������� ��������� pNext ��������� �� nullptr
		}
		current->pNext = new Node<T>(data); // ����� ����� ������� � ���������� �� nullptr , ������� ����� ������ ���� Node � ��������� ����� ������ nullptr

	}
	Size++;

}

template<typename T>
void List<T>::push_front(T data) //���������� �������� � ������ ������
{
	head = new Node<T>(data,head);
	Size++;
}

template<typename T>
void List<T>::insert(T data, int index) // ��������� ������� ��� ������ ��������, ���� � ����� �����
{
	if (index==0) // ���� ������ 0 �� ���������� ������� � ������. ����� ������ ����� �������
	{
		push_front(data);
	}
	else //
	{
		Node<T>* previous = this->head; // ������� ��������� ��������� previous � ����������� ��� �������� head
		for (int i = 0; i < index - 1; i++) // ����, ������ -1 ��� ��� �������� � ���� ����, ������� � 3 �������, �� ����� ��������� � 4�, ��� ��� -1.
		{// ���� ����� ��� ���� ����� ����� ������� � �������� ��������������� ������� ��������� ����, ����� ��������� ���������� �� ����� �������.
			//���� 3 ������� �� 5, �� ������� ����� ������� 4, ������ ��� �������� ����� 5, ����� ������� 3, ��� ��� �� ��� ����� 5, ����� ����������� ����� ������� �������� 3 �� 5
			// �� ����� ������� 4, ������ ���� ����� ������� � 3 � 4 �������� �� 5, ����� 3 ������ �������� �� 4 � ���, ��� ����. �� ������ ����� �� ��� ���������.
			previous = previous->pNext;
		}
		Node<T>* newNode = new Node<T>(data, previous->pNext);
		previous->pNext = newNode;
		//previous->pNext = new Node<T>(data, previous->pNext); //����� ������ ��� ���, �� ��� ���� ��� ��� ����� � ��������� ����������
		Size++;


	}



}

template<typename T>
void List<T>::removeAt(int index) // ������� ����� ������� ������� ��� ����������� �� ������������ ������ �� ���������� �������.
{
	if (index==0) // ���� ������ 0 �� ������� ����� ������ ������� �� ���������
	{
		pop_front();
	}
	else
	{
		Node<T>* previous = this->head;
		for (int i = 0; i < index - 1; i++) //����� ����������� ��������
		{
			previous = previous->pNext;
		}
		Node<T>* toDelete = previous->pNext; // ��� ������ �������� ������� �� ����� ������� ������������� �� ��������� ���������� toDelete, ����� �� �������� ���
		//���� 4 ��������� �� 5, ������ 4 �������� � toDelete, ��� ��� ������ 4�� �������
		previous->pNext = toDelete->pNext; // � ��� ������ ������� ��������� �� ���������� ������� �� ����� �������, �������� ������ �� ������� , �� ������� �������� ��������� �������. :D
		// ����� 4 ���� 3, � 3 �������� ����� ��������� 4, ����� 3 ��������� �� 5
		delete toDelete; // � ��� ������ ������� ���������� toDelete, ��� ��� ��� ������� ������ ����� � 3�� �� 4��, � �� 4 �������.
		Size--; // ��������� ������� Size, ��� ��� ���� ������ �� �������
	}


}

template<typename T>
void List<T>::pop_back() // �������� ���������� ��������
{
	removeAt(Size - 1); // ��������� ��� ��������
}

template<typename T>
void List<T>::clear() // ����� �������
{
	while (Size) // ����� Size ��������� �� 0, ���� ���������� �������� ��� ��� �� ��������� true=1 false =0;
	{
		pop_front(); // ����� ������� ������� 1� ������� � ������ ��������� �� ��� ������� ������, ����� ������� ���� Size �� ������ 0, ������ ��� �������� ���������������
	}


}

template<typename T>
T& List<T>::operator[](const int index) // ���������� ��������� [] ��� ���� ����� ������� ������ �� �������, ��� � �������.
{
	int counter = 0; // ���������� �������
	Node<T>* current = this->head; // � ��������� � ������� �� ���������, ����������� ������� �������� head
	while (current != nullptr) // ���� ����, ���� ������� �� ������
	{
		if (counter == index) // �������� ��, ���� ������� ����� �������������� �������, �������� ��������� ������ �� ������� 2
		{
			return current->data; // �� ���������� ������ �� ����� �������
		}
		current = current->pNext; // ���� �� ��������� �������� ����, �� ���������� ������ ����������� ����� ���������� ��������
		counter++; //�������� ������� �� 1
	}

}

int main()
{
	setlocale(LC_ALL, "rus");

	List<int> lst;
	lst.push_front(5);
	lst.push_front(7);
	lst.push_front(111);
	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}

	cout << endl << "Insert" << endl << endl;
	lst.insert(99, 1);
	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}

	cout << endl << "Insert" << endl << endl;
	lst.insert(771, 3);
	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}

	cout << endl << "removeAt" << endl << endl;
	lst.removeAt(1);
	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}

	cout << endl << "pop_back" << endl << endl;
	lst.pop_back();
	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}
	//lst.push_back(55);
	//lst.push_back(11);
	//lst.push_back(2);
	/////////////////////////////////////////////////////////////
	//int numbersCount; // ���������� ��� ��� ����������� ������
	//cin >> numbersCount; // ������ ���� ������������ �� ���������� ���������
	//for (int i = 0; i < numbersCount; i++) // ���� �� ���������� ���������� ������� ������������ ������
	//{
	//	lst.push_back(rand() % 10);
	//}
	////////////////////////////////////////////////////////////
	//for (int i = 0; i < lst.GetSize(); i++) // ���� �� ����� ��������� � ��������
	//{
	//	cout << lst[i] << endl;
	//}
	//cout << endl << "��������� � ������ " << lst.GetSize() << endl << "��������� ����� pop_front " << endl << endl;
	//lst.pop_front();
	//for (int i = 0; i < lst.GetSize(); i++)
	//{
	//	cout << lst[i] << endl;
	//}
	//cout << endl << "��������� � ������ " << lst.GetSize() << endl;
	//////////////////////////////////////////////////////////////////

	////////////////////////////////////////////////////////////////////
	//cout << endl << "��������� � ������ " << lst.GetSize() << endl << "��������� ����� clear " << endl << endl;
	//lst.clear();
	//cout << endl << "��������� � ������ " << lst.GetSize() << endl;
	////////////////////////////////////////////////////////////////////


	return 0;
}*/
/*//vector | ���������� ����������� �������� (stl) | ����� | C++ | #1

int main()
{
	setlocale(LC_ALL, "rus");

	//vector<int> myVector = {4,11,441,231,8797}; ��� �� ��� � � ������������ ������� ����� ����� ���������������� �������� � �������

	vector<int> myVector; // ���� �������� ����� push_back();
	myVector.push_back(23);
	myVector.push_back(51);
	myVector.push_back(7);
	myVector.push_back(5122);
	myVector.push_back(1);
	myVector.push_back(7134);
	///////////////////////////////////////////////////
	cout << "���������� ��������� � �������= " << myVector.size() << endl;
	cout << "����������� ��������� � �������= " << myVector.capacity() << endl;
	cout << "push_back() method use :D +1 element" << endl;
	myVector.push_back(33);
	cout << "���������� ��������� � �������= " << myVector.size() << endl;
	cout << "����������� ��������� � �������= " << myVector.capacity() << endl;
	cout << ".reserve method use" << endl;
	myVector.reserve(100);////////////////////
	cout << "���������� ��������� � �������= " << myVector.size() << endl;
	cout << "����������� ��������� � �������= " << myVector.capacity() << endl;
	myVector.shrink_to_fit();///////////////////
	cout << "����������� �� ������������ ������������ ������" << endl;
	cout << "����������� ��������� � �������= " <<myVector.capacity()<< endl;///////////////////////
	myVector[0] = 32;/////////////////
	myVector.at(1) = 15;//////////////////
	for (int i = 0; i < myVector.size(); i++)////////////////////////
	{
		cout << myVector[i] << "\t";
	}
	cout << endl << endl;
	myVector.pop_back();////////////////////////////////
	cout << "pop_back() ���������� ��������� � �������= " << myVector.size() << endl;
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << "\t";
	}
	cout <<endl<< "==================================" << endl;
	myVector.clear();///////////////////////////
	cout << "clear() ���������� ��������� � �������= " << myVector.size() << endl;
	cout << "try/catch used: " << endl;
	try//////////////////////////////////
	{
		myVector.at(0); // ����� �������� ���� ��������� .clear() ������ � ���� ��� ������ ������
	}
	catch (const std::out_of_range& ex)////////////////////////////
	{
		cout << ex.what() << endl << endl;
	}
	cout << "===============================================" << endl;
	vector<int> myVector1(10,91);////////////////////////
	cout << "����������(.size) ��������� � �������: " << myVector1.size() << endl;
	cout << "�����������(.capacity) ��������� � �������: " << myVector1.capacity() << endl;
	for (int i = 0; i < myVector1.size(); i++)
	{
		cout << myVector1[i] << endl;
	}
	myVector1.resize(3);///////////////
	cout << "����������(.size) ��������� � �������: " << myVector1.size() << endl;
	cout << "�����������(.capacity) ��������� � �������: " << myVector1.capacity() << endl;
	for (int i = 0; i < myVector1.size(); i++)
	{
		cout << myVector1[i] << endl;
	}



}*/
/*//LIST | STL C++ | ���������� ����������� �������� (stl) | ����� | C++ | #3
template<typename T>
void PrintList(const list<T> &lst)
{ // ���������� ��������� ����� ���
	for (auto i = lst.cbegin(); i != lst.cend(); ++i) // cbegin and cend ���������� ����������� ��������, �������� ����������� � ������� ����������� ����������
	{
		cout << *i << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");

	//list<int> myList; // ������� ������ ������ list
	list<int> myList = {213,21,76,945}; //��� ���� �������� ��� � � ������������ �������, �������.
	list<int>myList2 = { 122,331,532 };
	myList.push_back(5); // ����� ��������� ������� � ����� ������
	myList.push_front(121);// ����� ��������� ������� � ������ ������, � ������ ������ �� ����� ����� (5)

	//list<int>::iterator it = myList.begin(); // ������� ���������� iterator �������� � it, ����������� �������� begin ������� ������ ���������,� ���������� �������� ������ ������� �������� ������ list
	//auto it = myList.begin(); ����� ������������ �������� ����� auto ��� ���������� ����, ��� ���� ����� ��������
	//cout << *it << endl; // ������� � ������� �������������  iterator
	cout << "========================================" << endl;
	PrintList(myList);
	cout << "��������� ���������� myList.sort()" << endl;
	myList.sort(); // ��������� �������� �� ����������� � �����������
	PrintList(myList);
	cout << "��������� ������ pop_back(); pop_front();" << endl;
	myList.pop_back();
	myList.pop_front();
	PrintList(myList);
	cout <<".size() ���������� ��������� = "<< myList.size() << endl;
	cout << "����� insert()" << endl;
	auto it = myList.begin();
	//it++; // ����� ����������� ���������
	advance(it, 3);
	myList.insert(it, 111);
	PrintList(myList);
	cout << "remove" << endl;
	myList.remove(111);
	PrintList(myList);
	cout << "����� assign" << endl;
	myList.assign(myList2.begin(),myList2.end());
	PrintList(myList);

	/////////////////////////////////////////////////////////////////
	//auto i = myList.begin(); - ����������� � i �������� ������� ��������� �� ������ ������� ���������
	//i != myList.end(); �������� ����� �� ��� ���, ���� ������� �������� �� ����� ��������� ������� ��������� �� ������� ����������� �� ������� list
	//for (auto i = myList.begin(); i != myList.end(); i++)
	//{
	//	cout << *i << endl; �� �� ����� �� ������ ����� ���������� ���������, ����� ������� ����� PrintList
	//}
	////////////////////////////////////////////////////////////////////
}*/
/*//�������� ����� auto | �������� �++ ��� ����������. ���� #136
int main()
{
	setlocale(LC_ALL, "rus");

	auto a = 1;
	auto b = 3.21;
	auto c = "string";

	vector<int> myVector = { 132,11,6,73 };
	vector<int>::iterator it = myVector.begin();
	//std::vector<int>::iterator it = myVector.begin(); ��� ������������ ���� ������ ��� ������
	auto it2 = myVector.begin(); //��� ������ ������ ����, ��� ���������� ����

	//for (std::vector<int>::iterator it = myVector.begin();it != myVector.end(); it++) ���� ��� ��� std and auto
	for (auto it = myVector.begin(); it != myVector.end(); it++)
	{
		cout << *it << endl;
	}



}*/
/*//��������� STL | ���������� ����������� �������� (stl) | ����� | C++ | #2
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int arr[] = { 3,6,9 };
	cout << arr[1] << endl;
	cout << *(arr + 1) << endl; // ���� ����� ��� � ����, � 0 �������� ���������� 1 � ��������������� ���������.
	cout << "=================================================================" << endl;
	vector<int> myVector = { 33,1,64,777,78,4 };
	vector<int>::iterator it;
	it = myVector.begin();
	it += 3;//����� ������������ ���������� ����������.
	it++;
	it -= 2;
	cout << *it << endl;
	cout << "=====================const_iterator===========================" << endl;
	for (vector<int>::const_iterator i = myVector.cbegin(); i != myVector.cend(); i++) // ����������� �������� ��� ������������� �������� ������, ������ ����������
	{
		cout << *i << endl;
	}
	//cbegin, cend ���������� ����������� ��������
	cout << "====================reverse_iterator=============================" << endl;
	for (vector<int>::reverse_iterator i = myVector.rbegin(); i != myVector.rend(); i++)
	{
		cout << *i << endl;
	}
	cout << "==================================================================" << endl;
	vector<int> myVector2 = { 312,41,85,48,2,478,1368 };
	vector<int>::iterator it2;
	it2 = myVector2.begin();
	cout << *it2 << endl;
	advance(it2, 6);
	cout << *it2 << endl;
	cout << "====================================================================" << endl;

	vector<int> myVector3 = {45,687,1387,3676,45,8,7,12,36};
	vector<int>::iterator it3;
	it3 = myVector3.begin(); // it3=myVector.end(); ��� �� �������� � �������� ����� ��������, � �����
	for (vector<int>::iterator i = myVector3.begin(); i != myVector3.end(); i++)
	{
		cout << *i << endl;
	}
	cout << endl << "insert" << endl << endl;

	advance(it3, 3);
	myVector3.insert(it3, 999); // ������� ������ �������� ����� ������� � �������� ���� � ������ ���� � ����� �������, � ����������� �� ���� ��� ������� ����, ���� � ������� advance ������� �� �������

	for (vector<int>::iterator i = myVector3.begin(); i != myVector3.end(); i++)
	{
		cout << *i << endl;
	}
	cout << "========================================================================" << endl;

	vector<int> myVector4 = { 23,2451,331,1,613 };
	vector<int>::iterator it4;
	it4 = myVector4.begin();
	for (vector<int>::iterator i = myVector4.begin(); i != myVector4.end(); i++)
	{
		cout << *i << endl;
	}
	cout << endl << "erase" << endl << endl;

	//advance(it4, 3);// ��� �������� �������� �� 3 ���� ������, ������� ��� �������� 3 ����� ������, ��� �������
	//myVector4.erase(it4);  // ����� ������� ������� �� ������� ��������� ���������, ���� �� ��������� ��� 0 ������� begin()
	myVector4.erase(it4,it4+3); // � erase ���� ����������, ��� �� ������ �������� � 0 �� 3
	for (vector<int>::iterator i = myVector4.begin(); i != myVector4.end(); i++)
	{
		cout << *i << endl;
	}
}*/
/*//���� foreach C++ | range-based ����� | �������� �++ ��� ����������. ���� #137
template<typename T>
void PrintList(const list<T>lst)
{
	for (auto i = lst.cbegin(); i != lst.cend(); ++i)
	{
		cout << *i << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");

	//int arr[] = { 54,151,631,3,12 };

	//for (int var : arr) // ��� ���������� ������� �� ������� ���������, ��� ��������� �������� �������� � ������� �� ��������
	//{
	//	var = -1; // ����� �������� -1, �� ������ � ������� ��������� �� ���������
	//	cout << var << endl;
	//}

	//for (auto& var1 : arr) // ��� ����������� �� ������, ��� ��������� ���������, �������� ��������� � � �������.
	//{
	//	var1 = -1; // ��� ��������� ������ � ����� �������
	//	cout << var1 << endl;
	//}

	//for (const auto& var2 : arr) // ��� ������������ �� ������, const ����� ������� ���� �� ��������� ���������
	//{
	//	//var2 = -1; �� ��������� ��� ������
	//	cout << var2 << endl;
	//}


	cout << "===============================================" << endl;

	list<int>myList = { 31,2315,11,28,45,3 };

	for (const auto& var : myList)
	{
		cout << var << endl;
	}


}*/
/*//forward list stl c++ | ���������� ����������� �������� (stl) | ����� | C++ | #5
int main()
{
	setlocale(LC_ALL, "ru");

	forward_list<int> fl = {131,231,35};

	fl.push_front(1); // ��������� ������� � ������ ������
	fl.push_front(4); // ���� ����� ��� � ������, ������ 4 ����� ��� ����� 1.

	forward_list<int>::iterator it = fl.begin();

	cout << *it << endl;
	it++;
	cout << *it << endl;



	for (auto el : fl)
	{
		cout << el << endl;
	}

}*/
/*//array STL C++ | | ���������� ����������� �������� (stl) | ����� | C++ | #6
int main()
{
	setlocale(LC_ALL, "rus");

	array<int, 4> arr = { 6,252,61,537 };
	//cout << arr[0] << endl;

	try
	{
		cout << arr.at(5) << endl;
	}
	catch (const std::exception&ex)
	{
		cout << ex.what() << endl;
	}
	cout << "============================" << endl;
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << endl;
	}
	cout << "=================================" << endl;
	arr.fill(-1);
	for (auto el : arr)
	{
		cout << el << endl;
	}


}*/
/*//���������� STL � ��������� ���������. | ���������� ����������� �������� (stl) | ����� | C++ | #7
int main()
{
	setlocale(LC_ALL, "rus");

	array<int, 4> arr = { 1,4122,858,9 };
	array<int, 4> arr2 = { 1,4122,858,9 };

	bool result = arr == arr2;
	cout << result << endl;
	///////////////////
	//1=true, 0=false//


}*/
/*//deque stl c++ | ���������� ����������� �������� (stl) | ����� | C++ | #8
int main()
{
	setlocale(LC_ALL, "rus");

	deque<int> dq = { 1,9,94 };

	deque<int>::iterator it = dq.begin();

	cout << *it << endl;

	for (auto el : dq)
	{
		cout << el << endl;
	}

}*/
/*//SET | MULTISET | ������������� ���������� | ���������� ����������� �������� (stl) | ����� | C++ #9
int main()
{
	setlocale(LC_ALL, "rus");

	set<int> mySet;
	mySet.insert(5);
	mySet.insert(1);
	mySet.insert(12);
	mySet.insert(4);
	mySet.insert(-1);

	for (auto& var : mySet)
	{
		cout << var << endl;
	}
	cout << "======================" << endl;
	set<int>mySet2;
	for (int i = 0; i < 20; i++)
	{
		mySet2.insert(rand() % 10);
	}

	for (auto& var2 : mySet2)
	{
		cout << var2 << endl;
	}
	cout << "===================" << endl;

	set<int>mySet3 = { 55,1,4,37,661,-3 };
	//int value;
	//cout << "������� ����� ��� ������: ";
	//cin >> value;
	int value = 37;
	if (mySet3.find(value) != mySet3.end())
	{
		cout << "����� " << value << " �������! " << endl;
	}
	else
	{
		cout << "����� " << value << " �� �������! " << endl;
	}
	cout << "=====================================================" << endl;

	multiset<int> myMultiset = { 0,1,1,64,32,16,27 };
	myMultiset.lower_bound(1);
	myMultiset.upper_bound(1);
	for (auto &item:myMultiset)
	{
		cout << item << endl;
	}

}*/
/*//typedef c++ ��� ��� | �������� �++ ��� ����������. ���� #138
int main()
{
	setlocale(LC_ALL, "rus");
	//��� ������ ������� ������ ����� #include
	//typedef std::vector <int> int_vector;
	//���� � ��� �� ���������� ������������ ���� std, ����� ��������� ������
	//����� �������������� ������� �������� ����� typedef, ������ ���� ���������.

	//std::vector<int> myVector; ������ ����� �� ������ ���, ����� ��������:
	//int_vector myVector;
	for (size_t i = 0; i < length; i++)
	{

	}

}*/
/*//MAP | MULTIMAP | ������������� ���������� | ���������� ����������� �������� (stl) | ����� | C++ #10
int main()
{
	setlocale(LC_ALL, "rus");

	pair<int, string> p(1, "�������");
	cout << p.first << endl;
	cout << p.second << endl;
	cout << "==========================" << endl;
	map<int, string> myMap;
	myMap.emplace(3, "�������");
	myMap.emplace(1, "�������");
	myMap.insert(make_pair(2, "����������"));
	myMap.insert(pair<int, string>(22, "����"));
	///////////////////////////////////////////// ��� ����� ��������� ��������� ������ ��� ���������� � ���� ��������� ���������� Map
	//				[3][�]					   //
	//				/    \					   //
	//        [1][�]      [22][�]			   //
	//        /    \       /    \              //
	//            [2][K]                       //
	/////////////////////////////////////////////

	auto it = myMap.find(22);
	cout << it->second << endl;
	auto it2 = myMap.find(44);
	if (it2 != myMap.end())
	{
		cout << it2->second << endl;
	}
	else
	{
		cout << "����" << " �� ������" << endl;
	}
	cout << "====================================" << endl;
	myMap.emplace("����", 1313);
	myMap.emplace("����", 222);
	myMap.emplace("����", 2341);
	//myMap["�����"] = 123333;
	//auto it3 = myMap.find("����");
	//cout << myMap["����"] << endl; // �� �������� ��
	cout << "==========================================" << endl;
	multimap<string, int> myMultimap;
	myMultimap.emplace("����", 111);
	myMultimap.emplace("����", 1111); //� ��������� ����� ��� ���������� �����
	myMultimap.emplace("����", 222);
	myMultimap.emplace("����", 333);
}*/
/*//��������������� | ������ | thread | ������������� ���������������� | ����� | C++ #1
void DoWork()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "ID ������ " << this_thread::get_id() << "\tDoWork\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(1000));
	}
}
int main()
{
	setlocale(LC_ALL, "rus");
	//cout << "START MAIN" << endl;
	//this_thread::sleep_for(chrono::milliseconds(3000)); // ��� ������� ������������ �������� ���������� ���� �� 3 �������
	//cout << this_thread::get_id() << endl;
	//cout << "END MAIN" << endl;
	//cout << "========================================" << endl;
	thread th(DoWork);
	//th.detach();// �������� ��� ����� ����� ���������� ��������������, �� ������������ �� � ����.
	for (size_t i = 0; i < 10; i++)
	{
		cout << "ID ������ " << this_thread::get_id() << "\tmain\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(600));
	}

	th.join();
	return 0;
}*/
/*//Stack | �������� ����������� | ���������� ����������� �������� (stl) | ����� | C++ #11
int main()
{
	setlocale(LC_ALL, "rus");

	stack<int> st;
	st.push(2);
	st.push(43);
	st.push(1);
	st.push(77);
	st.emplace(9);
	cout << st.top() << endl;
	st.pop();
	cout << st.top() << endl;
	while (!st.empty()) //� ������� ����� , ���� ���� �� ����, ������������� ��������� ����������� �������, � ������\��������� ���, ���� �� ����������� ��������
	{
		cout << st.top() << endl;
		st.pop();
	}


}*/
/*//������ � ����������� | ������������� ���������������� | ����� | C++ #2
void DoWork(int a, int b)
{
	this_thread::sleep_for(chrono::milliseconds(1000));
	cout << "==============\t" << "DoWork STARTED\t====================" << endl;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "a+b = " << a + b << endl;
	this_thread::sleep_for(chrono::milliseconds(1000));
	cout << "==============\t" << "DoWork STOPPED\t====================" << endl;

}
int main()
{
	setlocale(LC_ALL, "rus");
	thread th(DoWork, 2, 3);


	for (size_t i = 0; true; i++)
	{
		cout << "ID ������ = " << this_thread::get_id() << "\tmain works " << i << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}



	//th.detach(); ����������� ������� ���� �� ���� ����������
	//th.join();
	return 0;
}*/
/*//queue | priority queue | �������� ����������� | ���������� ����������� �������� (stl) | C++ #12
int main()
{
	setlocale(LC_ALL, "rus");

	queue<int> q;
	q.push(56); // ��������� ������� � �������
	q.push(3);
	q.push(18);
	q.push(1);
	q.push(99);
	cout << q.front() << " -������ ������� � �������" << endl;
	q.pop(); // ��������� ������ ������� �� �������
	cout << "�������� ����� .pop()" << endl;
	cout << q.front() << "-������ ������� � �������" << endl;
	cout << q.back() << " -��������� ������� � �������" << endl;


	cout << "===============================================" << endl;


	queue<int> q1;
	q1.emplace(31);
	q1.emplace(3785);
	q1.emplace(4336);
	q1.emplace(73);
	q1.emplace(2);
	while (!q1.empty())
	{
		cout <<"������� "<< q1.front() << endl;
		cout <<"count "<< q1.size() << endl;
		q1.pop();
	}
	cout << "���������� ��������� � ������� = " << q1.size() << endl;

	cout << "=====================================================" << endl;


	priority_queue<int> q2;
	q2.emplace(3);
	q2.emplace(17);
	q2.emplace(21);
	q2.emplace(31);

	while (!q2.empty())
	{
		cout << "������� " << q2.top() << endl;
		cout << "count " << q2.size() << endl;
		q2.pop();
	}
	cout << "���������� ��������� � ������� = " << q2.size() << endl;

	//���� ���� ���������, ��, ����� �������� �������� ����������, ����� ������������ greater �� ���������� functional.��� ������ :
	//priority_queue <int, vector <int>, greater <int> > q;
}*/
/*//������������� ������ | �������� �++ ��� ����������. ���� #139
//������������� ������ | ������ �� ���������� ��������� | �������� �++ ��� ����������. ���� #140
int main()
{
	setlocale(LC_ALL, "rus");

	int result = Sum(3, 2);
	cout << result << endl;

	myNamespace::MyClass m; //���� ������ �������������� using namespace myNamespace; ��� �� ��� � std ���������
	m.PrintMessage("����������");





}*/
/*//������� ���������� �� ������ �� ������ | ������������� ���������������� | ����� | C++ #3
void DoWork(int& a)
{
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "ID ������ = " << this_thread::get_id() << " ==============\t" << "DoWork STARTED\t====================" << endl;
	this_thread::sleep_for(chrono::milliseconds(1000));
	a *= 2;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "ID ������ = " << this_thread::get_id() << " ==============\t" << "DoWork STOPPED\t====================" << endl;

}
int main()
{
	setlocale(LC_ALL, "rus");
	int q = 5;
	thread t(DoWork, ref(q)); //std::ref(); �� ������������ ���� std;

	for (size_t i = 0; i < 10; i++)
	{
		cout << "ID ������ = " << this_thread::get_id() << "\tmain works\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(1000));
	}


	t.join();
	cout << q << endl;
}*/
/*//Union | ������������� � �++ | �������� �++ ��� ����������. ���� #141
union MyUnion
{
	short int a;
	int b;
	float c;
};
int main()
{
	setlocale(LC_ALL, "rus");

	MyUnion u;
	u.a = 5;
	u.b = 40000;
	u.c = 43.54;


}*/
/*//std::function | ����������� ������ ������� | �������� �++ ��� ����������. ���� #142
void Foo()
{
	cout << "Foo()" << endl;
}
void Bar()
{
	cout << "Bar()" << endl;
}
int Sum(int a, int b)
{
	return a + b;
}
void Foo1(int a)
{
	if (a > 10 && a < 40)
	{
		cout <<"Foo1= "<< a << endl;
	}
}
void Bar1(int a)
{
	if (a % 2 == 0) // �������� ����� �� ��������, ������� �� ������ �� 2, ������� �� ����� ����� ������
	{
		cout <<"Bar1= "<< a << endl;
	}
}
void DoWork(vector<int>& vc) // ��� ���������� �� ������, ��� ��� ���� ����������� � �� � ������ ������� �������� ������ ��� ���� ����� ����������
{
	for (auto el : vc)
	{
		Foo1(el);
	}
}
void DoWork1(vector<int>& vc, function<void(int)> f) // ����� ��������� ���������� ��� ��� ��� ������ � ����� ��� ������ ������� Dowork1 ����� ������� ������ ���������� ������ ��� ������� ��� ������
{
	for (auto el : vc)
	{
		f(el);
	}
}
void DoWork2(vector<int>& vc, vector<function<void(int)>> funcVector)
{
	for (auto el : vc)
	{
		for (auto& fel : funcVector)
		{
			fel(el);
		}

	}
}
int main()
{
	setlocale(LC_ALL, "rus");
	////////////////////////
	function<void()> f; // ������� ���� ��������� ��������� ������� � ��� ������������� �������� � ����������� � ������� <> function.
	f = Foo;
	f();
	f = Bar;
	f();
	////////////////////////
	cout << "==========================" << endl;
	function<int(int, int)> d;
	d = Sum;
	cout << d(2, 5) << endl;
	//////////����/////////
	int result = d(2, 5);
	cout << result << endl;
	////////////////////////
	cout << "======================================" << endl;
	vector<int> vc = { 231,32,7248,4,62,647,28,245,14 };
	DoWork(vc);
	cout << "���������� functional � 2 �����������" << endl;
	DoWork1(vc, Foo1); // ����������� ������ ���������� ����������� ��� �� ������������ ������� ���� �� ������ ����������
	cout << "���������� functional ����� vector" << endl;
	vector<function<void(int)>> Fvector;
	Fvector.emplace_back(Foo1);
	Fvector.emplace_back(Bar1);
	DoWork2(vc, Fvector);



}*/
/*//������-��������� | ������ ������� | ��������� ������� | �������� �++ ��� ����������. ���� #143

void DoWork(vector<int>& vc, function<void(int)> func)
{
	for (auto el : vc)
	{
		func(el);
	}
}
int main()
{
	setlocale(LC_ALL, "rus");
	vector<int> vc = { 31,245,46,749,43,800,2,3,6,8,93,100 };
	///////////////////////////////////////////////////////////////////////
	function<void(int)> f;//���������                                ////// ��� ������ ����, �� ������� ���������� ����� ��������� �� ���� ������ ���������
	f = [](int a)                                                    //////
	{                                                                //////
		cout << "������� ��������� ������� � ���������� - " << a << endl;//
	};                                                               //////
	DoWork(vc, f);                                                   //////
	/////////////////////////////////////////////////////////////////////// ����� ������ ����� ������ �����, ��� �����������
	cout << "=======================================================" << endl;

	DoWork(vc, [](int a) // ����� �������� ������ ���������� ������ ���������/��������� �������.
	{
		cout << "������� ��������� ������� � ���������� - " << a << endl;
	});
	//////////////////////////////////////////////////////////////////////////
	cout << "=========================================================" << endl;
	int p = 0;
	[&p](int a) // ����� �������� ���������� � [] �� ������ &
	{
		p = 5;
	};

}*/
//������ ��������� � ������� ���������� ���������� ������ | ������������� ���������������� | C++ #4
/*int Sum(int a, int b)
{
	this_thread::sleep_for(chrono::milliseconds(1000));
	cout << "ID ������ " << this_thread::get_id() << "===========\t Sum STARTED \t================" << endl;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "ID ������ " << this_thread::get_id() << "==========\t Sum STOPPED \t===============" << endl;
	return a + b;
}
int main()
{
	setlocale(LC_ALL, "rus");

	int result;
	thread t([&result]()
		{
			result = Sum(2, 5);
		});

	for (size_t i = 0; i < 10; i++)
	{
		cout << " ID ������ = " << this_thread::get_id() << "\tmain works\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}
	t.join();
	cout << " Sum result = " << result << endl;

}*/
//������ ��������� ������� | ������ ������� | ������-��������� | ��������� ������� | ���� #144
/*class MyClass
{
public:
	int a = 11;
	void msg()
	{
		cout << "msg" << endl;
	}
	void Lambda()
	{
		auto e = [this]() // this �������� ��������� �������� ������ ������� ����� ���� �����
		{
			this->msg();
		};
		e();
	}

};

int main()
{
	setlocale(LC_ALL, "rus");

	int a = 55;
	int b = 10;
	cout << "[=] ������" << endl;

	auto f = [=]()
	{
		cout << "a = " << a << endl
			<< "b = " << b << endl;
	};
	f();
	cout << "[&] ������" << endl;

	auto d = [&]()
	{
		a *= 2;
		b += 21;
		cout << "a = " << a << endl
			<< "b = " << b << endl;
	};
	d();
	cout << "[]()mutable"<< endl;

	auto s = [=]()mutable // ��������� �������� ������, �� ������ ������ ������� �� ����� �� ������� ������.
	{
		a *= 2;
		b += 21;
		cout << "a = " << a << endl
			<< "b = " << b << endl;
	};
	s();
	cout << "a = " << a << endl
		<< "b = " << b << endl;
	cout << "===================================" << endl;

	MyClass m;
	m.Lambda();


}*/
//��� �������� ����� ���������� ���� | �������� �++ ��� ����������. ���� #145
/*class SimpleTimer
{
public:
	SimpleTimer()
	{
		start = std::chrono::high_resolution_clock::now();
	}
	~SimpleTimer()
	{
		end = std::chrono::high_resolution_clock::now();
		std::chrono::duration<float> duration = end - start;
		cout << "Duration " << duration.count() << "s" << endl;
	}

private:
	std::chrono::time_point<std::chrono::steady_clock> start, end;
};

int Sum(int a, int b)
{
	SimpleTimer st;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "ID ������ = " << this_thread::get_id() << " =================\tSum STARTED \t==================== " << endl;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "ID ������ = " << this_thread::get_id() << " =================\tSum STOPPED \t==================== " << endl;
	return a + b;
}
int main()
{
	SimpleTimer st;
	setlocale(LC_ALL, "rus");
	//auto start = chrono::high_resolution_clock::now(); // ���������� ��� ����� ���, ��� ��� ����� auto � ���������� start ���������� ��� ��������


	int result;
	thread t([&result]()
		{
			result = Sum(2, 5);
		});

	for (size_t i = 1; i <= 10; i++)
	{
		cout << "ID ������ = " << this_thread::get_id() << "\tmain works\t" << endl;
		this_thread::sleep_for(chrono::milliseconds(700));
	}

	t.join();
	cout << "Sum result = " << result << endl;

	//auto end = chrono::high_resolution_clock::now(); // ���������� ���������
	//chrono::duration<float> duration = end - start; // duration - �����������������, �� ��������� ������� ����� ������ ��������, ��������� � ���������� duration
	//cout << "Duration = " << duration.count() << endl; //duration �������� �������, � ���� ���� ����� .count()

}*/
//�������� � �++ | ��� ����� ������� | �������� �++ ��� ����������. ���� #146
/*class MyFunctor
{
public:
	int operator ()(int a, int b)
	{
		cout << "� ������� " << endl;
		return a + b;
	}

private:

};
class EvenFunctor
{
public:
	void operator()(int value)
	{
		if (value % 2 == 0)
		{
			evenSum +=value;
			evenCount++;
		}
	}

	void ShowEvenSum()
	{
		cout << "����� ������ ����� = " << evenSum << endl;
	}
	void ShowEvenCount()
	{
		cout << "���������� ������ ����� = " << evenCount << endl;
	}

private:
	int evenSum = 0;
	int evenCount = 0;

};


int main()
{
	setlocale(LC_ALL, "rus");

	MyFunctor f;
	cout << f(2, 5) << endl;

	int arr[] = { 15,26,748,38,984,89,341,621,5,24,74,3,12,2 };
	EvenFunctor ef;

	for (auto el : arr)
	{
		ef(el);
	}

	ef.ShowEvenCount();
	ef.ShowEvenSum();

}*/
//��������� �++ | ��� ����� �������� | �������� �++ ��� ����������. ���� #147
/*bool GreaterThanZero(int a)
{
	return a > 0;
}
bool LessThanZero(int a)
{
	return a < 0;
}
class Person
{
public:
	Person(string name, double score)
	{
		this->Name = name;
		this->Score = score;
	}
	bool operator()(const Person& p) //�������� ���������, ������������� ���������� (), ������� �������� ������������ ���� ���� ������������� �������� bool
	{
		return p.Score > 180;
	}


	string Name;
	double Score;
};


int main()
{
	setlocale(LC_ALL, "rus");
	vector<int> vc = { 1,-2,-55,9,-3,8,2 };
	cout << GreaterThanZero(-10) << endl;
	cout << "=========GreaterThanZero============" << endl;
	int result = count_if(vc.begin(), vc.end(), GreaterThanZero);
	cout << "����������� ����� � ��������� > 0 = " << result << endl;
	cout << "=========LessThanZero===============" << endl;
	result = count_if(vc.begin(), vc.end(), LessThanZero);
	cout << "����������� ����� � ��������� < 0 = " << result << endl;

	vector<Person> students;
	{
		Person("����", 180);
		Person("����", 50);
		Person("����", 210);
		Person("����", 107);
		Person("����", 30);
		Person("�����", 120);
		Person("����", 198);
	};
	//student.front() ������������ 3 ���������� � �������� ���������
	int result1 = count_if(students.begin(), students.end(), students.front());
	cout << result1 << endl;



}*/
//STL ��������� ���������� | �������� �������� | ������ ������� | C++ STL ����� | #13
/*class Person
{
public:
	Person(string name, int score)
	{
		this->Name = name;
		this->Score = score;
	}
	bool operator()(const Person& p) //�������� ���������, ������������� ���������� (), ������� �������� ������������ ���� ���� ������������� �������� bool
	{
		return p.Score > 180;
	}


	string Name;
	int Score;
};

int main()
{
	setlocale(LC_ALL, "rus");

	vector<Person> students
	{
		Person("����", 180),
		Person("����", 50),
		Person("����", 210),
		Person("����", 107),
		Person("����", 30),
		Person("�����", 120),
		Person("����", 198),
	};
	sort(students.begin(), students.end(), [](const Person& p1, const Person& p2) {return p1.Name < p2.Name; });
	//���������� ��������� �������, ��� ���������� �� �������� ��������� ����� ����������� ����������� ������ �� ������� ������ Person, ���������� ��������� ���� ���� ��������.
	for (auto el : students)
	{
		cout << "���:\t" << el.Name << "\t�����:\t" << el.Score << endl;
	}






	const int SIZE = 7;
	int arr[SIZE] = { 4,1,8,56,2,785,32 };
	sort(arr, arr + SIZE, [](int a, int b) {return a > b; });
	for (auto value : arr)
	{
		cout << value << endl;
	}
	vector<int> v = { 123,14,12,54,53,46,3,2,5,74 };
	sort(v.begin(), v.end(), [](int a, int b) {return a < b; });
	for (auto el : v)
	{
		cout << el << endl;
	}

}*/
//STL ��������� ������ | find | find_if | find_if_not | ���������� ����������� �������� (stl) C++ #14
/*class Person
{
public:
	Person(string name, int score)
	{
		this->Name = name;
		this->Score = score;
	}
	bool operator()(const Person& p) //�������� ���������, ������������� ���������� (), ������� �������� ������������ ���� ���� ������������� �������� bool
	{
		return p.Score > 180;
	}


	string Name;
	int Score;
};
int main()
{
	setlocale(LC_ALL, "rus");

	vector<Person> students
	{
		Person("����", 180),
		Person("����", 50),
		Person("����", 210),
		Person("����", 107),
		Person("����", 30),
		Person("�����", 120),
		Person("����", 198),
	};
	auto result2 = find_if(students.begin(), students.end(), [](const Person& p)
		{
			return p.Name == "����";

		});
	if (result2 == students.end())
	{
		cout << "-" << endl;
	}
	else
	{
		cout << "+" << endl;
	}




	cout << "================================================" << endl;
	vector<int>v = { 2,4,6,8,10 };
	auto result = find(v.begin(), v.end(), 0);
	if (result == v.end())
	{
		cout << "����� �� �������" << endl;
	}
	else
	{
		cout << "��������� ����� = " << *result << endl;
	}
	cout << "===============================================" << endl;
	auto result1 = find_if(v.begin(), v.end(), [](int a) {return a % 2 == 0; });
	if (result1 == v.end())
	{
		cout << "������ ����� �� ����������" << endl;
	}
	else
	{
		cout << "������ ����� ����" << endl;
	}
	cout << "==================================================" << endl;


}*/
//stl copy | stl copy_if | ������� ������ �� ������� | ���������� ����������� �������� (stl) C++ #15
/*class Person
{
public:
	Person(string name, int score, int age)
	{
		this->Name = name;
		this->Score = score;
		this->Age = age;
	}

	string Name;
	int Score;
	int Age;
};


int main()
{
	setlocale(LC_ALL, "rus");

	vector<Person> students
	{
		Person("����",181,19),
		Person("����",30,21),
		Person("����",73,32),
		Person("����",210,50),
		Person("����",57,25),
		Person("����",181,33),
	};

	vector<Person> result;

	//copy(students.begin(), students.end(), back_inserter(result)); // ������� ������ �������� ������ � ������� students � ������ result.
	cout << "==================================================" << endl;
	copy_if(students.begin(), students.end(), back_inserter(result), [](const Person& p) // �������� ������ ������� � ������ �������, + �������� ���� ��������� ��� ��� ��� �����
		{
			//return p.Name == "����";
			//return p.Score < 100;
			return p.Score > 70 && p.Age > 20;
		});
	sort(result.begin(), result.end(), [](const Person&p1,const Person&p2) // ��������� ��� ����������� ������ ������� �� �������� � ��������
		{
			return p1.Age > p2.Age;

		});
	cout << "����� ���������:\t" << result.size() << endl;
	for (auto value : result)
	{
		cout << "���:\t" << value.Name << "\t�����:\t" << value.Score << "\t�������:\t"<< value.Age << endl;
	}


}*/
//stl remove | stl remove_if | stl �������� �������� �� ������� | ���������� (stl) #16
/*class Person
{
public:
	Person(string name, int score, int age)
	{
		this->Name = name;
		this->Score = score;
		this->Age = age;
	}

	string Name;
	int Score;
	int Age;
};
int main()
{
	setlocale(LC_ALL, "rus");

	vector<Person> students
	{
		Person("����",181,19),
		Person("����",30,21),
		Person("����",73,32),
		Person("����",210,50),
		Person("����",57,25),
		Person("����",181,33),
		Person("�����",160,20),
		Person("�����",38,60),
	};
	//auto result1 = remove_if(students.begin(), students.end(), [](const Person& p) // ��� ������ ��������� ��������� ���������� �������, ����� � ����� ������ ���������� ��������� � erase
	//	{
	//		return p.Score < 150;
	//	});

	students.erase(remove_if(students.begin(), students.end(), [](const Person& p) //������ �������� ��������� ����������, ����� ������ ���������� ��������� ����� � ����������
		{
			//return p.Score < 150 && p.Age < 25;; // ���������� � ��� �� �����, ��� ��� ����� ������� ������ ��, ��� ��������� ������, ���������� �� ��� ���� �� ������ ��������� ������.
			return p.Score < 150 || p.Age < 25; // ��� ������ ��� � ���� ������ ������ 150, � ��� � ���� ������� ������ 25.
		}), students.end());

	cout << "����� ���������:\t" << students.size() << endl;
	for (auto value : students)
	{
		cout << "���:\t" << value.Name << "\t�����:\t" << value.Score << "\t�������:\t" << value.Age << endl;
	}
	////////////////////////////////////////////////////////////////////////////////////////////////////////////
	vector<int> vc = { 5,1,2,8,11,5,10,5,11 };
	auto result = remove(vc.begin(), vc.end(), 5);
	vc.erase(result, vc.end());
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	string str = "���� � �����������    ���������";
	cout << str << endl;
	str.erase(remove(str.begin(), str.end(), ' '), str.end());
	cout << str << endl;

}*/
//����� ������������� �������� | max_element c++ | ���������� ����������� �������� (stl) C++ #17
/*int main()
{
	setlocale(LC_ALL, "rus");

	vector<int> vc = {10,1,-55,11,13,58}; // ������ ��� ������� ��� ������������� �������
	auto resultvc = max_element(vc.begin(), vc.end());
	cout << "max_elementvc: " << *resultvc << endl;

	list<int> ls = {4,7,77,-3,44,74}; // ���� ��� �� ���� ���������� ������
	auto resultls = max_element(ls.begin(), ls.end());
	cout << "max_elementls: " << *resultls << endl;

	const int SIZE = 6;
	int arr[SIZE] = { 10,1,-55,11,13,58 };
	auto resultarr = max_element(arr, arr + SIZE);
	cout << "max_elementarr: " << *resultarr << endl;
}*/
//����� ������������ �������� | min_element c++ | ���������� ����������� �������� (stl) C++ #18
/*int main()
{
	setlocale(LC_ALL, "rus");
	vector<int> vc = { 10,1,-55,11,13,58 }; // ������ ��� ������� ��� ������������� �������
	auto resultvc = min_element(vc.begin(), vc.end());
	cout << "max_elementvc: " << *resultvc << endl;

	list<int> ls = { 4,7,77,-3,44,74 }; // ���� ��� �� ���� ���������� ������
	auto resultls = min_element(ls.begin(), ls.end());
	cout << "max_elementls: " << *resultls << endl;

	const int SIZE = 6;
	int arr[SIZE] = { 10,1,-55,11,13,58 }; // ����������� ������
	auto resultarr = min_element(arr, arr + SIZE);
	cout << "max_elementarr: " << *resultarr << endl;


	list<int> lst = { 4,7,77,-3,44,74 };
	auto resultlst = minmax_element(lst.begin(), lst.end());
	cout << "min: " << *resultlst.first <<"\tmax: "<<*resultlst.second<< endl;
}*/
//�++ ������ � ������ ������ | �++ ����� ������ � ������ | ������������� ���������������� | C++ #5
/*class MyClass
{
public:
	void DoWork()
	{
		this_thread::sleep_for(chrono::milliseconds(2000));
		cout << "ID ������ " << this_thread::get_id() << "===========\t DoWork STARTED \t================" << endl;
		this_thread::sleep_for(chrono::milliseconds(4000));
		cout << "ID ������ " << this_thread::get_id() << "==========\t DoWork STOPPED \t===============" << endl;
	}

	void DoWork2(int a)
	{
		this_thread::sleep_for(chrono::milliseconds(2000));
		cout << "ID ������ " << this_thread::get_id() << "===========\t DoWork2 STARTED \t================" << endl;
		this_thread::sleep_for(chrono::milliseconds(4000));
		cout << "DoWork2 �������� ���������\t" << a << endl;
		cout << "ID ������ " << this_thread::get_id() << "==========\t DoWork2 STOPPED \t===============" << endl;
	}

	int Sum(int a, int b)
	{
		this_thread::sleep_for(chrono::milliseconds(2000));
		cout << "ID ������ " << this_thread::get_id() << "===========\t Sum STARTED \t================" << endl;
		this_thread::sleep_for(chrono::milliseconds(4000));
		cout << "ID ������ " << this_thread::get_id() << "==========\t Sum STOPPED \t===============" << endl;
		return a + b;
	}

};


int main()
{
	setlocale(LC_ALL, "rus");


	//int result;
	MyClass m;

	//thread th([&]() //����� SUm ���������� return a+b; ������� ����� ������� �������
	//	{
	//		result = m.Sum(2, 5);
	//	});

	//thread th([&]() //����� DoWork �� ���������� ������� ��������, ����� ������� �� ���� ������ ������� ��� ������� ��� ��������
	//	{
	//		m.DoWork();
	//	});

	//thread th(&MyClass::DoWork,m); //�������� ������ ������ �� �����, ����� ��� :: ��������� ����� ������ ��� �� ����� ������, ����� ������� ������ ���������� ��������� ������ ������.
	thread th(&MyClass::DoWork2, m, 5); // ��� ������ � ����� ����������� ���������.
	for (size_t i = 1; i <= 10; i++)
	{
		cout << " ID ������ = " << this_thread::get_id() << "\tmain works\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	th.join();
	//cout << "RUSULT:\t" << result << endl;


}*/
//accumulate c++ | ����� � ������������ ��������� ������� | ���������� (stl) C++ #19
/*int main()
{
	setlocale(LC_ALL, "rus");

	vector<int> vc = { 2,3,4 };
	auto resultvc = accumulate(vc.begin(), vc.end(), 0); //0 ��������� ��� ���� ����� �������� ������� � ������ �������� ����� ����������� ��� ��������� �������� ���������
	cout << "RESULT:\t" << resultvc << endl;

	int arr[] = { 3,2,5,7,10 };
	int resultARR = accumulate(begin(arr), end(arr), 1, [](int a, int b) { // 1 ��� ��� ����� ���������� �������� �� ��� �����, ���� ��������� 0 �� ����� ����� 0
		return a * b;	});
	cout << "RESULT ARR:\t" << resultARR << endl;

	vector<int> v = { 2,3,4 };
	auto resultv = accumulate(vc.begin(), vc.end(), 0, [](int a, int b) {
		if (b % 2 == 0)
		{
			return a + b; // ���� ����� ������ �� ���������� ����� �������� ��������� � ����� ������� ��������� �������� �� ��������
		}
		else
		{
			return a; // ���� ����� �� ������, �� ���������� ������� ���������.
		}});
	cout << "RESULT ������ �����:\t" << resultv << endl;

	auto resultstringarr = accumulate(next(begin(arr)), end(arr), to_string(arr[0]), [](string a, int b) { // ������ ���������� ���������� to_string() � �������� ���� ���������� 1(0) ������� �������
		return a + " - "+ to_string(b); // ��� �� �������� ������ �������� �� string a, � return a+to_string(b); ����� �������������� ��� �������� ����� � ������.
		}); // next(begin(arr)) ���������� ����� ������ ������� �� �����������, ����� �������� �� ��� ������
	cout << "RESULT:\t" << resultstringarr << endl;


}*/
//STL equal � mismatch | ��������� �������� | ���������� ����������� �������� (stl) C++ #20
/*int main()
{
	setlocale(LC_ALL, "rus");

	int arr[] = { 10,3,4,5,7,11 };
	int arr2[] = { 10,3,4,5,7,11,2 };

	bool result = equal(begin(arr), end(arr), begin(arr2), end(arr2));
	cout << "result arr = " << result << endl; // true = 1, false = 0;

	vector<int> vc = { 11,3,4,5,7,10 };
	vector<int> vc2 = { 10,3,4,5,7,11 };

	sort(begin(vc), end(vc)); // ����������
	sort(begin(vc2), end(vc2));


	bool resultvc = equal(begin(vc), end(vc), begin(vc2), end(vc2));
	cout << "result vc = " << resultvc << endl;

	list<int> ls = {11,3,4,5,7,10};
	list<int> ls2 = {1,3,4,5,7,10};

	auto resultls = mismatch(begin(ls), end(ls), begin(ls2), end(ls2));
	if (resultls.first==end(ls)&&resultls.second==end(ls2))
	{
		cout << "+" << endl;
	}
	else
	{
		cout << "-" << endl;
	}
	// ��� ��� ���������� ���������, � ����� ����������� �� ������������.
	cout << "���� ��������� �� ������������� = " << *resultls.first << " && " << *resultls.second << endl;

}*/
//��� ����� mutex | C������������ ������� | ������������� ���������������� | C++ #6
/*mutex mtx;
void Print(char ch) // ��������� ���������� ���� ���
{
	mtx.lock(); // ��������� ������� ���� ���� ��� �������� �����, �� ����� ������ ������� � ��� �������� ���� �� �������� ������ ������ �����
	for (int i = 0; i < 5; i++)
	{
		for (int i = 0; i < 10; i++)
		{
			cout << ch;
			this_thread::sleep_for(chrono::milliseconds(50));
		}
		cout << endl;
	}
	cout << endl;
	mtx.unlock(); // ����� ������ ����� ��������� � ���� �������� �����, ����������� ������ ��� ���������� ������.
}

int main()
{
	setlocale(LC_ALL, "rus");


	SimpleTimer st; // ������ �������� ����� ���������� ���������
	thread t1 (Print,'#');
	thread t2 (Print,'%');
	// ��� ������ �� ����������������, � �������� ������������, ��������� ����.
	t1.join();
	t2.join();


}*/
//std equal predicate | ���������� ����������� �������� (stl) C++ #21
/*class Point
{
public:
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	int x, y;
};
int main()
{
	setlocale(LC_ALL, "rus");

	vector<Point>arr
	{
		Point(1,3),
		Point(4,5),
		Point(5,7),
	};

	vector<Point>arr2
	{
		Point(1,3),
		Point(4,5),
		Point(5,7),
	};

	bool result = equal(begin(arr), end(arr), begin(arr2), end(arr2), [](const Point& p1, const Point& p2) // �������� ��������� ��� ������� ������ Point �� ������, ����� ��� ��� �� ������ � ����� �������� ������� ��������
		{
			bool result = p1.x == p2.x && p1.y == p2.y; // ��������� �� ��������� ��� ����
			return result;
			// return p1.x==p2.x&&p1.y==p2.y;
		});
	cout << result << endl;
	if (result==true)
	{
		cout << "������������ ������� �����!" << endl;
	}
	else
	{
		cout << "������������ ������� �� �����!" << endl;
	}

}*/
//lock_guard mutex c++ | C������������ ������� | ������������� ���������������� | C++ #7
/*mutex mtx;
void Print(char ch) // ��������� ���������� ���� ���
{
	lock_guard<mutex> guar(mtx);
	for (int i = 0; i < 5; i++)
	{
		for (int i = 0; i < 10; i++)
		{
			cout << ch;
			this_thread::sleep_for(chrono::milliseconds(30));
		}
		cout << endl;
	}
	cout << endl;
}
int main()
{
	setlocale(LC_ALL, "rus");

	SimpleTimer st; // ������ �������� ����� ���������� ���������
	thread t1(Print, '#');
	thread t2(Print, '%');

	t1.join();
	t2.join();

}*/
//Deadlock �������� ���������� | ������������� ���������������� | C++ #8
/*mutex mtx;
mutex mtx2;
void Print()
{
	mtx2.lock();
	this_thread::sleep_for(chrono::milliseconds(1));
	mtx.lock();
	for (int i = 0; i < 5; i++)
	{
		for (int i = 0; i < 10; i++)
		{
			cout << "*";
			this_thread::sleep_for(chrono::milliseconds(10));
		}
		cout << endl;
	}
	cout << endl;
	mtx.unlock();
	mtx2.unlock();
}void Print2()
{
	mtx.lock();
	this_thread::sleep_for(chrono::milliseconds(1));
	mtx2.lock();
	for (int i = 0; i < 5; i++)
	{
		for (int i = 0; i < 10; i++)
		{
			cout << "#";
			this_thread::sleep_for(chrono::milliseconds(10));
		}
		cout << endl;
	}
	cout << endl;
	mtx.unlock();
	mtx2.unlock();
}
int main()
{
	setlocale(LC_ALL, "rus");

	SimpleTimer timer;

	thread t1(Print);
	thread t2(Print2);

	t1.join();
	t2.join();



}*/
//�������� for_each c++ | ���������� ����������� �������� (stl) C++ #22
/*void Foo(int a)
{
	cout << a << endl;
}
int main()
{
	setlocale(LC_ALL, "rus");

	int arr[] = {1,2,10,55};

	cout << "�������� For_each" << endl;
	for_each(begin(arr), end(arr), Foo); // ��� �������� for_each
	cout << "�������� for_each ������ � ������ ��������, ������ ����� � ���" << endl;
	for_each(begin(arr), end(arr), [](int a) // ��-�� ����� ��� � ������, ������ ����� ������-�������
		{
			cout << a << endl;
		});
	cout << "���� for_each" << endl;
	for (auto a : arr) // ���������� ������ ��� � �� ��� ������, ��� ���� for_each.
	{
		Foo(a);
	}
}*/
//recursive_mutex C++ | ����������� ������� | ������������� ���������������� | C++ #9
/*recursive_mutex rm;
mutex m;
void Foo(int a)
{
	rm.lock();
	cout << a << " " ;
	this_thread::sleep_for(chrono::milliseconds(300));
	if (a <= 1)
	{
		cout << endl;
		rm.unlock();
		return;
	}
	a--;
	Foo(a);
	rm.unlock();
}
int main()
{
	setlocale(LC_ALL, "rus");

	//Foo(10);
	thread t1(Foo, 10);
	thread t2(Foo, 10);

	t1.join();
	t2.join();


}*/
//STL unique | ������� ������������� �������� | ���������� ����������� �������� (stl) C++ #23
/*int main()
{
	setlocale(LC_ALL, "rus");

	vector<int> arr = { 1,2,2,2,5,4,4 };
	vector<int>arr2;
	for (auto a : arr)
	{
		cout << a << " ";
	}cout<<"������ ����� ������� � �������" << endl;
	unique_copy(begin(arr),end(arr),back_inserter(arr2));// �������� ���������� ������ �� ������ ���������� � ������
	for (auto a : arr2)
	{
		cout << a << " ";
	}cout<<"arr2" << endl;
	auto result = unique(begin(arr), end(arr)); // ���������� ���� ��� result, �� �� ���������� �������� ����������� �� ������� ����� �������� � �� ������� �������

	for (auto a : arr) // �����������, ������ ������� � ������� ��� ����� ������ ��������� � ����� ������, �� ����� ����� ������ ������� ����� �������� � ��������� �������
	{
		cout << a << " ";
	}cout<<"����� ������� ����� unique, ��� �� ��������� ��� ����� �� ��� ������������� � ����� ������" << endl;
	for_each(begin(arr), result, [](int a) 
		{
			cout << a <<" ";
		}); std::cout << "����� ������� ����� unique, ���������� for_each, ������� ������� �����������, �� ��� ����� �������� ����� ������";
	arr.erase(result, end(arr));
	for (auto a : arr)
	{
		cout << a << " ";
	}cout << "�������� ��������� � ������� ����� �������" << endl;

}*/
//������������� ������ � ��������� ������� | random_shuffle | STL C++ #24
/*class IAction
{
public:
	virtual void Action() = 0;
};
class CatAction:public IAction // ��������� �� ������ IAction
{
public:
	virtual void Action() override
	{
		cout << "������ ����" << endl;
	}
};
class TeaAction :public IAction
{
public:
	virtual void Action()override
	{
		cout << "���� ���" << endl;
	}
};
class DogAction :public IAction
{
public:
	virtual void Action()override
	{
		cout << "������ � �������" << endl;
	}
};
class SleepAction :public IAction
{
public:
	virtual void Action() override
	{
		cout << "������� �����" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	//int arr[] = { 1,2,3,4,5 }; 
	IAction* arr[] = // ��� ������ ������ ���� ���������� �� ����� �����������, ����� ��������� �� �����������.
	{
		new CatAction(), // ������ ������� ��� ����� ��������� ����� $CatAction, �� ��� �� ���������
		new DogAction(), // ������� ������ new
		new TeaAction(),
		new SleepAction()
	}; 

	random_shuffle(begin(arr),end(arr));
	
	for (auto &element : arr)
	{
		element->Action();
	}
	cout << endl;

}*/
//unique_lock mutex | unique_lock vs lock_guard | ������������� ���������������� | C++ #10
/*mutex mtx;
void Print(char ch)
{
	//lock_guard<mutex>lg(mtx);
	unique_lock<mutex> ul(mtx,defer_lock);

	this_thread::sleep_for(chrono::milliseconds(2000)); //����������
	ul.lock();
	for (int i = 0; i < 5; i++) //� ���������� /���������
	{
		for (int i = 0; i < 10; i++)
		{
			cout << ch;
			this_thread::sleep_for(chrono::milliseconds(10));
		}
		cout << endl;
	}
	cout << endl; // ��� ����� ����������

	ul.unlock();

	this_thread::sleep_for(chrono::milliseconds(2000)); //����������
}
int main()
{
	setlocale(LC_ALL, "rus");
	SimpleTimer timer;

	thread t1(Print, '@');
	thread t2(Print, '$');
	t1.join();
	t2.join();


}*/
// �� ����� ����� �++ D: