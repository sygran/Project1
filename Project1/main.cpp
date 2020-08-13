#include<iostream> // библиотека ввода
#include<ctime> // библиотека времени с 1940 года для функции srand()
#include<string> // библиотека строчки
#include<fstream> // библиотека записи и чтения ifstream ofstrem fstream
#include<Windows.h> // библиотека шаблонов функций
#include <memory> // библиотека умных указателей auto_ptr, unique_ptr, shared_ptr
#include<vector>//библиотека stl вектора
#include <list> //библиотека stl листа
#include <forward_list> //библиотека forward_list
#include<array> // библиотека array
#include<deque> // библиотека deque
#include<set> // библиотека set and multiset
#include<map> // библиотека map and multimap
#include<thread> // библиотека предназначена для работы с потоками, автоматически подключает библиотеку chrono
#include<chrono> // библиотека предназначена для работы со временем, подключаем отдельно, если нужно работать с chrono но без потоков
#include<stack> // библиотека stack
#include<queue> // деректива очереди.
#include "Sum.h" // через "" подключили наш проект
#include"MyClass.h"// подключение своего класса
#include <functional> // директива functional
#include<algorithm> // для работы с алгоритмами STL подключаем эту библиотеку
#include<numeric> // библиотека для работы с алгоритмом accumulate
#include <mutex> //библиотека для работы с mutex для синхронизации работы потоков
#include "SimpleTimer.h"

using namespace std; // пространство имен std:: 


/*int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Привет!"<<endl;
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
	int a = 6,b; // объявили переменную a,b а=6;
	b = ++a*a++ ; // в данном утверждении перфиксный инкремент, значит b = 7*7 b= 49. переменная а увеличелась на еденицу и стало 7 а не 6,
	// далее так как а стало 7 оно умножилось саму на себя 7*7, следующий инкремент посфиксный используется в полследнуюю очередь, и не имеет смысла
	cout << b << endl;

}*/
/*int main()
{
	int a = 3, b = 3;
	cout << !(a == b) << endl; // инверсия выражения
	cout << ((a == b) && (5 < 4)) << "" << endl; // второая половина не верна false
	cout << ((a == b) || (1 > 0)) << endl; // знак или проверяет всё, но если хоть одно выражение верно, он возвращает true

}*/
/*int main()
{
	setlocale(LC_ALL, "rus");
	bool isRain = true;
/*	if (isRain)
	{
		cout << "Идет дождь, нам нужен зонт! " << endl;
	}
	else
	{
		cout << "Дождя нет, зонт не нужен! " << endl;
	}
	bool israin = false;
	if (israin) {
		cout << "Идет дождь, нам нужен зонт" << endl;
	}
	else {
		cout << "Дождя нет, зонt не нужен! " << endl;
	}
	int a;
	cout << "Введите число: " << endl;
	cin >> a;

	if (a > 5)
		cout << "Ваше число больше пяти! " << endl;
	else if (a == 5)
		cout << "Ваше число равно пяти! " << endl;
	else
		cout << "Ваше число меньше пяти! " << endl;


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
/*int main() //Цикл
{
	setlocale(LC_ALL, "rus");

	int b = 1;

	while (b < 20)
	{
	cout << "Переменная b = " << b << endl;
	b++;
	}


}*/
/*int main() //Циклы. Цикл do while. Что это. Что делает
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
/*int main() //Урок 16,17 цикл For
{
	setlocale(LC_ALL, "rus");
	/*{
		int i = 0;
		cout << "1 цикл" << endl;
		for (; i <= 10; i++)
		{
			cout << "Переменная i= " << i << endl;
		}
		cout << "2 цикл" << endl;
		for (; i <= 20; i++)
		{
			cout << "Переменная i= " << i << endl;
		}}
	{for (int i = 0, j = 10; i < 10, j != 5; i++, j--)
	{
		cout << " переменная i= " << i << endl;
		cout << " переменная j= " << j << endl;
	}}
}*/
/*int main() //Ключевое слово break. Оператор break. Описание. Пример. Синтаксис. Урок #18
{
	setlocale(LC_ALL, "rus");

	/*{cout << "Начало цикла " << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "Переменная i= " << i << endl;
		if (i==3)
		{
			break;
		}
	}
	cout << "Конец цикла " << endl;
	}
}

	cout << "Начало цикла " << endl;

	int i = 0;
	while (true)
	{
		cout << "Переменная i= " << i << endl;
		i++;
		if (i==6)
		{
			break;
		}
	}

	cout << "Конец цикла " << endl;
}*/
/*int main() //Урок 19 Continue
{
	setlocale(LC_ALL, "rus");

	for (int i = 0; i < 20; i++)
	{
		if (i%2==0)
		{
			continue;
		}
		cout << "Переменная i= " << i << endl;
	}

}*/
/*int main()
{
	setlocale(LC_ALL, "rus");

	for (int i = 1; i < 5; i++)
	{
		cout << "сработал 1й цикл сработал for итерация № " << i << endl;

		for (int j = 1; j < 5; j++)
		{
			cout << "\tсработал 2й цикл сработал for итерация № " << j << endl;
		}
	}

}*/
/*int main() //Написать программу, которая выводит на экран прямоугольник символом *. Высота и ширина задаётся пользователем.
{
	setlocale(LC_ALL, "rus");

	/*int shirina, visota;
	cout << "Укажите ширину прямоугольника: ";
	cin >> shirina;
	cout << "Укажите высоту прямоугольника: ";
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
	cout << "Введите длину прямоугольника: ";
	cin >> x;
	cout << "Введите ширину прямоугольника: ";
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
/*int main() //урок 25 Массивы.
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
/*int main() //Урок 26 Инициализация массивов нулями.
{
	setlocale(LC_ALL, "rus");

	int arr[4]; // Тут мы создали массив с переменной int и указали сколько будет в нем элементов
	{
		arr[0] = 5; //тут мы прописали значиния к каждому из элементов
		arr[1] = 7;
		arr[2] = 10;
		arr[3] = 1;
		cout << arr[0];
	}
	//ЛИБО, мы мыожем сделать это все в одну строчку

	int arr[] = { 5,7,10,1 }; // равно необходимо было ставить в старых версия
	int arr[]{ 5,7,10,1 }; // теперь пишут так, тоесть без равно.
	int arr[3]{}; // указали что в массиве три элемента, но ничего не указывали в фигурных скобках, чтобы там не было мусора.
	cout << arr[0];
	cout << arr[1];
	cout << arr[2];
	cout << arr[3];
}*/
/*int main() //Урок #27. Вывод массива. Массивы и циклы. Цикл с массивом. Array c++. C++ для начинающих.
{
	setlocale(LC_ALL, "rus");

	const int size = 5;
	/*int arr[size]{ 5,25,35,45,55 }; //с указанием значения элементов
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << endl;
		}
	}

	int arr[size]; // без указания значения элементов

	for (int i = 0; i < size; i++)
	{
		arr[i] = i;
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}

}*/
/*int main() //sizeof что это. sizeof c++ массив. Узнать количество элементов массива. sizeof array. Урок #28.
{
	setlocale(LC_ALL, "rus");

	int a;
	cout << "Переменная а= " << sizeof(a) << endl; //Таким образом мы можем узнать солько занимает места в оперативе выбранный тип данных
	cout << "Переменная double= " << sizeof(double) << endl;

	int arr[]{ 5,412,5351,321,2131 }; // Создали массив
	int b = sizeof(arr); // узнали размер массива в байтах
	int c = sizeof(int); // узнали размера переменной инт в байтах
	cout << sizeof(arr) << " " << sizeof(int) << endl; //вывели на экран консоли размер массива и переменной инт в байтах
	cout << sizeof(arr) / sizeof(int) << endl; // узнали сколько элементов в массиве

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		cout << arr[i]<<endl; //Почему arr[i] ? Потомучто в условии for мы поставили что i = 0, i меньше размера массива деленого на размер(int)
							  //тоесть размер массива = 20, размер int = 4, 20/4=5, тогда i<5, i++. Елементов в массиве 5, переменная i изза инкримента
							  //будет увеличиваться на 1 до выполнения условия цикла, таким образом нам все 5 елементов выведутся в консоль
	}	// но такой способ не всегда удобен, поменяем мы тип массива на дробный, и будет выводится муссор, можно сделать лучше , а именно:
	cout << endl << endl;

	for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++) // Сначала мы взяли sizeof Нашего массива, а потом sizeof его первого элемента
														   // а так как элемент полюбому соответствует типу массива, мы всегда будем брать минимальный
														   // размер одного из элементов именно того типа который нам нужен.
	{
		cout << arr[j] << endl;
	}
}*/
/*int main() //rand. srand. rand задать диапазон. srand time null. Генератора случайных чисел. randomize. Урок #29.
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int a = rand()%10;
	cout << a << endl;
	a = rand()%10; // тут диапазон будет ограничен с 0 до 9
	cout << a << endl;

	int const SIZE = 10;
	int arr[SIZE]; // создали массив но не заполнили.

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100 ;
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}
}*/
/*int main() // Двумерный массив что это. Многомерные массивы. Пример. Теория. Что такое массив. Array. C++ #30
		   // Двумерный массив инициализация. Двумерный массив индексы. Синтаксис. Пример. Урок #31
		   // Двумерные массивы вывод. Заполнение. Двумерный массив циклы. C++ для начинающих. #32
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	const int ROWS = 5, COLS = 8; //объявляем константы инт с названием ROWS and COLS , для нашего будущего массива

	int arr[ROWS][COLS]{}; // создаем двумерный массив не заполненый,но без мусора, там будут нули 0

	for (int i = 0; i < ROWS; i++) // для его заполнения создаем цикл фор, начинать он будет со строки, далее переходить на колонки
	{
		for (int j = 0; j < COLS; j++) // подцикл для заполнения колонок
		{
			arr[i][j] = rand() % 20; // внутри подцикла будет генерироваться случайное число от 0 до 19
		}
	}


	for (int i = 0; i < ROWS; i++) // для вывода в консоль создаем цикл фор, начинает он со строки, далее переходит на колонки
	{
		for (int j = 0; j < COLS; j++) // создаем второй подцикл он будет заполнять колонки
		{
			cout << arr[i][j] << "\t"; // сиаут будет заполнять массив по строкам и колонкам, с табуляцией
		}
		cout << endl;
	}

}*/
/*void foo() //Функции c++ примеры. Синтаксис. Объявление, реализация функции. Параметры, аргументы. C++ #33
{
	cout << "Я хрень вызываюсь поверь" << endl;
}
int sum(int a, int b)  //Функции c++ примеры. Синтаксис. Объявление, реализация функции. Параметры, аргументы. C++ #33
{
	int result; //длинна запись функции суммы двух чисел
	result = a + b;
	return result;
}
int Sum(int s,int f)  //Функции c++ примеры. Синтаксис. Объявление, реализация функции. Параметры, аргументы. C++ #33
	{
	return s + f; // короткая запись функции суммы двух чисел
	}
int main() //Функции c++ примеры. Синтаксис. Объявление, реализация функции. Параметры, аргументы. C++ #33
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
/*int foo(int b) //Передача параметров в функцию по значению. Параметры функции. Передача аргументов в функцию. #34
{
	return ++b; // если написать void, компилятор будет ругаться на return, без него не будет возвращаться значение при вызове функции в переменную а.
				// правильно написать int foo(int a) тогда компилятор не будет ругаться на return, но чтобы сработал инкримент нужно сделать его префиксным, не b++ а ++b.
}
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int value = 1;
	value= foo(value);
	cout << value << endl;
}*/
/*void FillArray(int arr[],const int size) //Передача массива в функцию.Как передать массив в функцию.C++ для начинающих.Урок #35.
{				// в параметрах мы создали массив, и прописали константу
	srand(time(NULL));
	for (int i = 0; i < size; i++)   // это функция заполнения массива случайно сгенерироваными числами
	{
		arr[i] = rand() % 10;
	}
}
void PrintArray(int arr[], const int size) //Передача массива в функцию.Как передать массив в функцию.C++ для начинающих.Урок #35.
{
	for (int i = 0; i < size; i++) // это функция вывода в консоль массива
	{
		cout << arr[i] << endl;
	}
}
int main() //Передача массива в функцию.Как передать массив в функцию.C++ для начинающих.Урок #35.
{
	setlocale(LC_ALL, "RUS");

	const int SIZE = 10;
	int Massiv[SIZE];

	FillArray(Massiv, SIZE);
	PrintArray(Massiv, SIZE);

}*/
/*int a; // Область видимости, глобальные и локальные переменные.
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
/*void foo(int q,int a=7,double b=0.5) // Урок 38 параметры по умолчанию.
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
/*inline void foo(int a=7) // Урок 39 inline c++ что это. Ключевое слово inline. Встраиваемая функция.
{
	for (int i = 0; i < a; i++) // хрень которая и так есть в компиляторе
	{
		cout << "#" << endl;
	}
}*/
/*int sum(int a, int b) // урок 40 перегрузка функций
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
/*template <typename T1, typename T2>     //Шаблоны функций. Шаблонные функции c++. template typename. template class. Урок #41
void Sum(T1 a, T2 b)
{
	cout << a << endl;
	cout << b << endl;
}
int main()
{
	Sum(3, "parametr");
}*/
/*int Factorial(int N) // Рекурсия. Факториал
{
	if (N==1)
	{
		return 1;
	}
	return N * Factorial(N - 1);
}
int main() // Рекурсия. Факториал
{
	cout << Factorial(5) << endl;
}
int main() // Факториал без рекурсии циклом For
{
	setlocale(LC_ALL, "rus");
	int N;
	int fac = 1;
	cout << "Введите число, для подсчета факториала: " << endl;
	cin >> N;

	for (int i = N; i >= 1; i--)
	{
		fac = fac * i;
	}
	cout << "\nФакториал равен: " << fac << endl;
}*/
/*int main() //Указатели c++ что это. Для чего нужны. Указатели c++ разыменование. C++ для начинающих. Урок #46
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
/*void foo(int* pa) // Передача параметров в функцию по указателю c++. Передача указателя в функцию си. Урок #48
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
/*void foo(int* pa, int* pb, int* pc) //Возврат нескольких значений функции через указатели. Функция возвращает несколько значений. #49
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

	cout << "Фунцкция foo сработала! " << endl;
	foo(&a, &b, &c);
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	cout << "c= " << c << endl;



}*/
/*int main() // Урок 50 ссылки у указатели разница
{
	setlocale(LC_ALL, "rus");
	int a = 5;
	int* Ukazatel = &a;
	int& Ssilka = a;
	cout << "Ukazatel \t" << *Ukazatel << endl;
	Ukazatel+=2;									// сдвинули указатель на 4 байта, после этого поменяется адрес указателя и значение станет от нового адреса
	cout << "Ukazatel \t" << *Ukazatel << endl;

	Ssilka += 2; // тут просто к значению а не к адресу прибавляется 2
	cout << "Ssilka \t" << Ssilka << endl;
	Ssilka = 55; // тут меняем само значение переменной а через адрес ссылки
	cout << "Переменная а \t" << a << endl;
	int *Ukazatel2 = &Ssilka; // создали новый указатьль и поместили в него адрес ссылки, в которой хранится адрес переменной а
	cout << "Переменная а " << a << endl;
	*Ukazatel2 = 38;
	cout << "Ukazatel2 \t  " << a << endl;


}*/
/*void foo(int a) //Передача параметров в функцию по ссылке. Разница между ссылкой и указателем. Урок #51
{
	a = 1; // здесь ничего не произошло, так как воид не возвращает, ретурна нету так как не инт, просто в функцию вошло и выкинуло присвоиное значение
}
void foo2(int& a)
{
	a = 2; // Передали параметр по ссылке, напрямую к данным присваивается значение в функции
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
	cout << "Переменная Value= " << value << endl << endl;

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
/*int main() //new c++ что это. new c++ пример. c++ new delete. delete c++ что это. delete c++ пример. Урок #53
{
	int* pa = new int;
	*pa = 10;
	cout << *pa << endl;
	delete pa; // сначало удаляем данные
	pa = NULL; // потом стираем указатель
	if (pa!=NULL)
	{
		cout << pa << endl;
	}
	delete pa;
}*/
/*int main() // Динамический массив с++ пример. Создание, заполнение, удаление, размер динамического массива. #55
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int size = 6; // переменная сайз = 6, это размер ячеек массива
	int* arr = new int[size]; // создали указатель на массив, запросили выделение в динамической памяти
	for (int i = 0; i < size; i++) //цикл на заполнение массива рандомных чисел в диапазоне от 0 до 20
	{
		arr[i] = rand() % 20 + 1;
	}
	for (int i = 0; i < size; i++) // цикл на вывод массива
	{
		cout << arr[i] << "\t"; // этот сиаут выводит значения каждой из ячеек массива
		cout << arr + i << endl; // не используется разименование , поэтому выведется адрес каждой из ячеек массива
	}
	delete[]arr; // убираем за собой мусор

}*/
/*//Урок 58 копирование динамического массива.
void FillArray(int* const arr, int const size) // функция на зполнение массива случайными числами от 0 до 9
{		// в скобках константный указатель массива, чтобы данные не исказились в функции, а были только те которые мы прописали в мейне
			// константный целочисленный размер массива, для тех же целей что и выше
	for (int i = 0; i < size; i++) // пробежит по ячейкам массива с размером указаным в мейне.
	{
		arr[i] = rand() % 10; //пробегает по ячейкам , пока i<size, и добавляет случайные числа в елементы массива
	}
}
void ShowArray(const int* const arr, int const size) // не совсем понимаю значениея отличимого от верхнго, но у нас тут уже константный инт и константный указатель на массив+
			// такойже константный целочисленный размер.
{
	for (int i = 0; i < size; i++) // тоже самое что и на заполнение, только тут сиаут выводит числа массива с промежутком в табуляцию
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
int main() // создать два массива, чтобы скопировать в дальнейшем один в другой, поехали.
{
	setlocale(LC_ALL, "rus");
	int size = 10; // размер массива будет 10
	int* firstArray = new int[size]; // создали диенамический массив с размером в 10 ячеек
	int* secondArray = new int[size]; // создали второй динаический массив на 10 ячеек
	FillArray(firstArray, size); // вызываем первую функцию филлэрей для заполнения массива с размером в 10 ячеек, случайными числами из функции.
	FillArray(secondArray, size); // тоже самое что и с ферст ерей

	//firstArray = secondArray; !!!!так копировать нельзя!!!! тут мы просто присваиваем один и тотже адрес в памяти двум указателям! тоесть делает два указателя на один и тотже массив

	cout << "firstArray =\t";
	ShowArray(firstArray, size); // вторая функция выводит в консоль первый массив с размером 10 ячеек
	cout << "secondArray =\t";
	ShowArray(secondArray, size); // // тоже самое, в скобках прописали массив который нужен и его размер, как и в параметрах функции
	delete[]firstArray; // удаляем данные первого массива
	firstArray = new int[size]; // выделяем для массива(указателя) новое место в оперативной памяти, так как мы удалили старые данные
	for (int i = 0; i < size; i++) // цикл фор для заполнения нового массива, но уже не случайными числами, а будем присваивать по елементно значения из второго массива
	{
		firstArray[i] = secondArray[i]; // тут будет поэтапно присваение значений
	}
	cout << "============================================" << endl; // просто разделительная черта
	cout << "firstArray =\t";
	ShowArray(firstArray, size); //мне кажется не требует обьяснений, просто показывает массивы опять, первый и второй
	cout << "secondArray =\t";
	ShowArray(secondArray, size); // данные выведутся одинаковые, но уже с разными адресами, тоесть будут два массива с одинаковыми данными!


	delete[]firstArray; // в коментариях сказано о том что можно было не удалять данные из первого массива, а просто по елементно заполнить массив, типо смысла нет,но!
	delete[]secondArray; // у нас тут сразу указан размер, а еслиб размеры разные были или еще чтото, тип данных бы отличался, я так понял что лучше тогда удалить.хз



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
void push_back(int *&arr, int &size,int value) // 1) *&arr, мы передаем указатель на массив, ссылку на указатель на массив, если передавать просто указатель, то в шапке этой
//функции создастся новый указатель, и тот чт ов мейне после завершения этой функции ничего об этом новом указателе знать не будет. 2) так же и с size, если не указать что
//это сссылка на size в main'e то размер внутри этой функции не увеличиться, функция просто заполнит теже 5 ячеек данными, и не увеличит size на 1 ячейку до 6.
{
	int* newArray = new int[size+1]; // создали новый указатель на массив, я так понял он временный, типо сначала сюда помещаются старые данные
	for (int i = 0; i < size; i++)
	{
		newArray[i] = arr[i]; // вот здесь скопировались данные
	}
	newArray[size] = value; // это типо фишка от симпла, я так понял у нас массив сейчас увеличен на 1 ячейку, но она не заполнена нашим циклом фор выше, и так как осчет
	//в массиве начинается с 0 элемента, а у нас было 5 елементов (0,1,2,3,4) а сам size у нас передал значение с mine 5 то это получается что в массиве и заполнитеся 6 елемент
	// 5 елементов в массиве это (0,1,2,3,4) , 6 елементов это (0,1,2,3,4,5®) вот эта петерка какрас и написана в size, она и заполнится. Надеюсь когда я буду опять не понимать
	//что происходит и найду эту запись, я смогу понять сам себя, потомучто симпла я понял с трудом.
	size++; // тут я не очень понял почему size увеличилась на еденицу после присвоения нового значения в массив, он же у нас уже и так увеличен на +1.
	//UPD я прошелся отладчиком и понял что этот инкремент увеличивает майновскую size на +1, чтобы с этой функции в майне уже был размер на +1, так как мы в шапке функции
	// значение size передали по ссылке, а если мы передаем значение по ссылке, то мы можем изменить данные которые находятся в мейне
	delete[]arr; // тут мы отчистили старые данные нашего первого массива
	arr = newArray; // так как наш старый массив чистый, мы присваиваем ему новые данные.

}
void pop_back(int*& arr, int& size) // тут наоборот убираем 1 элемент
{
	size--; // простооо уменьшаем сразу размер на 1, вместо 6 стало 5
	int* newArray = new int[size];
		for (int i = 0; i < size; i++)
		{
			newArray[i] = arr[i]; // заполняем только те самые 5 елементов
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
/*int main() // Урок 62 таблица ASCII
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
int main() // Урок 63 Указатели символьные строки и функции
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
/*int main() // Урок 64 конкатенация строк
{
	//char str1[255] = "hello"; это работает но толку от нее нету
	//char str2[255] = "world";
	// strcat_s(str1, str2); эта ебота у меня не работает
	setlocale(LC_ALL, "rus");
	string str1 = "Мартин";
	string str2 = "Игоревич";
	string str3 = "Дугин";
	string result;
	result = "Фамилия "+ str3 + "\tИмя " + str1 + "\tОтчество " + str2;  // + это перегруженный оператор в классе стринг!
	cout << result;

}*/
/*void foo1() // Указатель на функцию в качестве параметра. Передача функции в качестве параметра. Yрок #65
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
void ShowInfo(string(*ShowInfo)()) // Так используют указатель на функцию, она ничего не возвращаетпоэтому void, название функции(тип_функции(*Название функции) которое будет
									// использоваться внутри этой функции, я оставил такоеже что и название самой функции,(параметры) у нас без них
{
	cout << ShowInfo() << endl; // тут просто вывод на экран и название название функции которое после стринга
}



int main()
{
	void (*fooPointer1)(); // без параметра как у функции
	fooPointer1 = foo1;
	fooPointer1();


	void(*fooPointer2)(int a); // это с параметром как у функции
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
/*#define PI 3.14 //Препроцессор что это. Директива #define. Макросы. Директивы препроцессора что это. C ++ Урок #66
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
/*#define FOO(x,y)((x)*(y)) // c++ макрос функция. Макросы с аргументами. Макрос с параметрами. C ++ Для начинающих. Урок #67
int main()
{
	cout << FOO(5, 6) << endl;
}*/
/*#define DEBUG // если закоментируем //#define то сиаут о начале и конце не будет выводиться
int main()
{
	setlocale(LC_ALL, "rus");

#ifdef DEBUG
	cout << "Начало цикла" << endl;
#endif // DEBUG
	for (int i = 0; i < 5; i++)
	{
		cout << i << endl;
	}
#ifdef DEBUG
	cout << "Конец цикла" << endl;
#endif // DEBUG

#ifdef DEBUG // #if DEBUG > 5  условие "если" с константным значением. выполнится если условие истинно!
	cout << "DEBUG определен" << endl;
#else // #elif выполнется дополнительня проверка
	cout << " DEBUG НЕ определен" << endl;
#endif // DEBUG

}*/
/*// Условный тернарный оператор что это.Как работает.Как использовать.C ++ Для начинающих.Урок #69
int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	cout << "Введите переменную а = ";
	cin >> a;
	if (a < 10)
	{
		cout << a << " меньше 10";
	}
	else if (a>10)
	{
		cout << a << " больше 10";
	}
	else
		cout << a << " равнa 10";
	//// Тернарный оператор
	a < 10 ? cout << a << " меньше 10" : a>10 ? cout << a << " больше 10" : cout << a << " равна 10"; // тоже самое что и иф елсе только в одну строчку




}*/
/*//argc argv c++ что это. Параметры функции main argc argv. Аргументы main. C ++ Урок #70
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "rus");

	for (int i = 0; i < argc; i++)
	{
		cout << argv[i] << endl;
	}
}*/
/*//Что такое класс. Что такое объект класса. Экземпляр класса это. Класс ООП это. Урок #73
class Human
{
public:
	int age;
	string name;
	int weight; // этот параметр веса я не использовал :D

};
class point
{
public:
	int x, y, z;

};
int main()
{
	Human firstHuman; // Любое имя, хоть одна буква а
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
/*//Методы класса. Что такое методы в программировании. Вызов метода класса. Функции. C++ Урок #74
class Human
{
public:
	int age, weight;
	string name;

	void print() // функция работает с параметрами которые прописаны уже в этом классе.
	{
		cout << "Имя: " << name << "\nВозраст: " << age << "\nВес: " << weight <<"кг"<< endl;
	}


};

int main()
{
	setlocale(LC_ALL, "rus");
	Human firstHuman;
	firstHuman.age = 30;
	firstHuman.name = "Petruha Maslenok";
	firstHuman.weight = 100;
	firstHuman.print(); // так как функция не принимала никакие параметры в классе, а работала с теми что в нем были, то и сюда она ничего не передает из параметров
	// Метод принт выведет значения именно этого обьекта firstHuman, так как мы просто наполнили свойствами класс Human, а потом уже создали обьект класса Human, и
	// наделили именно этот обьект разными свойствами, такими какимя возраст вес. Из этого метот принт описанный в классе, будет работать именно с обьектом . который его вызвал.





}*/
/*//Модификаторы доступа классов. public private protected что это. Спецификаторы доступа. C++ Урок #75
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
/*//Что такое геттеры и сеттеры для класса. Методы get и set. Инкапсуляция это. Пример. C++ Урок #76
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
		return x; //а тут геттер возвращает нашу х, которая уже пятерка
	}
	void SetX(int valueX) // в скобочки приписывается пятерка с мейна
	{
		x = valueX; // тут эта пятерка присваевается х
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
/*//Инкапсуляция ООП пример. private методы. Что такое инкапсуляция. C++ Для начинающих. Урок#77
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

	pointer(int valueX,int valueY) // это конструктор, если мы не создадим в классе конструктор то он будет пустым и скрытым по умолчанию.
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
	//pointer a; // так как мы создали конструктор , и в нем есть введенные нами параметры, эта запись уже не работает
	pointer a(5, 44); //при создании обьекта, с прописанным нами конструктором необходимо сразу вписывать в скобочках значения.
	a.show();
	pointer b(77, 14);
	b.show();


}*/
/*//Перегрузка конструкторов класса. Что такое перегрузка. Как перегрузить конструктор. Урок#79
class point
{
private:
	int x, y;

public:

	point() // так выглядит конструктор по умолчанию, создаваемый скрытно компилятором, точнее я так понял IDE среда разработки
	{
		x = 0;
		y = 0;
	}

	point(int valueX, int valueY) // у нас теперь конструктор Point перегружен, в зависимости от параметров вызовится этот или тот что выше
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
/*//Деструктор что это. Зачем нужен деструктор класса в ООП. Деструктор с параметрами. Перегрузка. #80
class MyClass
{
	int* data; //указатель на дату
public:
	MyClass(int size)
	{
		data = new int[size]; // в дату засунули динамический массив
		for (int i = 0; i < size; i++)
		{
			data[i] = i;
		}
		cout << "Объект " << data << " Вызвался конструктор!" << endl;
	}
	~MyClass()
	{
		delete[]data; // чтобы удалить динамический массив, так как деструктор удалит конструктор, а выделенную в конструкторе дин.память не очистит
		cout << "Объект " << data << " Вызвался деструктор!" << endl;
	}

};
void foo()
{
	cout << "Foo начало выплнения " << endl;
	MyClass(1);
	cout << "Foo конец выплнения " << endl;
}
int main()
{
	setlocale(LC_ALL, "ru");
	foo();
	//MyClass secondclass(2);
	//MyClass thirdclass(3);

}*/
/*class Myclass //Ключевое слово this в ООП. Что означает. Что это такое. Для чего нужен this указатель C++ #81
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
	void SetY(int y) // если будет так, то компилятор не поймет какому y присвоить пятерку, и выдаст 0
	{
		this->y = y; //чтобы присвоить y=5 ; надо написать this->
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
	cout << "=========================" << endl; // ниже пример с this->
	classOne.SetY(5);
	classOne.print();



}*/
/* //Конструктор копирования. Что это. Пример. Когда вызывается Копирование объектов по умолчанию C++ #82
class MyClass
{
private:
	int Size;
public:
	int* data; // создаем массив, а указатель это и есть массив, так как он указывает на первый элемент массива

	MyClass(int size) // параметр будет отвечать за количество элементов в массиве который мы создаем в динамической памяти
	{
		this->Size = size; // переменной Size Будем присваивать тот size который получаем из вне. Это для того чтобы мы помнили какого размера у нас массив.
		this->data = new int[size]; // здесь выделяем массиву динамическую память вроде как, этот симпл заебал уже постоянно по разному объяснять.
		for (int i = 0; i < size; i++) //здесь мы заполняем массив на 10 элементов
		{
			data[i] = i; // вот здесь идет присвоение значения в каждый элемент
		}
		cout << this << " Вызвался конструктор!" << endl; //this выласт адрес класса в памяти, а не его значение
	}

	MyClass(const MyClass& other) // конструктор копирования, в значение &other попадает объект который хотим скопировать, в нашем случае это classOne
	{
		this->Size = other.Size; // данные из classOne копируются в новый объект, данные это размер массива.
		this->data = new int[other.Size]; // выделили новое место в памяти под массив, соотвественно под 10 элементов которые у нас указаны в classOne

		for (int i = 0; i < other.Size; i++) // с помощью цикла фор будет бежать 10 раз, так как в classOne 10 элементов
		{
			this->data[i] = other.data[i]; // будет заполнять новый объект данными из старого объекта, из classOne в classTwo
		}
		cout << this << " Вызвался конструктор копирования" << endl;
	}

	~MyClass()
	{
		delete[]data;
		cout << this << " Вызвался деструктор!" << endl;
	}

};
void Foo(MyClass value)
{
	cout << "Вызвалась функция Foo" << endl;

}
MyClass foo2()
{
	cout << "Вызвалась функция Foo_2!" << endl;
	MyClass temp(2);
	return temp; // когда здесь вызывается ретурн, то на месте foo2()
}
int main()
{
	setlocale(LC_ALL, "rus");

	MyClass classOne(10);
	MyClass classTwo(classOne); // копируем 1й объект


	//////////////////////////////////////////////////////////////////////
	//foo2(); //  вот здесь на месте этой функции создается новый объект
	//Foo(classOne);
} // как только мы спускаем сюда, и выходим из мейна, у нас включается деструктор, и как в стеке начинает удалять данные с объектами по принципу первый зашел последний вышел.
*/
/* //Перегрузка операторов пример. ООП. Перегрузка оператора присваивания. C++ Для начинающих. Урок#83
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
		cout << this << " Вызвался конструктор!" << endl;
	}

	MyClass(const MyClass& other)  // коснтруктор копирования
	{
		this->Size = other.Size;
		this->data = new int[other.Size];

		for (int i = 0; i < other.Size; i++)
		{
			this->data[i] = other.data[i];
		}
		cout << this << " Вызвался конструктор копирования" << endl;
	}

	MyClass& operator = (const MyClass& other) // перегрузка оператора присваивания a=b это ||a.operator=(b);|| так видит компилятор
	{
		cout << this << " Вызвался конструктор присваивания" << endl;

		this->Size = other.Size; // создаем такойже размер в а как и в b
		if (this->data != nullptr) // делаем проверку есть ли у нас данные в объекте а
		{
			delete[]this->data; // они там есть поэтому заходим в цикл, удаляем данные в объекте а
		} //получется у нас сейчас 2 объекта а на 2 ячейки но пустой, и b на 2 ячейки но заполненный

		this->data = new int[other.Size]; // выделяем новую область в дин памяти, согласно размеру и количеству элементов из которого мы копируем

		for (int i = 0; i < other.Size; i++)
		{
			this->data[i] = other.data[i]; //копируем из b в а
		}
		return *this;
	}

	~MyClass()
	{
		delete[]data;
		cout << this << " Вызвался деструктор!" << endl;
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
/*//Перегрузка оператора равенства == и не равно !=. Перегрузка логических операторов сравнения. C++ #84
class point
{
private:
	int x, y;
public:
	//bool operator==(const point &other) // оператор равенства и не равенства, принимает в себя объект сравнения константный.
	//{
	//	if (this->x==other.x&&this->y==other.y) // сравниваем поля х и у, дословно "эта х равна другой х и эта у равна другой у"
	//	{
	//		return true; // так как у нас &&(и) то если хоть одно false, то оно вернет false
	//	}
	//	else
	//	{
	//		return false; // вообще так никто уже не пишет, это по нубярски, дальше будет вариант короче и лучше
	//	}
	//}
	bool operator==(const point& other) // так правильнее
	{
		return this->x == other.x && this->y == other.y; // мы сразу возвращаем результат этого выражения
	}
	bool operator !=(const point& other)
	{
		return !(this->x == other.x && this->y == other.y); // operator != не равенства, если они не равны вернет false
	}
	point() // это грубо говоря стандартный конструктор
	{
		x = 0;
		y = 0;
		cout << this << "constructor" << endl;
	}

	point(int valueX, int valueY) // это конструктор
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
/*//Перегрузка оператора сложения. Перегрузка операторов пример.C++ Для начинающих. Урок#85
class point
{
private:
	int x, y;
public:

	point() // вот он стандартный конструктор
	{
		x = 0; //вот эти два поля х и у инициализированны нулями.
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
		point temp; // у объекта тем будут тоже два параметра х,у; они будут инициализированны нулями так как у нас переписан стандартный конструктор, и мы установили поля на 0
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
		 //(x,y) эти параметры мы и передаем в класс, они называются поля объектов.
	point a(5,3);
	point b(4,7);
	point c = a + b;
	c.show();
}*/
/*//Перегрузка инкремента и декремента. Постфиксного и префиксного. ООП перегрузка операторов. C++ #86
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
	point& operator ++() // префиксный инкремент переменной а
	{
		this->x++; // эти записи идентичны, можно так и так
		this->y += 1;
		return *this;
	}
	point& operator++(int value) // посфиксный инкремент, обязательно в параметрах тип данных
	{
		point temp(*this);
		this->x += 1;
		this->y++;
		return temp;
	}
	point& operator--(int value) // посфиксный дикримент, обязательно в параметрах тип данных
	{
		point temp(*this);
		this->x -= 1;
		this->y--;
		return temp;
	}
	point& operator --() // префиксный дикримент переменной а
	{
		this->x--; // эти записи идентичны, можно так и так
		this->y -= 1;
		return *this;
};
int main()
{
	point a(1, 1);
	++a;
	a.show();

}*/
/* //Перегрузка оператора индексирования . Перегрузка операторов пример. C++ Для начинающих. Урок#87
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
/*//Дружественные функции и классы пример. Для чего используются. Как определяются. Для двух классов #88
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
/*//Определение методов вне класса. Вынести функцию в из класса. Вынести описание метода вне класса. #89
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
/*//Дружественный метод класса. ООП. friend c++ что это. Функции друзья. C++ Для начинающих. Урок#90
class Human;
class Apple;
class Human
{
public:
	void TakeApple(Apple& apple); // эта функция дружественная

	void EatApple(Apple& apple) // эта функциия не является дружественной в том классе, к полям которой мы хотим получить доступ
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
	friend void Human::TakeApple(Apple& apple); // мы прописали что функция в классе human дружественная
};
void Human::TakeApple(Apple& apple) //вынесли функцию за класс, поидее чтобы не было ошибок.
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
/*//Дружественные классы. ООП. friend class. friend c++ что это. C++ Для начинающих. Урок #91
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
	friend Human; // тут мы разрешаем классу HUMAN получать доступ к private and protected полям класса Apple
	Apple(int weight, string color)
	{
		this->weight = weight;
		this->color = color;
	}
private:
	int weight;
	string color;

};
void Human::TakeApple(Apple& apple) //вынесли функцию за класс, поидее чтобы не было ошибок.
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
/*//static что это. Статические поля класса. Инициализация. Ключевое слово static. C++ #92
class Apple
{
public:

	static int Count;

	Apple(int weight, string color)
	{
		this->weight = weight;
		this->color = color;
		Count++; // при создании объекта (яблока) мы будем увеличивать количество (count) на еденицу.
				 // так как переменная Count статическая и одна для всех объектов, мы так можем контролировать количество яблок.
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
	cout << apple.Count << endl; // мы можем все это не делать
	cout << apple2.Count << endl;// мы можем все это не делать
	cout << apple3.Count << endl; // мы можем все это не делать

	cout << Apple::Count << endl; // можем обратится прямо к классу, минуя объекты. ЧТобы обратится к статической переменной нам не нужен экземпляр объекта.

}*/
/*class Gamer // Мое домашнее задание к уроку 93 id для объектов
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
/*//Статические методы класса зачем нужны. Модификатор static. Как влияет. ООП. Для начинающих. Урок #94
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
	static void ChangeColor(Apple &apple,string color) // статичный метод
	{
		apple.color = color;

	}
	void ChangeColorNoStatic(string color) // такойже метод как и выше только не статичный,
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
	Apple::ChangeColor(apple, "Black0"); // можно обратится напрямую через класс:D
	apple.show();

	Apple apple2(100, "Green");
	Apple apple3(170, "Yellow");
	cout<<Apple::GetCount()<< endl;



}*/
/*//Вложенные классы с++ пример. Внутренние классы. Зачем нужны. inner class. ООП. Для начинающих #95
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
/*//Массив объектов класса. Динамический. Статический. Создание Особенности. ООП C++ Для начинающих #96
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

	Pixel() // конструктор по умолчанию для создания массива объекта, без него массив не сможем создать
	{
		//r = 0; Лучше воспользоваться другим синтаксисом
		//g = 0;
		//b = 0;
		r = b = g = 0; // код пойдет справа на лево, будет присвоин всем значениям 0, чтобы там не хранился мусор.
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
	Pixel arr[LENGTH]; // массив пользовательского типа(класса)
	cout << arr[0].GetInfo() << endl; // Метод GetInfo выводит строковые значения? короче выводит переменные rgb.
	arr[0] = Pixel(5, 25, 35); // поля были 0, мы присвоили им значения
	cout << arr[0].GetInfo ()<< endl;
	//Pixel arr[LENGTH] Статический Массив
	//{
	//	Pixel(10,0,110),
	//	Pixel(100,20,30),
	//	Pixel(405,50,540),
	//	Pixel(210,220,110),
	//	Pixel(30,20,70)
	//};

	int SIZE=rand()%10+1; // Создаем динамический массив.
	Pixel* array = new Pixel[SIZE];
	array[0] = Pixel(3, 55, 100);
	cout << array[0].GetInfo() << endl;

	delete[]array;

}*/
/*//Что такое агрегация и композиция. Отношения между классами и объектами. ООП. C++ Для начинающих #97
class Cap // это пример агрегации
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
		brain.Think(); // в методе Think класса Human, вызываем метод Think объекта brain.
	}
	void InscpectTheCap()
	{
		cout << "Моя кепка " << cap.GetColor()<<" цвета" << endl;
	}

private:
	//class brain является вложенным для класса human, мы больше нигде не можем его использовать
	class Brain // это композиция
	{
	public:
		void Think()
		{
			cout << "Я думаю!!" << endl;
		}
	};
	Brain brain; // Создали обьект Brain для Human, чтобы он моег его использовать.
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
/*//Наследование в ООП пример. Что такое наследование. Для чего нужно наследование классов. ООП. C++ #98
class Human
{
private:
	string name ;
public:
	// string name; // классам Student and Proffesor доступно это поле паблик, также это поле будет унаследованно от класса Student классом ZaochnikStudent!
	string GetName() // этот метод паблик, с помощью этого метода мы можем вызывать имя написанное в привате, всеми классами которые наследуют от HUMAN!:D
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
	void Learn() // классу Human этот метод не доступен.
	{
		cout << " Я учусь! " << endl;
	}
};
class ZaochnikStudent :public Student
{
public:
	void Learn()
	{
		cout << "Я бываю в университете реже обычного студента! :D " << endl;
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
	student2.SetName("Марковка Павловна");
	cout << student2.GetName() << endl;

}*/
/*//Модификаторы доступа при наследовании. private public protected Спецификаторы доступа. ООП. C++ #99
class A
{
private:
	 string msgTwo = "сообщение два";
public:
	string msgOne = "сообщение один";
protected:
	string msgThree = "сообщение три";


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
/*//Порядок вызова конструкторов при наследовании. Как вызываются конструкторы. ООП C++ Начинающим #100
//Порядок вызова деструкторов при наследовании.Деструкторы.ООП C++ Для начинающих.Урок #101
class A
{
public:
	A()
	{
		cout << "Вызывается конструктор по умолчанию класса А" << endl;
	}
	~A()
	{
		cout << "Вызывается деструктор по умолчанию класса А" << endl;
	}
};
class B :public A
{
public:
	B()
	{
		cout << "Вызывается конструктор по умолчанию класса B" << endl;
	}
	~B()
	{
		cout << "Вызывается деструктор по умолчанию класса B" << endl;
	}
};
class C :public B
{
public:
	C()
	{
		cout << "Вызывается конструктор по умолчанию класса C" << endl;
	}
	~C()
	{
		cout << "Вызывается деструктор по умолчанию класса C" << endl;
	}

};
int main()
{
	setlocale(LC_ALL, "rus");

	C c;


	return 0;

}*/
/*//Вызов конструктора базового класса из конструктора класса-наследника. Наследование. ООП C++ #102
class A
{
public:
	A()
	{
		msg = "пустое сообщение";
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
	B():A("наше новое сообщение") // вызовется конструктор A(string msg) принимаемый в себя сообщение.
	{

	}
	B() :A("sda",1) // можно так тогда выберется конструктор с двумя параметрами
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
/*//Виртуальные методы класса c++. Ключевое слово virtual. Ключевое слово override. ООП. C++ #103
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
	void Shoot(GUN* gun) // в параметрах указатель базового класса, где виртуальная функция, я так понял
	{
		gun->Shoot();
	}

};
int main()
{
	setlocale(LC_ALL, "rus");
	GUN pistol;
	GUNPulimet pulimet;

	//GUN* weapon = &pistol;  //в указатель класса GUN, присваиваем ссылку объекта класса GUNPulimet
	//weapon->Shoot(); // при вызове методом Shoot, сработает метод с GUNPulimet

	Player csgo;
	csgo.Shoot(&pulimet); // так как в параметрах функции у нас указатель, сюда нужно указывать ссылку на обэект класса

}*/
/*//Абстрактный класс с++ пример. Чисто виртуальная функция. virtual. override. Полиморфизм ООП C++ #104
class Weapon //этот класс абстрактный
{
public:
	virtual void Shoot() = 0; //сообщаем компилятору что это чисто виртуальная функция.
	void Foo()// реализованный метод будет работать в наследниках
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
		Bazooka BOOM;// метод из абстрактоного класса.
		BOOM.Foo();
		cout << "Bazooka ~BIGBADABOOM~!" << endl;
	}
};
class Player
{
public:
	void Shoot(Weapon* weapon) // в параметрах указатель базового класса, где виртуальная функция, я так понял
	{
		weapon->Shoot(); //принимает указатель на метод шут?
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
	csgo.Shoot(&pulimet); // так как в параметрах функции у нас указатель, сюда нужно указывать ссылку на обэект класса
	cout << "Player change weapon" << endl << endl;
	csgo.Shoot(&pistol);
	cout << "Player change weapon" << endl << endl;
	csgo.Shoot(&muha);
	cout << "Player change weapon" << endl << endl;
	csgo.Shoot(&carambit);
	cout << "Player noob,his dead D:" << endl << endl;

	carambit.Foo();// реализованый метов в абстрактом классе работает в наследниках.

	//Gun* weapon = &pulimet;  //в указатель класса Gun, присваиваем ссылку объекта класса MachineGun
	//weapon->Shoot(); // при вызове методом Shoot, сработает метод с MachineGun
}*/
/*//Виртуальный деструктор класса C++. Что это такое. Наследование. Полиморфизм. Для начинающих #105
class A
{
public:
	A()
	{
		cout << "Выделена динамическая память класса А" << endl;
	}
	virtual ~A()
	{
		cout << "Освобождена динамическая память класса А" << endl;
	}
};
class B :public A
{
public:
	B()
	{
		cout << "Выделена динамическая память класса B" << endl;
	}
	~B() override
	{
		cout << "Освобождена динамическая память класса B" << endl;
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
/*//Чисто виртуальный деструктор c++. Наследование. Полиморфизм. virtual. override. Для начинающих #106
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
/*//Делегирующие конструкторы c++. Вызов конструктора из конструктора. ООП. С++ Для начинающих. #107
class Human
{
public:
	Human(string name)// 3. этот конструктор присвоит имя аристарх, и нулями два следующих парметра
	{
		this->name = name+"!"; // решили мы поменять логику, так как делегированные конструкторы, логику меняем только в одном конструкторе, если бы не было делегации пришлось бы менять её везде.
		this->age = 0;
		this->weight = 0;
	}
	Human(string name,int age):Human(name) // 2. вот на него, он в свою очередь так же скинет на конструктор выше 4. потом опять запуститься этот и присвоит age
	{
		this->age = age;
	}
	Human(string name,int age,int weight):Human(name,age) //1. вот этот, но сразу делегирует свою работу на конструктор с 2мя параметрами 5. запуститься этот, присвоит weight и вернется в мейн
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

	Human hum("Аристарх",26,78); // вызовится конструктор с 3мя параметрами



}*/
/*//c++ вызов виртуального метода базового класса. ООП. Изучение с++ с нуля. Для начинающих. Урок #108
class Msg
{
public:

	Msg(string message)
	{
		this->message = message;
	}


	virtual string GetMsg() // мы прописали такойже функции внизу ::Msg:: чтобы когда она выполнялась то переходила сюда, иначе она бы там ничего не возвращала и происходила рекурсия.
	{
		return message;
	}

private:
	string message;

};
class BreaketMsg :public Msg
{
public:
	BreaketMsg(string message) :Msg(message) // тут мы делегируем на базовый класс Msg, Так как там описан конструктор на принятие строки, он там выполнится и вернется сюда грубо говоря.
	{

	}
	string GetMsg() override
	{
		return "[" + ::Msg::GetMsg() + "]"; // без ::Msg:: будет рекурсия(вызов самого себя), c этими параметрами мы указали чтобы вызывался метод именно базового класса Msg
	}
};
class Printer
{
public:
	void Print(Msg* message) // параметром принимает указатель на класс Msg
	{
		cout << message->GetMsg() << endl;
	}

};
int main()
{
	setlocale(LC_ALL, "rus");

	Msg m("Привет!"); // создали объект класса Msg назвали его m передали туда строку.

	Printer p;
	p.Print(&m);  // в классе Printer метод Print принимает в себя указать на класс Msg со строкой которую возвращает Msg. тоесть мы выше объектом m вписали строку, вот этот класс Printer
				   // принял в себя указатель на эту строку, реализацией функции Print мы просто эту строку которую приняли, выводим на экран, виртуальным методом GetMsg которая возвращает строку.

	BreaketMsg b("Hey");
	p.Print(&b);




}*/
/*//Множественное наследование c++ пример. ООП. Изучение С++ с нуля для начинающих. Урок #109

class Car
{
public:
	string str1 = "Поле класса Машина";

	void Drive()
	{
		cout << "Я еду!" << endl;
	}

};

class Airplain
{
public:
	string str1 = "Поле класса Самолет";

	void Fly()
	{
		cout << "Я лечу!" << endl;
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
	FlyingCar FC; // класс FlyingCar наследует два класса, и может вызывать их методы через объект!
	FC.Drive();
	FC.Fly();
	cout << endl << FC.::Car::str1 << endl; // так как мы нарочно указали одинаковые переменные типа стринг, мы указали через ::Car:: и ::Airplain:: чтобы он вызывал поле именно с нужного нам класса
	cout << endl << FC.::Airplain::str1 << endl;

	Car* ptrC = &FC;
	Airplain* ptrA = &FC;



	return 0;
}*/
/*//Порядок вызова конструкторов при множественном наследовании. ООП. С++ начинающих. Урок #110
//Порядок вызова деструкторов при множественном наследовании. ООП. С++ начинающих. Урок #111
class Car
{
public:
	Car()
	{
		cout << "Вызвался конструктор класса Car" << endl;
	}
	string str1 = "Поле класса Машина";

	~Car()
	{
		cout << "Вызвался деструктор класса Car" << endl;
	}

	void Drive()
	{
		cout << "Я еду!" << endl;
	}

};

class Airplain
{
public:
	Airplain()
	{
		cout << "Вызвался конструктор классa Airplain" << endl;
	}
	string str1 = "Поле класса Самолет";

	~Airplain()
	{
		cout << "Вызвался деструктор класса Airplain" << endl;
	}

	void Fly()
	{
		cout << "Я лечу!" << endl;
	}

};
class FlyingCar :public Airplain, public Car // конструктор вызовется по порядку, а не с класса прародителя = Airplain->Car->FlyingCar.
{
public:
	FlyingCar()
	{
		cout << "Вызвался конструктор классa FlyingCar" << endl;
	}

	~FlyingCar()
	{
		cout << "Вызвался деструктор класса FlyingCar" << endl;
	}

};
int main()
{
	setlocale(LC_ALL, "rus");

	FlyingCar fc;
	cout << endl << endl;



	return 0;
}*/
/*//С++ множественное наследование одинаковые методы. ООП. Изучение С++ для начинающих. Урок #112
class Car
{
public:
	Car()
	{
		cout << "Вызвался конструктор класса Car" << endl;
	}
	string str1 = "Поле класса Машина";

	~Car()
	{
		cout << "Вызвался деструктор класса Car" << endl;
	}

	void Use()
	{
		cout << "Я еду!" << endl;
	}

};

class Airplain
{
public:
	Airplain()
	{
		cout << "Вызвался конструктор классa Airplain" << endl;
	}
	string str1 = "Поле класса Самолет";

	~Airplain()
	{
		cout << "Вызвался деструктор класса Airplain" << endl;
	}

	void Use()
	{
		cout << "Я лечу!" << endl;
	}

};

class FlyingCar :public Airplain, public Car // конструктор вызовется по порядку, а не с класса прародителя = Airplain->Car->FlyingCar.
{
public:

	FlyingCar()
	{
		cout << "Вызвался конструктор классa FlyingCar" << endl;
	}

	~FlyingCar()
	{
		cout << "Вызвался деструктор класса FlyingCar" << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "rus");

	FlyingCar fc;
	((Airplain)fc).Use();
	((Car)fc).Use();
	//Вызвался конструктор классa Airplain
	//Вызвался конструктор класса Car
	//	Вызвался конструктор классa FlyingCar
	//	Я лечу!
	//	Вызвался деструктор класса Airplain
	//	Я еду!
	//	Вызвался деструктор класса Car
	cout<< endl;

	fc.::Car::Use(); // по мне так такой метод приведение типа лучше
	fc.::Airplain::Use();
	//	Я еду!
	//	Я лечу!
	cout << endl;

	fc.Car::Use();
	fc.Airplain::Use();
	//	Я еду!
	//	Я лечу!
	//	Вызвался деструктор класса FlyingCar
	//	Вызвался деструктор класса Car
	//	Вызвался деструктор класса Airplain
	return 0;
}*/
/*//Что такое интерфейс в ООП. Интерфейс c++ пример. Изучение С++ для начинающих. Урок #113
class InterfaceBicycle // этот класс является абстрактным изза чисто вирутального метода, но у нас все методы будут виртуальными,класс будет интерфейсом
{
public:
	virtual void TwistTheWeel() = 0; // виртуальные методы
	virtual void Ride() = 0;


};
class SimpeBicycle:public InterfaceBicycle //класс наследник интерфейса
{
public:
	void TwistTheWeel() override // реализация виртуальных методов InterfaceBicycle
	{
		cout << "Вызвался метод TwistTheWeel() у класса SimpeBicycle " << endl;
	}
	void Ride() override // override чисто для проверки компилятором, что мы используем именно метод класса базавого
	{
		cout << "Вызвался метод Ride() у класса SimpeBicycle " << endl;
	}
};

class SportBicycle :public InterfaceBicycle //класс наследник интерфейса
{
public:
	void TwistTheWeel() override // реализация виртуальных методов InterfaceBicycle
	{
		cout << "Вызвался метод TwistTheWeel() у класса SportBicycle " << endl;
	}
	void Ride() override // override чисто для проверки компилятором, что мы используем именно метод класса базавого
	{
		cout << "Вызвался метод Ride() у класса SportBicycle " << endl;
	}
};

class Human
{
public:
	void RideOn(InterfaceBicycle& bicycle) //передаем ссылку на любой обэект который реализовывает интерфейс InterfaceBicycle
	{
		cout << "Крутим руль" << endl;
		bicycle.TwistTheWeel();
		cout << "Поехали!" << endl;
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
/*//Виртуальное наследование c++. Ромбовидное наследование c++. Изучение С++ для начинающих. Урок #114
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
		cout << "Вызвался конструктор Character " << endl;
	}
	int HP; // благодаря виртуальному наследованию не будет задваиваться поле HP, так бы оно вызывалось два раза.
};
class Orc:public virtual Character
{
public:
	Orc()
	{
		cout << "Вызвался конструктор Orc " << endl;
	}
};
class Warrior:public virtual Character
{
public:
	Warrior()
	{
		cout << "Вызвался конструктор Warrior " << endl;
	}
};
class OrcWarrior :public Orc , public Warrior
{
public:
	OrcWarrior()
	{
		cout << "Вызвался конструктор OrcWarrior " << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "rus");

	GraphicCard gc("AMD","Samsung");
	cout << "================================" << endl<<"================================" << endl;
	OrcWarrior Warlord;



}*/
/*//Работа с файлами с++. Запись в файл. c++ ofstream. Изучение С++ для начинающих. Урок #115
int main()
{
	setlocale(LC_ALL, "rus");

	string path = "myFile.txt";
	ofstream fout;
	fout.open(path,ofstream::app); // через запятую перегружаем open, добавляя параметр ofstream ::app, который не позваляет функции open удалять старые данные при открытии файла, а добавляет их в конец.
	fout.is_open(); // проверяет получилось ли открыть файл

	if (!fout.is_open()) // примитивный метод проверки на открыти файла
	{
		cout << "Файл открыть не получилось" << endl;
	}
	else
	{
		for (int i = 0; i < 5; i++)
		{
			cout << "Введите число: " << endl;
			int a;
			cin >> a;
			fout << a;
			fout << "\n";
		}

	}
	fout.close(); //закрывает файл и освобождает ресурсы

}*/
/*//Работа с файлами с++. Чтение из файла с++ ifstream. Изучение С++ для начинающих. Урок #116
int main()
{
	setlocale(LC_ALL, "rus");

	string path = "myFile.txt";

	ifstream fin;
	fin.open(path);
	if (!fin.is_open())
	{
		cout << "Ошибка" << endl;
	}
	else
	{
		cout << "Всё норм!" << endl;
		//char ch;
		//while (fin.get(ch)) // метод get возвращает bool, пока символы есть он возвращает true, когда символы закончатся он вернет false, и цикл закончится.
		//{
		//	cout << ch ;
		//}
		string str;
		//while (!fin.eof())
		//{
		//	str = ""; // вот так
		//	fin >>str; // но этот цикл работает до первого пробела, есть другой цикл который копирует все строки
		//	cout << str << endl; // чтобы последние данные не продублировались, надо в каждой итерации переменной str затирать данные
		//}

		while (!fin.eof())
		{
			str = "";
			getline(fin, str); // этот метод будет пропускать пробелы, и натыкаясь на конец строки данные не будет считывать
			cout << str << endl;
		}
	}
	fin.close();

}*/
/*//Запись ОБЪЕКТА КЛАССА в файл с++. Чтение объекта из файла c++ Для начинающих. Урок #117
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
		cout << "Файл открыть не получилось" << endl;
	}
	else
	{
		cout << "Файл открыт!" << endl;
		fout.write((char*)&point, sizeof(Point));
	}

	fout.close();

	ifstream fin;
	fin.open(path);
	if (!fin.is_open())
	{
		cout << "Файл не открыт(" << endl;

	}
	else
	{
		cout << "Файл открыт)" << endl;
		Point pnt; // создали объект куда будем записывать данные которые считаем.
		while (fin.read((char*)&pnt, sizeof(Point)))
		{
			pnt.print();
		}

	}
	fin.close();
}*/
/*//Чтение и запись в файл с++ используя класс fstream c++. Изучение С++ для начинающих. Урок #118
int main()
{
	setlocale(LC_ALL, "rus");
	string path = "myFile.txt";
	fstream fs;
	fs.open(path,fstream::in|fstream::out|fstream::app); // на четение, запись, добавление кода, через по-битовое или.
	if (!fs.is_open())
	{
		cout << "Файл не открыт!" << endl;
	}
	else
	{
		cout << "Файл открыт" << endl;
		string msg;
		int value;
		cout << "Введите 1 для записи в файл: " << endl;
		cout << "Введите 2 для чтения из файла: " << endl;
		cin >> value;
		cout << "============================" << endl << "============================" << endl;
		switch (value)
		{
		default:
			cout << "Перезагрузи, не то нажал D:" << endl;
			break;
		case 1:
			cout << "Введите сообщение для записи в файл 'myFile.txt'" << endl;
			SetConsoleCP(1251);
			cin >> msg;
			fs << msg << "\n"; // через объект fs помещаем сообщение в файл
			SetConsoleCP(866);
			break;
		case 2:
			cout << "Чтение данных из файла 'myFile.txt'" << endl;
			while (!fs.eof())
			{
				msg = ""; // затираем предыдущее сообщение чтобы не получить дубляж последнего
				fs >> msg; // не использовали getline при вводе, поэтому и тут не стали
				// из fs в переменную msg вводим сообщение которое получилось считать
				cout << msg << endl;
			}
			break;
		}
	}
	fs.close();
	system("pause");
	return 0;
}*/
/*//Потоковый ввод вывод в файл c++. Перегрузка операторов. Изучение С++ для начинающих. Урок #119
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

	//cout << omega << endl; // через оператора перегрузки <<

	fstream fs;
	fs.open(path, fstream::in | fstream::out | fstream::app);
	if (!fs.is_open())
	{
		cout << "Error, lay down your armsD:" << endl;
	}
	else
	{
		cout << "Congratulations, file is open" << endl;
		//fs << omega << "\n"; // с помощью перегруженного << так же как и вывод в сиаут, у нас происходит запись в файл
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
/*//С++ try catch. Обработка исключений С++. try catch что это. Изучение С++ для начинающих. Урок #120
int main()
{
	setlocale(LC_ALL, "rus");
	string path = "myFile.tt";

	ifstream fin; // * будет брошенно исключение внутренним кодом этого класса.
	fin.exceptions(ifstream::badbit | ifstream::failbit); // без него не будет/не корректо работать функция try/catch эта.. вся эта запись относится в основном к ifstream, изза проблем в ifstream
	// необходимо прописывать эту строчку, сам же try/catch Работает и без неё если нету ifstream
	try // функция не будет работать если не вызвать exceprion с параметрами перед try
	{
		cout << "Попытка открыть файл!" << endl;
		fin.open(path); // если на этом моменте чтото пойдет не так, то на следующую строчку кода мы не попадем *
		cout << "Файл успешно открыт!" << endl; // это не выполнется
	}
	catch (const ifstream::failure& ex) // попадем сюда
	{
		cout << ex.what() << endl;
		cout << ex.code() << endl;
		cout << "Ошибка" << endl;
	}
	fin.close();
}*/
/*//Генерация исключений с++ пример. throw c++ пример. Изучение С++ для начинающих. Урок #121

void Foo(int value)
{
	if (value<0)
	{
		cout << "Данные вошли в цикл, бросает в Catch" << endl;
		throw value;
	}
	cout << "Переменная " << value << endl;
}
void Foo2(int value)
{
	if (value < 0)
	{
		throw "число меньше 0";
	}
	cout << "Переменная " << value << endl;
}
void Foo3(int value)
{
	if (value<0)
	{
		throw exception (" переменную, не удовлетворяющую параметрам");
	}

}


int main()
{
	setlocale(LC_ALL, "rus");



	try
	{
		cout << "Попытка выполнить функцию Foo" << endl;
		Foo(-55);
		cout << "Функция Foo выполнена!" << endl;
	}
	catch (const int ex)
	{
		cout << "Мы поймали " << ex << endl;
	}

	try
	{
		Foo2(-10);
	}
	catch (const char*ex)
	{
		cout << "Мы поймали " << ex << endl;
	}

	try
	{
		Foo3(-29);
	}
	catch (const exception& ex)
	{
		cout << "Мы поймали" << ex.what() << endl;
	}

}*/
/*//Несколько блоков catch. Обработка исключений С++. Изучение С++ для начинающих. Урок #122

void Foo(int value)
{
	if (value < 0)
	{
		throw ", условие value < 0 не выполнено";
	}
	if (value == 0)
	{
		throw exception(", число = 0");
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
		cout << "Мы поймали блок 1" << ex.what() << endl;
	}
	catch (const char* ex) // так как мы передаем сюда строчку, а строка это массмы чаров, тогда передаем указатель на чар
	{
		cout << "Мы поймали блок 2" << ex << endl; // так как мы ловим не объект а строчку, то можно просто в сиаут вывести
	}
	catch (...) // такой кетч нужно писать в самом конце, так как после него никакие другие кетчи работать не будут
	{
		cout << "Что-то пошло не так" << endl; // будет ловить исключения не описанные выше, если поймает то мы хотябы будем знать что есть ошибка. Но не будем знать какая
	}

}*/
/*//Свой класс exception c++. Создание собственного класса исключений. С++ для начинающих. Урок #123

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
		throw exception(", число = 0");
	}
	if (value == 1)
	{
		throw myException("Число равно 1",value);
	}
	cout << "Переменная = " << value << endl;
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
		cout << "Поймали блок 1 " << ex.what() << endl;
		cout << "Состояние данных " << ex.GetDataState() << endl << endl;
	}

	try
	{
		Foo(1);
	}
	catch (exception& ex)
	{
		cout << "exception()" << endl;
		cout << "Поймали блок 1 " << ex.what() << endl;

	}

}*/
/*//Перечисляемый тип enum С++. Изучение С++ для начинающих. Урок #124
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
/*//Пространства имен с++. namespace c++ что это. Изучение С++ для начинающих. Урок #125
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
/*//Шаблоны классов с++ примеры. Обобщенные классы. Изучение С++ для начинающих. Урок #126
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
/*//Наследование шаблонных классов. Изучение С++ для начинающих. Урок #127
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
		cout << "Название типа " << typeid(this->value).name() << endl;
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
/*//Специализация шаблона класса. Изучение С++ для начинающих. Урок #128
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
/*//Структуры в C++ | struct C++. Разница между структурой и классом. Изучение С++ для начинающих.#129
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
/*//auto_ptr | unique_ptr | shared_ptr | Умные указатели. Изучение С++ для начинающих. Урок #131
int main()
{

	auto_ptr<int> ap1(new int(5));
	auto_ptr<int>ap2(ap1); // auto_ptr затрет данные ap1, присвоит их в ap2 , данные будут только в ap2

	unique_ptr<int> up1(new int(5));
	//unique_ptr<int> up2(up1); так присвоить не получиться, запрещенно самим unique_ptr
	unique_ptr<int> up2;
	up2 = move(up1); // присвоение через move, но ситуация будет такая же как у auto_ptr, данные будут только в up2, в up1 данные затрутся.
	up2.swap(up1); // поменяет данные местами, по сути результат такой же что и выше
	int* p = up1.get(); // вернет указатель
	int* p = new int(6);
	unique_ptr<int> p1(p);
	p1.reset(); //затирает данные *p
	p1.release() // затирает указатель p1






}*/
/*//Динамический массив и умные указатели. Изучение С++ для начинающих. Урок #132
int main()
{
	int SIZE;
	cin>> SIZE; // так как массив динамический то можно самому ввести количество ячеек.
	//int* arr = new int [SIZE] {1, 5, 21, 11, 3}; // можно создать массив
	//shared_ptr<int[]>ptr(arr); // и добавить указатель на него в конструктор shared_ptr
	shared_ptr<int[]>ptr(new int [SIZE] {}); // либо можно сразу добавить в конструктор динамический массив вот так.
	for (int i = 0; i < SIZE; i++)
	{
		ptr[i] = rand() % 10;
		cout << ptr[i] << endl;
	}
	//shared_ptr<shared_ptr<int[]>[]> arr(new shared_ptr<int[]>[SIZE]); может пригодится, по коментария эти две записи создание двумерного динамического массива.
	//shared_ptr<int[][SIZE]> ptr(new int[SIZE][SIZE]);


}*/
/*//Реализация односвязного списка c++ Часть 1 | Урок #133
  //Реализация односвязного списка c++ Часть 2 | Урок #134
  //Реализация односвязного списка c++ Часть 3 | Урок #135
template<typename T>
class List // в нем реализованы методы, которыми будем взаимодействовать с элементами односвязного списка
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

	template<typename T> // класс Node должен быть шаблонным для работы с любыми типами данных, так как в нем два поле и одно из них содержит данные.
	class Node // класс- узел. на прямую взаимодействовать не можем, о нем знает только класс List
	{
	public:
		Node* pNext; // это поле адрес, чтобы указывать на следующий Node
		T data; // Данные
		// nullptr чтобы если добавили последний элемент списка нужно чтобы он указывал на nullptr (значение по умолчанию) тоесть никуда не указывать
		// T data= T() для подготовки элемента на которого у нас нет еще данных, чтобы не было мусора
		Node(T data = T(), Node* pNext = nullptr) // Конструктор принимает данные и указатель на следующий элемент (Node)
		{
			this->data = data; // присваиваем входящие параметры соответствующие полям класса Node
			this->pNext = pNext;
		}
	};
	int Size; // типо переменной счетчика, добавили елемент Size+1, удалили Size -1.
	Node<T>* head; // первый узел Node, типа Т для работы с любыми типами данных, должен быть указателем потомучто все елементы односвязного списка будут выделяться в динамической памяти



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
void List<T>::pop_front() // удаляет первый элемент и делает следующий за ним элемент head'om
{
	Node<T>* temp = head; // временный объект temp (указатель) так как head тоже указатель, хранит адрес head (0 элемен списка для удаления)
	head = head->pNext; // в хеад присваиваем адрес следующего элемента
	delete temp; // удаляем темп, точнее то что там хранится
	Size--;


}

template<typename T>
void List<T>::push_back(T data) // метод из библиотеки stl, добавляет элемент в конец списка (добавляет данные)
{
	//элемент должен проверить не пустой ли у нас элемент
	if (head == nullptr) // если хеад будет пустой то он будет указывать на null
	{
		head = new Node<T>(data); // если элемент пустой, то мы должны создать его и передать ему в конструктор наши новые данные
	}
	else // если объект не пустой
	{
		Node<T>* current = this->head; //временная переменная, указатель на ноде, присваиваем значение заголовка
		while (current->pNext != nullptr) // проверяем на что указывает поле pNext нашего текущего элемента (текущей Node)
		{
			current = current->pNext; // если не равна nullptr то в  поле current будем присваивать указатель на следующий элемент элемент
			// и так до тех пор пока не найдем ту Node у которой указатель pNext указывает на nullptr
		}
		current->pNext = new Node<T>(data); // когда нашли элемент с указателем на nullptr , создаем новый объект типа Node и присвоить адрес вместо nullptr

	}
	Size++;

}

template<typename T>
void List<T>::push_front(T data) //добавление элемента в начало списка
{
	head = new Node<T>(data,head);
	Size++;
}

template<typename T>
void List<T>::insert(T data, int index) // добавляет элемент под нужным индексом, типо в центр можно
{
	if (index==0) // если индекс 0 то запихивает элемент в начало. грубо говоря новый создает
	{
		push_front(data);
	}
	else //
	{
		Node<T>* previous = this->head; // создаем временный указатель previous и присваиваем ему значение head
		for (int i = 0; i < index - 1; i++) // цикл, индекс -1 так как элементы с нуля идут, напишем в 3 элемент, по факту добавится в 4й, так что -1.
		{// цикл нужен для того чтобы найти элемент с индексом предшедствующий индексу указаному нами, чтобы указатель перекинуть на новый элемент.
			//типо 3 смотрел на 5, мы создали новый елемент 4, решили его засунуть перед 5, нашли элемент 3, так как он был перед 5, чтобы перебросить адрес который указывал 3 на 5
			// на новый элемент 4, поидее надо чтобы сначало и 3 и 4 смотрели на 5, потом 3 должна смотреть на 4 и все, изи пизи. но серега чтото не так обьясняет.
			previous = previous->pNext;
		}
		Node<T>* newNode = new Node<T>(data, previous->pNext);
		previous->pNext = newNode;
		//previous->pNext = new Node<T>(data, previous->pNext); //лучше писать вот так, то что выше это для раков с временной переменной
		Size++;


	}



}

template<typename T>
void List<T>::removeAt(int index) // удалить любой элемент который нам потребуется из односвязного списка по указанному индексу.
{
	if (index==0) // если индекс 0 то удалить самый первый елемент из коллекции
	{
		pop_front();
	}
	else
	{
		Node<T>* previous = this->head;
		for (int i = 0; i < index - 1; i++) //поиск предыдущего елемента
		{
			previous = previous->pNext;
		}
		Node<T>* toDelete = previous->pNext; // тот адресс елемента который мы хотим удалить присваивается во временную переменную toDelete, чтобы не потерять его
		//типо 4 указывала на 5, адресс 4 помещаем в toDelete, так как решили 4ку удалить
		previous->pNext = toDelete->pNext; // в тот адресс который указывает на переменную которую мы хотим удалить, помещаем адресс на елемент , на который указывал удаляемый елемент. :D
		// перед 4 была 3, в 3 помещаем адрес удаляемой 4, чтобы 3 указывала на 5
		delete toDelete; // а тут просто очищаем переменную toDelete, так как она хранила старый адрес с 3ки на 4ку, а мы 4 удаляем.
		Size--; // уменьшаем счетчик Size, так как один адресс мы удалили
	}


}

template<typename T>
void List<T>::pop_back() // удаление последнего елемента
{
	removeAt(Size - 1); // спецально под елементы
}

template<typename T>
void List<T>::clear() // метод очистки
{
	while (Size) // когда Size опустится до 0, цикл перестанет работать так как он принимает true=1 false =0;
	{
		pop_front(); // метод который удаляет 1й элемент и делает следующий за ним элемент первым, таким образом пока Size не станет 0, удалит все элементы последовательно
	}


}

template<typename T>
T& List<T>::operator[](const int index) // перегрузка оператроа [] для того чтобы вывести данные по индексу, как в массиве.
{
	int counter = 0; // переменная счетчик
	Node<T>* current = this->head; // в указатель в котором мы находимся, присваиваем текущее значение head
	while (current != nullptr) // цикл вайл, пока счетчик не налптр
	{
		if (counter == index) // проверка иф, если счетчик равен запрашиваемому индексу, например запросили данные по индексу 2
		{
			return current->data; // то возвращает данные по этому индексу
		}
		current = current->pNext; // если не сработала проверка выше, то переменной карент присваивает адрес следующего элемента
		counter++; //повышаем счетчик на 1
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
	//int numbersCount; // переменная инт для заполенения списка
	//cin >> numbersCount; // ручной ввод пользователя на количество элементов
	//for (int i = 0; i < numbersCount; i++) // цикл на заполнение рандомными числами односвязного списка
	//{
	//	lst.push_back(rand() % 10);
	//}
	////////////////////////////////////////////////////////////
	//for (int i = 0; i < lst.GetSize(); i++) // цикл на вывод елементов в консолль
	//{
	//	cout << lst[i] << endl;
	//}
	//cout << endl << "Элементов в списке " << lst.GetSize() << endl << "Выполнеяю метод pop_front " << endl << endl;
	//lst.pop_front();
	//for (int i = 0; i < lst.GetSize(); i++)
	//{
	//	cout << lst[i] << endl;
	//}
	//cout << endl << "Элементов в списке " << lst.GetSize() << endl;
	//////////////////////////////////////////////////////////////////

	////////////////////////////////////////////////////////////////////
	//cout << endl << "Элементов в списке " << lst.GetSize() << endl << "Выполнеяю метод clear " << endl << endl;
	//lst.clear();
	//cout << endl << "Элементов в списке " << lst.GetSize() << endl;
	////////////////////////////////////////////////////////////////////


	return 0;
}*/
/*//vector | Библиотека стандартных шаблонов (stl) | Уроки | C++ | #1

int main()
{
	setlocale(LC_ALL, "rus");

	//vector<int> myVector = {4,11,441,231,8797}; так же как и в динамическом массиве можно сразу инициализировать элементы в векторе

	vector<int> myVector; // либо добавить через push_back();
	myVector.push_back(23);
	myVector.push_back(51);
	myVector.push_back(7);
	myVector.push_back(5122);
	myVector.push_back(1);
	myVector.push_back(7134);
	///////////////////////////////////////////////////
	cout << "Количество элементов в векторе= " << myVector.size() << endl;
	cout << "Вместимость элементов в векторе= " << myVector.capacity() << endl;
	cout << "push_back() method use :D +1 element" << endl;
	myVector.push_back(33);
	cout << "Количество элементов в векторе= " << myVector.size() << endl;
	cout << "Вместимость элементов в векторе= " << myVector.capacity() << endl;
	cout << ".reserve method use" << endl;
	myVector.reserve(100);////////////////////
	cout << "Количество элементов в векторе= " << myVector.size() << endl;
	cout << "Вместимость элементов в векторе= " << myVector.capacity() << endl;
	myVector.shrink_to_fit();///////////////////
	cout << "Освобождена не используемая динамическая память" << endl;
	cout << "Вместимость элементов в векторе= " <<myVector.capacity()<< endl;///////////////////////
	myVector[0] = 32;/////////////////
	myVector.at(1) = 15;//////////////////
	for (int i = 0; i < myVector.size(); i++)////////////////////////
	{
		cout << myVector[i] << "\t";
	}
	cout << endl << endl;
	myVector.pop_back();////////////////////////////////
	cout << "pop_back() количество элементов в векторе= " << myVector.size() << endl;
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << "\t";
	}
	cout <<endl<< "==================================" << endl;
	myVector.clear();///////////////////////////
	cout << "clear() Количество элементов в векторе= " << myVector.size() << endl;
	cout << "try/catch used: " << endl;
	try//////////////////////////////////
	{
		myVector.at(0); // после удаления всех элементов .clear() кидаем в кетч для вывода ошибки
	}
	catch (const std::out_of_range& ex)////////////////////////////
	{
		cout << ex.what() << endl << endl;
	}
	cout << "===============================================" << endl;
	vector<int> myVector1(10,91);////////////////////////
	cout << "Количество(.size) элементов в векторе: " << myVector1.size() << endl;
	cout << "Вместимость(.capacity) элементов в векторе: " << myVector1.capacity() << endl;
	for (int i = 0; i < myVector1.size(); i++)
	{
		cout << myVector1[i] << endl;
	}
	myVector1.resize(3);///////////////
	cout << "Количество(.size) элементов в векторе: " << myVector1.size() << endl;
	cout << "Вместимость(.capacity) элементов в векторе: " << myVector1.capacity() << endl;
	for (int i = 0; i < myVector1.size(); i++)
	{
		cout << myVector1[i] << endl;
	}



}*/
/*//LIST | STL C++ | Библиотека стандартных шаблонов (stl) | Уроки | C++ | #3
template<typename T>
void PrintList(const list<T> &lst)
{ // префиксный инкримент нужен для
	for (auto i = lst.cbegin(); i != lst.cend(); ++i) // cbegin and cend возвращают константные значения, итерация выполняется с помощью префиксного инкримента
	{
		cout << *i << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");

	//list<int> myList; // создаем объект класса list
	list<int> myList = {213,21,76,945}; //так тоже работает как и в динамическом массиве, векторе.
	list<int>myList2 = { 122,331,532 };
	myList.push_back(5); // метод добавляет элемент в конец списка
	myList.push_front(121);// метод добавляет элемент в начало списка, в данном случае он будет перед (5)

	//list<int>::iterator it = myList.begin(); // создаем переменную iterator называем её it, присваиваем значение begin которое хранит указатель,и возвращает значение самого первого элемента класса list
	//auto it = myList.begin(); можно использовать ключевое слово auto для сокращения кода, так тоже будет работать
	//cout << *it << endl; // выводим в консоль разыменованый  iterator
	cout << "========================================" << endl;
	PrintList(myList);
	cout << "Выполнена сортировка myList.sort()" << endl;
	myList.sort(); // сортирует елементы от наименьшего к наибольшему
	PrintList(myList);
	cout << "Выполнены методы pop_back(); pop_front();" << endl;
	myList.pop_back();
	myList.pop_front();
	PrintList(myList);
	cout <<".size() Количество элементов = "<< myList.size() << endl;
	cout << "Метод insert()" << endl;
	auto it = myList.begin();
	//it++; // можно передвинуть инкримент
	advance(it, 3);
	myList.insert(it, 111);
	PrintList(myList);
	cout << "remove" << endl;
	myList.remove(111);
	PrintList(myList);
	cout << "Метод assign" << endl;
	myList.assign(myList2.begin(),myList2.end());
	PrintList(myList);

	/////////////////////////////////////////////////////////////////
	//auto i = myList.begin(); - присваиваем в i итератор который указывает на первый элемент коллекции
	//i != myList.end(); работать будет до тех пор, пока текущий итератор не равен итератору который указывает на элемент находящийся за списком list
	//for (auto i = myList.begin(); i != myList.end(); i++)
	//{
	//	cout << *i << endl; но мы чтобы не писать такую реализацию постоянно, лучше создать метод PrintList
	//}
	////////////////////////////////////////////////////////////////////
}*/
/*//Ключевое слово auto | Изучение С++ для начинающих. Урок #136
int main()
{
	setlocale(LC_ALL, "rus");

	auto a = 1;
	auto b = 3.21;
	auto c = "string";

	vector<int> myVector = { 132,11,6,73 };
	vector<int>::iterator it = myVector.begin();
	//std::vector<int>::iterator it = myVector.begin(); без пространства имен запись еще длинее
	auto it2 = myVector.begin(); //это вместо записи выше, для уменьшения кода

	//for (std::vector<int>::iterator it = myVector.begin();it != myVector.end(); it++) цикл фор без std and auto
	for (auto it = myVector.begin(); it != myVector.end(); it++)
	{
		cout << *it << endl;
	}



}*/
/*//Итераторы STL | Библиотека стандартных шаблонов (stl) | Уроки | C++ | #2
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int arr[] = { 3,6,9 };
	cout << arr[1] << endl;
	cout << *(arr + 1) << endl; // тоже самое что и выше, к 0 элементу прибавляем 1 и разыменовывваем указатель.
	cout << "=================================================================" << endl;
	vector<int> myVector = { 33,1,64,777,78,4 };
	vector<int>::iterator it;
	it = myVector.begin();
	it += 3;//можем использовать арифметику указателей.
	it++;
	it -= 2;
	cout << *it << endl;
	cout << "=====================const_iterator===========================" << endl;
	for (vector<int>::const_iterator i = myVector.cbegin(); i != myVector.cend(); i++) // константный итератор для НЕвозможности изменять данные, только считывание
	{
		cout << *i << endl;
	}
	//cbegin, cend возвращают константный итератор
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
	it3 = myVector3.begin(); // it3=myVector.end(); так бы присвоим в итератор конец меветора, а потом
	for (vector<int>::iterator i = myVector3.begin(); i != myVector3.end(); i++)
	{
		cout << *i << endl;
	}
	cout << endl << "insert" << endl << endl;

	advance(it3, 3);
	myVector3.insert(it3, 999); // методом инсерт создадим новый елемент и поместим либо в начало либо в конец вектора, в зависимости от того что выбрали выше, либо с помощью advance добавим по индексу

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

	//advance(it4, 3);// тут сдвинули итератор на 3 шага вправо, елемент под индексом 3 будет удален, это еденица
	//myVector4.erase(it4);  // метод удаляет елемент на который указывает указатель, выше мы присвоили ему 0 елемент begin()
	myVector4.erase(it4,it4+3); // у erase есть перегрузка, так мы удалим елементы с 0 по 3
	for (vector<int>::iterator i = myVector4.begin(); i != myVector4.end(); i++)
	{
		cout << *i << endl;
	}
}*/
/*//Цикл foreach C++ | range-based циклы | Изучение С++ для начинающих. Урок #137
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

	//for (int var : arr) // так копируется елемент из массива полностью, при изменении значения елементы в массиве не меняются
	//{
	//	var = -1; // будет выводить -1, но данные в массиве останутся не тронутыми
	//	cout << var << endl;
	//}

	//for (auto& var1 : arr) // так итерриуемся по ссылке, при изменении елементов, елементы изменятся и в массиве.
	//{
	//	var1 = -1; // так изменятся данные в самом массиве
	//	cout << var1 << endl;
	//}

	//for (const auto& var2 : arr) // так итеррируемся по ссылке, const чтобы уберечь себя от изменения елементов
	//{
	//	//var2 = -1; мы запретили это делать
	//	cout << var2 << endl;
	//}


	cout << "===============================================" << endl;

	list<int>myList = { 31,2315,11,28,45,3 };

	for (const auto& var : myList)
	{
		cout << var << endl;
	}


}*/
/*//forward list stl c++ | Библиотека стандартных шаблонов (stl) | Уроки | C++ | #5
int main()
{
	setlocale(LC_ALL, "ru");

	forward_list<int> fl = {131,231,35};

	fl.push_front(1); // Добавляет елемент в начало списка
	fl.push_front(4); // тоже самое что и сверху, только 4 будет уже перед 1.

	forward_list<int>::iterator it = fl.begin();

	cout << *it << endl;
	it++;
	cout << *it << endl;



	for (auto el : fl)
	{
		cout << el << endl;
	}

}*/
/*//array STL C++ | | Библиотека стандартных шаблонов (stl) | Уроки | C++ | #6
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
/*//Контейнеры STL и операторы сравнения. | Библиотека стандартных шаблонов (stl) | Уроки | C++ | #7
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
/*//deque stl c++ | Библиотека стандартных шаблонов (stl) | Уроки | C++ | #8
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
/*//SET | MULTISET | Ассоциативные контейнеры | Библиотека стандартных шаблонов (stl) | Уроки | C++ #9
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
	//cout << "Введите число для поиска: ";
	//cin >> value;
	int value = 37;
	if (mySet3.find(value) != mySet3.end())
	{
		cout << "Число " << value << " найдено! " << endl;
	}
	else
	{
		cout << "Число " << value << " не найдено! " << endl;
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
/*//typedef c++ что это | Изучение С++ для начинающих. Урок #138
int main()
{
	setlocale(LC_ALL, "rus");
	//эта строка пишется сверху после #include
	//typedef std::vector <int> int_vector;
	//если у нас не подключены пространство имен std, чтобы сократить запись
	//можем самостоятельно указать название через typedef, тоесть дать псевдоним.

	//std::vector<int> myVector; теперь чтобы не писать так, можем написать:
	//int_vector myVector;
	for (size_t i = 0; i < length; i++)
	{

	}

}*/
/*//MAP | MULTIMAP | Ассоциативные контейнеры | Библиотека стандартных шаблонов (stl) | Уроки | C++ #10
int main()
{
	setlocale(LC_ALL, "rus");

	pair<int, string> p(1, "телефон");
	cout << p.first << endl;
	cout << p.second << endl;
	cout << "==========================" << endl;
	map<int, string> myMap;
	myMap.emplace(3, "Монитор");
	myMap.emplace(1, "Ноутбук");
	myMap.insert(make_pair(2, "Клавиатура"));
	myMap.insert(pair<int, string>(22, "Блок"));
	///////////////////////////////////////////// Так будет выглядеть бинароное дерево при добавлении в него елементов контейнера Map
	//				[3][М]					   //
	//				/    \					   //
	//        [1][Н]      [22][Б]			   //
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
		cout << "Ключ" << " не найден" << endl;
	}
	cout << "====================================" << endl;
	myMap.emplace("Петя", 1313);
	myMap.emplace("Маша", 222);
	myMap.emplace("Миша", 2341);
	//myMap["Антон"] = 123333;
	//auto it3 = myMap.find("Петя");
	//cout << myMap["Петя"] << endl; // не работает оО
	cout << "==========================================" << endl;
	multimap<string, int> myMultimap;
	myMultimap.emplace("Вася", 111);
	myMultimap.emplace("Вася", 1111); //в мультимап могут два одинаковых ключа
	myMultimap.emplace("Кеша", 222);
	myMultimap.emplace("Олег", 333);
}*/
/*//Многопоточность | Потоки | thread | Многопоточное программирование | Уроки | C++ #1
void DoWork()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "ID потока " << this_thread::get_id() << "\tDoWork\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(1000));
	}
}
int main()
{
	setlocale(LC_ALL, "rus");
	//cout << "START MAIN" << endl;
	//this_thread::sleep_for(chrono::milliseconds(3000)); // эта функция обеспечивает задержку выполнения кода на 3 секунды
	//cout << this_thread::get_id() << endl;
	//cout << "END MAIN" << endl;
	//cout << "========================================" << endl;
	thread th(DoWork);
	//th.detach();// сообщили что поток может выполнятся самостоятельно, не привязываясь ни к чему.
	for (size_t i = 0; i < 10; i++)
	{
		cout << "ID потока " << this_thread::get_id() << "\tmain\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(600));
	}

	th.join();
	return 0;
}*/
/*//Stack | Адаптеры контейнеров | Библиотека стандартных шаблонов (stl) | Уроки | C++ #11
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
	while (!st.empty()) //с помощью цикла , пока стек не пуст, просматриваем последний добавленный элемент, и удалем\извлекаем его, пока не закончаться элементы
	{
		cout << st.top() << endl;
		st.pop();
	}


}*/
/*//Потоки с параметрами | Многопоточное программирование | Уроки | C++ #2
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
		cout << "ID потока = " << this_thread::get_id() << "\tmain works " << i << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}



	//th.detach(); обязательно ставить один из этих параметров
	//th.join();
	return 0;
}*/
/*//queue | priority queue | Адаптеры контейнеров | Библиотека стандартных шаблонов (stl) | C++ #12
int main()
{
	setlocale(LC_ALL, "rus");

	queue<int> q;
	q.push(56); // добавляет элемент в очередь
	q.push(3);
	q.push(18);
	q.push(1);
	q.push(99);
	cout << q.front() << " -первый элемент в очереди" << endl;
	q.pop(); // извлекает первый элемент из очереди
	cout << "Сработал метод .pop()" << endl;
	cout << q.front() << "-первый элемент в очереди" << endl;
	cout << q.back() << " -последний элемент в очереди" << endl;


	cout << "===============================================" << endl;


	queue<int> q1;
	q1.emplace(31);
	q1.emplace(3785);
	q1.emplace(4336);
	q1.emplace(73);
	q1.emplace(2);
	while (!q1.empty())
	{
		cout <<"Элемент "<< q1.front() << endl;
		cout <<"count "<< q1.size() << endl;
		q1.pop();
	}
	cout << "Количество элементов в очереди = " << q1.size() << endl;

	cout << "=====================================================" << endl;


	priority_queue<int> q2;
	q2.emplace(3);
	q2.emplace(17);
	q2.emplace(21);
	q2.emplace(31);

	while (!q2.empty())
	{
		cout << "Элемент " << q2.top() << endl;
		cout << "count " << q2.size() << endl;
		q2.pop();
	}
	cout << "Количество элементов в очереди = " << q2.size() << endl;

	//Если кому интересно, то, чтобы изменить критерий приоритета, нужно использовать greater из библиотеки functional.Вот пример :
	//priority_queue <int, vector <int>, greater <int> > q;
}*/
/*//Многофайловый проект | Изучение С++ для начинающих. Урок #139
//Многофайловый проект | Защита от повторного включения | Изучение С++ для начинающих. Урок #140
int main()
{
	setlocale(LC_ALL, "rus");

	int result = Sum(3, 2);
	cout << result << endl;

	myNamespace::MyClass m; //либо сверху использоваться using namespace myNamespace; так же как и std подклюаем
	m.PrintMessage("Йобаныйрот");





}*/
/*//Возврат результата из потока по ссылке | Многопоточное программирование | Уроки | C++ #3
void DoWork(int& a)
{
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "ID потока = " << this_thread::get_id() << " ==============\t" << "DoWork STARTED\t====================" << endl;
	this_thread::sleep_for(chrono::milliseconds(1000));
	a *= 2;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "ID потока = " << this_thread::get_id() << " ==============\t" << "DoWork STOPPED\t====================" << endl;

}
int main()
{
	setlocale(LC_ALL, "rus");
	int q = 5;
	thread t(DoWork, ref(q)); //std::ref(); из пространства имен std;

	for (size_t i = 0; i < 10; i++)
	{
		cout << "ID потока = " << this_thread::get_id() << "\tmain works\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(1000));
	}


	t.join();
	cout << q << endl;
}*/
/*//Union | Использование в С++ | Изучение С++ для начинающих. Урок #141
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
/*//std::function | Полиморфная обёртка функции | Изучение С++ для начинающих. Урок #142
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
	if (a % 2 == 0) // проверка чисел на четность, деление по мудулю на 2, остатка не будет числа четные
	{
		cout <<"Bar1= "<< a << endl;
	}
}
void DoWork(vector<int>& vc) // Эта реализация не удобно, так как если потребуется и та и другая функция придется писать еще одну такую реализацию
{
	for (auto el : vc)
	{
		Foo1(el);
	}
}
void DoWork1(vector<int>& vc, function<void(int)> f) // такая реализция отличается тем что нам только в мейне при вызове функции Dowork1 нужно указать вторым параметром нужную нам функцию для вызова
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
	function<void()> f; // главное чтоб совпадала сигнатура функции и тип возвращаемого значения с параметрами в скобках <> function.
	f = Foo;
	f();
	f = Bar;
	f();
	////////////////////////
	cout << "==========================" << endl;
	function<int(int, int)> d;
	d = Sum;
	cout << d(2, 5) << endl;
	//////////ЛИБО/////////
	int result = d(2, 5);
	cout << result << endl;
	////////////////////////
	cout << "======================================" << endl;
	vector<int> vc = { 231,32,7248,4,62,647,28,245,14 };
	DoWork(vc);
	cout << "Обновленый functional с 2 параметрами" << endl;
	DoWork1(vc, Foo1); // подставляем вторым параметром необходимую нам из реализованых функций выше со схожей сигнатурой
	cout << "Обновление functional через vector" << endl;
	vector<function<void(int)>> Fvector;
	Fvector.emplace_back(Foo1);
	Fvector.emplace_back(Bar1);
	DoWork2(vc, Fvector);



}*/
/*//Лямбда-выражения | Лямбда функции | Анонимные функции | Изучение С++ для начинающих. Урок #143

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
	function<void(int)> f;//посредник                                ////// это долгий путь, мы создали переменную чтобы ссылаться на наше лямбда выражение
	f = [](int a)                                                    //////
	{                                                                //////
		cout << "вызвана анонимная функция с выражением - " << a << endl;//
	};                                                               //////
	DoWork(vc, f);                                                   //////
	/////////////////////////////////////////////////////////////////////// можно просто пойти другим путем, без посредников
	cout << "=======================================================" << endl;

	DoWork(vc, [](int a) // Сразу передали вторым параметром лямбда выражение/анонимную функцию.
	{
		cout << "вызвана анонимная функция с выражением - " << a << endl;
	});
	//////////////////////////////////////////////////////////////////////////
	cout << "=========================================================" << endl;
	int p = 0;
	[&p](int a) // важно передать переменную в [] по ссылке &
	{
		p = 5;
	};

}*/
//Лямбда выражения и возврат результата выполнения потока | Многопоточное программирование | C++ #4
/*int Sum(int a, int b)
{
	this_thread::sleep_for(chrono::milliseconds(1000));
	cout << "ID потока " << this_thread::get_id() << "===========\t Sum STARTED \t================" << endl;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "ID потока " << this_thread::get_id() << "==========\t Sum STOPPED \t===============" << endl;
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
		cout << " ID потока = " << this_thread::get_id() << "\tmain works\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}
	t.join();
	cout << " Sum result = " << result << endl;

}*/
//Захват контекста лямбдой | Лямбда функции | Лямбда-выражения | Анонимные функции | Урок #144
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
		auto e = [this]() // this позволят захватить контекст лямбда функции сразу весь класс
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
	cout << "[=] лямбда" << endl;

	auto f = [=]()
	{
		cout << "a = " << a << endl
			<< "b = " << b << endl;
	};
	f();
	cout << "[&] лямбда" << endl;

	auto d = [&]()
	{
		a *= 2;
		b += 21;
		cout << "a = " << a << endl
			<< "b = " << b << endl;
	};
	d();
	cout << "[]()mutable"<< endl;

	auto s = [=]()mutable // разрешили изменять данные, но только внутри функции не меняя их снаружи лямбды.
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
//Как измерить время выполнения кода | Изучение С++ для начинающих. Урок #145
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
	cout << "ID потока = " << this_thread::get_id() << " =================\tSum STARTED \t==================== " << endl;
	this_thread::sleep_for(chrono::milliseconds(2000));
	cout << "ID потока = " << this_thread::get_id() << " =================\tSum STOPPED \t==================== " << endl;
	return a + b;
}
int main()
{
	SimpleTimer st;
	setlocale(LC_ALL, "rus");
	//auto start = chrono::high_resolution_clock::now(); // вовзращает хуй пойми что, так что через auto в переменную start записываем это значение


	int result;
	thread t([&result]()
		{
			result = Sum(2, 5);
		});

	for (size_t i = 1; i <= 10; i++)
	{
		cout << "ID потока = " << this_thread::get_id() << "\tmain works\t" << endl;
		this_thread::sleep_for(chrono::milliseconds(700));
	}

	t.join();
	cout << "Sum result = " << result << endl;

	//auto end = chrono::high_resolution_clock::now(); // переменная окончание
	//chrono::duration<float> duration = end - start; // duration - продолжительность, из окончания функции время начала вычетаем, записывая в переменную duration
	//cout << "Duration = " << duration.count() << endl; //duration является классом, у него есть метод .count()

}*/
//Функторы в с++ | Что такое функтор | Изучение С++ для начинающих. Урок #146
/*class MyFunctor
{
public:
	int operator ()(int a, int b)
	{
		cout << "я функтор " << endl;
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
		cout << "сумма четных чисел = " << evenSum << endl;
	}
	void ShowEvenCount()
	{
		cout << "количество четных чисел = " << evenCount << endl;
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
//Предикаты с++ | Что такое предикат | Изучение С++ для начинающих. Урок #147
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
	bool operator()(const Person& p) //является функтором, перегруженным оператором (), который является предикатором изза типа возвращаемого значения bool
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
	cout << "Колличество чисел в коллекции > 0 = " << result << endl;
	cout << "=========LessThanZero===============" << endl;
	result = count_if(vc.begin(), vc.end(), LessThanZero);
	cout << "Колличество чисел в коллекции < 0 = " << result << endl;

	vector<Person> students;
	{
		Person("Вася", 180);
		Person("Миша", 50);
		Person("Олег", 210);
		Person("Кира", 107);
		Person("Лена", 30);
		Person("Антон", 120);
		Person("Кеша", 198);
	};
	//student.front() используется 3 параметром в качестве предиката
	int result1 = count_if(students.begin(), students.end(), students.front());
	cout << result1 << endl;



}*/
//STL Алгоритмы сортировки | Бинарный предикат | Лямбда функции | C++ STL Уроки | #13
/*class Person
{
public:
	Person(string name, int score)
	{
		this->Name = name;
		this->Score = score;
	}
	bool operator()(const Person& p) //является функтором, перегруженным оператором (), который является предикатором изза типа возвращаемого значения bool
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
		Person("Вася", 180),
		Person("Миша", 50),
		Person("Олег", 210),
		Person("Кира", 107),
		Person("Лена", 30),
		Person("Антон", 120),
		Person("Кеша", 198),
	};
	sort(students.begin(), students.end(), [](const Person& p1, const Person& p2) {return p1.Name < p2.Name; });
	//используем анонимную функцию, для сортировки по алфавиту принимаем двумя параметрами константные ссылки на обьекты класса Person, возвращаем сравнение двух имен обьектов.
	for (auto el : students)
	{
		cout << "Имя:\t" << el.Name << "\tбаллы:\t" << el.Score << endl;
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
//STL алгоритмы поиска | find | find_if | find_if_not | Библиотека стандартных шаблонов (stl) C++ #14
/*class Person
{
public:
	Person(string name, int score)
	{
		this->Name = name;
		this->Score = score;
	}
	bool operator()(const Person& p) //является функтором, перегруженным оператором (), который является предикатором изза типа возвращаемого значения bool
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
		Person("Вася", 180),
		Person("Миша", 50),
		Person("Олег", 210),
		Person("Кира", 107),
		Person("Лена", 30),
		Person("Антон", 120),
		Person("Кеша", 198),
	};
	auto result2 = find_if(students.begin(), students.end(), [](const Person& p)
		{
			return p.Name == "Вася";

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
		cout << "Число не найдено" << endl;
	}
	else
	{
		cout << "Найденное число = " << *result << endl;
	}
	cout << "===============================================" << endl;
	auto result1 = find_if(v.begin(), v.end(), [](int a) {return a % 2 == 0; });
	if (result1 == v.end())
	{
		cout << "Четных чисел не обнаружено" << endl;
	}
	else
	{
		cout << "Четные числа есть" << endl;
	}
	cout << "==================================================" << endl;


}*/
//stl copy | stl copy_if | Выборка данных по условию | Библиотека стандартных шаблонов (stl) C++ #15
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
		Person("Вася",181,19),
		Person("Миша",30,21),
		Person("Петя",73,32),
		Person("Иван",210,50),
		Person("Иван",57,25),
		Person("Олег",181,33),
	};

	vector<Person> result;

	//copy(students.begin(), students.end(), back_inserter(result)); // функция просто копирует данные с объекта students в объект result.
	cout << "==================================================" << endl;
	copy_if(students.begin(), students.end(), back_inserter(result), [](const Person& p) // копирует вектор студент в вектор ресульт, + предикат типо фильтрует так как нам нужно
		{
			//return p.Name == "Иван";
			//return p.Score < 100;
			return p.Score > 70 && p.Age > 20;
		});
	sort(result.begin(), result.end(), [](const Person&p1,const Person&p2) // сортирует уже обновленный вектор ресульт от большего к меньшему
		{
			return p1.Age > p2.Age;

		});
	cout << "Всего элементов:\t" << result.size() << endl;
	for (auto value : result)
	{
		cout << "Имя:\t" << value.Name << "\tБаллы:\t" << value.Score << "\tВозраст:\t"<< value.Age << endl;
	}


}*/
//stl remove | stl remove_if | stl удаление элемента по условию | Библиотека (stl) #16
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
		Person("Вася",181,19),
		Person("Миша",30,21),
		Person("Петя",73,32),
		Person("Иван",210,50),
		Person("Иван",57,25),
		Person("Олег",181,33),
		Person("Игорь",160,20),
		Person("Палыч",38,60),
	};
	//auto result1 = remove_if(students.begin(), students.end(), [](const Person& p) // нет смысла создавать временную переменную ресульт, можно её сразу первым параметром поместить в erase
	//	{
	//		return p.Score < 150;
	//	});

	students.erase(remove_if(students.begin(), students.end(), [](const Person& p) //вместо создания временной переменной, сразу первым параметром поместили метод с предикатом
		{
			//return p.Score < 150 && p.Age < 25;; // логическое и тут не нужно, так как будут удалены только те, кто конкретно совпал, остануться те кто хоть по одному параметру прошли.
			return p.Score < 150 || p.Age < 25; // так уберем тех у кого баллов меньше 150, и тех у кого возраст меньше 25.
		}), students.end());

	cout << "Всего элементов:\t" << students.size() << endl;
	for (auto value : students)
	{
		cout << "Имя:\t" << value.Name << "\tБаллы:\t" << value.Score << "\tВозраст:\t" << value.Age << endl;
	}
	////////////////////////////////////////////////////////////////////////////////////////////////////////////
	vector<int> vc = { 5,1,2,8,11,5,10,5,11 };
	auto result = remove(vc.begin(), vc.end(), 5);
	vc.erase(result, vc.end());
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	string str = "Текс с несколькими    пробелами";
	cout << str << endl;
	str.erase(remove(str.begin(), str.end(), ' '), str.end());
	cout << str << endl;

}*/
//Поиск максимального элемента | max_element c++ | Библиотека стандартных шаблонов (stl) C++ #17
/*int main()
{
	setlocale(LC_ALL, "rus");

	vector<int> vc = {10,1,-55,11,13,58}; // вектор это обертка для динамического массива
	auto resultvc = max_element(vc.begin(), vc.end());
	cout << "max_elementvc: " << *resultvc << endl;

	list<int> ls = {4,7,77,-3,44,74}; // лист это по сути двусвязный список
	auto resultls = max_element(ls.begin(), ls.end());
	cout << "max_elementls: " << *resultls << endl;

	const int SIZE = 6;
	int arr[SIZE] = { 10,1,-55,11,13,58 };
	auto resultarr = max_element(arr, arr + SIZE);
	cout << "max_elementarr: " << *resultarr << endl;
}*/
//Поиск минимального элемента | min_element c++ | Библиотека стандартных шаблонов (stl) C++ #18
/*int main()
{
	setlocale(LC_ALL, "rus");
	vector<int> vc = { 10,1,-55,11,13,58 }; // вектор это обертка для динамического массива
	auto resultvc = min_element(vc.begin(), vc.end());
	cout << "max_elementvc: " << *resultvc << endl;

	list<int> ls = { 4,7,77,-3,44,74 }; // лист это по сути двусвязный список
	auto resultls = min_element(ls.begin(), ls.end());
	cout << "max_elementls: " << *resultls << endl;

	const int SIZE = 6;
	int arr[SIZE] = { 10,1,-55,11,13,58 }; // статический массив
	auto resultarr = min_element(arr, arr + SIZE);
	cout << "max_elementarr: " << *resultarr << endl;


	list<int> lst = { 4,7,77,-3,44,74 };
	auto resultlst = minmax_element(lst.begin(), lst.end());
	cout << "min: " << *resultlst.first <<"\tmax: "<<*resultlst.second<< endl;
}*/
//С++ потоки и методы класса | С++ метод класса в потоке | Многопоточное программирование | C++ #5
/*class MyClass
{
public:
	void DoWork()
	{
		this_thread::sleep_for(chrono::milliseconds(2000));
		cout << "ID потока " << this_thread::get_id() << "===========\t DoWork STARTED \t================" << endl;
		this_thread::sleep_for(chrono::milliseconds(4000));
		cout << "ID потока " << this_thread::get_id() << "==========\t DoWork STOPPED \t===============" << endl;
	}

	void DoWork2(int a)
	{
		this_thread::sleep_for(chrono::milliseconds(2000));
		cout << "ID потока " << this_thread::get_id() << "===========\t DoWork2 STARTED \t================" << endl;
		this_thread::sleep_for(chrono::milliseconds(4000));
		cout << "DoWork2 значение параметра\t" << a << endl;
		cout << "ID потока " << this_thread::get_id() << "==========\t DoWork2 STOPPED \t===============" << endl;
	}

	int Sum(int a, int b)
	{
		this_thread::sleep_for(chrono::milliseconds(2000));
		cout << "ID потока " << this_thread::get_id() << "===========\t Sum STARTED \t================" << endl;
		this_thread::sleep_for(chrono::milliseconds(4000));
		cout << "ID потока " << this_thread::get_id() << "==========\t Sum STOPPED \t===============" << endl;
		return a + b;
	}

};


int main()
{
	setlocale(LC_ALL, "rus");


	//int result;
	MyClass m;

	//thread th([&]() //метод SUm возвращает return a+b; поэтому этого вариант рабочий
	//	{
	//		result = m.Sum(2, 5);
	//	});

	//thread th([&]() //метод DoWork не возвращает никакие значение, метод рабочий но есть другой вариант для методов без возврата
	//	{
	//		m.DoWork();
	//	});

	//thread th(&MyClass::DoWork,m); //Передаем потоку ссылку на класс, через два :: указываем метод нужный нам из этого класса, через запятую вторым параметром указываем объект класса.
	thread th(&MyClass::DoWork2, m, 5); // Для метода с одним принимаемым значением.
	for (size_t i = 1; i <= 10; i++)
	{
		cout << " ID потока = " << this_thread::get_id() << "\tmain works\t" << i << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	th.join();
	//cout << "RUSULT:\t" << result << endl;


}*/
//accumulate c++ | сумма и произведение элементов массива | Библиотека (stl) C++ #19
/*int main()
{
	setlocale(LC_ALL, "rus");

	vector<int> vc = { 2,3,4 };
	auto resultvc = accumulate(vc.begin(), vc.end(), 0); //0 поставили для того чтобы алгоритм понимал к какому значению будут прибавлятся все остальные значения коллекции
	cout << "RESULT:\t" << resultvc << endl;

	int arr[] = { 3,2,5,7,10 };
	int resultARR = accumulate(begin(arr), end(arr), 1, [](int a, int b) { // 1 так как будет умножаться элементы на это число, если поставить 0 то ответ будет 0
		return a * b;	});
	cout << "RESULT ARR:\t" << resultARR << endl;

	vector<int> v = { 2,3,4 };
	auto resultv = accumulate(vc.begin(), vc.end(), 0, [](int a, int b) {
		if (b % 2 == 0)
		{
			return a + b; // если число четное то возвращаем сумму текущего состояния и числа которое проходило проверку на четность
		}
		else
		{
			return a; // если число не четное, то возвращаем текущее состояние.
		}});
	cout << "RESULT четных чисел:\t" << resultv << endl;

	auto resultstringarr = accumulate(next(begin(arr)), end(arr), to_string(arr[0]), [](string a, int b) { // третим параметром используем to_string() и передаем туда параметром 1(0) элемент массива
		return a + " - "+ to_string(b); // так же поменяли первый параметр на string a, и return a+to_string(b); чтобы конвертировать при возврате цифру в строку.
		}); // next(begin(arr)) используем чтобы первый элемент не задваивался, некст сдвигает на шаг вперед
	cout << "RESULT:\t" << resultstringarr << endl;


}*/
//STL equal и mismatch | Сравнение массивов | Библиотека стандартных шаблонов (stl) C++ #20
/*int main()
{
	setlocale(LC_ALL, "rus");

	int arr[] = { 10,3,4,5,7,11 };
	int arr2[] = { 10,3,4,5,7,11,2 };

	bool result = equal(begin(arr), end(arr), begin(arr2), end(arr2));
	cout << "result arr = " << result << endl; // true = 1, false = 0;

	vector<int> vc = { 11,3,4,5,7,10 };
	vector<int> vc2 = { 10,3,4,5,7,11 };

	sort(begin(vc), end(vc)); // сортировка
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
	// так как возвращает итераторы, я решил попробывать их разименовать.
	cout << "Пара элементов не соответствует = " << *resultls.first << " && " << *resultls.second << endl;

}*/
//Что такое mutex | Cинхронизация потоков | Многопоточное программирование | C++ #6
/*mutex mtx;
void Print(char ch) // принимает переменную типа чар
{
	mtx.lock(); // закрывает участок кода если уже работает поток, не давая другим потокам с ним работать пока не закончит работу первый поток
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
	mtx.unlock(); // когда первый поток отработал с этим участком когда, открывается доступ для следующего потока.
}

int main()
{
	setlocale(LC_ALL, "rus");


	SimpleTimer st; // просто засекает время выполнения программы
	thread t1 (Print,'#');
	thread t2 (Print,'%');
	// Оба потока не синхронизированы, и работают одновременно, получится каша.
	t1.join();
	t2.join();


}*/
//std equal predicate | Библиотека стандартных шаблонов (stl) C++ #21
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

	bool result = equal(begin(arr), end(arr), begin(arr2), end(arr2), [](const Point& p1, const Point& p2) // предикат принимает два объекта класса Point по ссылке, конст так как по ссылке и можем изменить объекты случайно
		{
			bool result = p1.x == p2.x && p1.y == p2.y; // проверяем на равенство два поля
			return result;
			// return p1.x==p2.x&&p1.y==p2.y;
		});
	cout << result << endl;
	if (result==true)
	{
		cout << "Сравниваемые вектора равны!" << endl;
	}
	else
	{
		cout << "Сравниваемые вектора НЕ равны!" << endl;
	}

}*/
//lock_guard mutex c++ | Cинхронизация потоков | Многопоточное программирование | C++ #7
/*mutex mtx;
void Print(char ch) // принимает переменную типа чар
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

	SimpleTimer st; // просто засекает время выполнения программы
	thread t1(Print, '#');
	thread t2(Print, '%');

	t1.join();
	t2.join();

}*/
//Deadlock Взаимная блокировка | Многопоточное программирование | C++ #8
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
//Алгоритм for_each c++ | Библиотека стандартных шаблонов (stl) C++ #22
/*void Foo(int a)
{
	cout << a << endl;
}
int main()
{
	setlocale(LC_ALL, "rus");

	int arr[] = {1,2,10,55};

	cout << "Алгоритм For_each" << endl;
	for_each(begin(arr), end(arr), Foo); // это алгоритм for_each
	cout << "Алгоритм for_each только с лямбда функцией, логика сразу в ней" << endl;
	for_each(begin(arr), end(arr), [](int a) // то-же самое что и сверху, только через лямбда-функцию
		{
			cout << a << endl;
		});
	cout << "Цикл for_each" << endl;
	for (auto a : arr) // одинаковые записи эта и та что сверху, Это цикл for_each.
	{
		Foo(a);
	}
}*/
//recursive_mutex C++ | Рекурсивный мьютекс | Многопоточное программирование | C++ #9
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
//STL unique | Удалить повторяющиеся элементы | Библиотека стандартных шаблонов (stl) C++ #23
/*int main()
{
	setlocale(LC_ALL, "rus");

	vector<int> arr = { 1,2,2,2,5,4,4 };
	vector<int>arr2;
	for (auto a : arr)
	{
		cout << a << " ";
	}cout<<"Просто вывод массива в консоль" << endl;
	unique_copy(begin(arr),end(arr),back_inserter(arr2));// передаем уникальные данные из одного контейнера в другой
	for (auto a : arr2)
	{
		cout << a << " ";
	}cout<<"arr2" << endl;
	auto result = unique(begin(arr), end(arr)); // изначально было без result, но он возвращает итератор указывающий на границу между нунжными и не нужными числами

	for (auto a : arr) // неправильно, просто выведет в консоль все числа только дубликаты в конец уберет, не будет видна толком граница между нунжными и ненужными числами
	{
		cout << a << " ";
	}cout<<"Вывод массива после unique, так же выводятся все числа но уже повторяющиеся в конце списка" << endl;
	for_each(begin(arr), result, [](int a) 
		{
			cout << a <<" ";
		}); std::cout << "Вывод массива после unique, алгоритмом for_each, указали границу итерратором, до нее будут выведены числа масива";
	arr.erase(result, end(arr));
	for (auto a : arr)
	{
		cout << a << " ";
	}cout << "Удаление элементов в вкеторе после границы" << endl;

}*/
//Отсортировать массив в случайном порядке | random_shuffle | STL C++ #24
/*class IAction
{
public:
	virtual void Action() = 0;
};
class CatAction:public IAction // наследуем от класса IAction
{
public:
	virtual void Action() override
	{
		cout << "Гладим кота" << endl;
	}
};
class TeaAction :public IAction
{
public:
	virtual void Action()override
	{
		cout << "Пьем чай" << endl;
	}
};
class DogAction :public IAction
{
public:
	virtual void Action()override
	{
		cout << "Играем с собакой" << endl;
	}
};
class SleepAction :public IAction
{
public:
	virtual void Action() override
	{
		cout << "Ложимся спать" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	//int arr[] = { 1,2,3,4,5 }; 
	IAction* arr[] = // тип данных должен быть указателем на класс прородитель, чтобы присвоить ей наследников.
	{
		new CatAction(), // сергей показал что нужно указывать адрес $CatAction, но так не сработало
		new DogAction(), // поэтому указал new
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
//unique_lock mutex | unique_lock vs lock_guard | Многопоточное программирование | C++ #10
/*mutex mtx;
void Print(char ch)
{
	//lock_guard<mutex>lg(mtx);
	unique_lock<mutex> ul(mtx,defer_lock);

	this_thread::sleep_for(chrono::milliseconds(2000)); //паралельно
	ul.lock();
	for (int i = 0; i < 5; i++) //в однопотоке /синхронно
	{
		for (int i = 0; i < 10; i++)
		{
			cout << ch;
			this_thread::sleep_for(chrono::milliseconds(10));
		}
		cout << endl;
	}
	cout << endl; // тут конец однопотока

	ul.unlock();

	this_thread::sleep_for(chrono::milliseconds(2000)); //паралельно
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
// Цэ КОНЕЦ курса С++ D: