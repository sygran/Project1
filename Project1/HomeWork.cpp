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
	cout << "Сумма= " << a + b + c << endl;
	cout << "Произведение= " << a * b * c << endl;
	cout << "Среднее= " << (a + b + c) / 3 << endl;


}*/
/*int main()
{
	setlocale(LC_ALL, "rus");

	int a, b, c;

	cout << "Введите три числа: " << endl;
	cin >> a >> b >> c;
	cout << "Сумма этих чисел= " <<a+b+c<< endl;
	cout << "Произведение этих числе= " <<a*b*c<< endl;
	cout << "Среднее арефметическое этих чисел= " <<(a+b+c)/3<< endl;

}
int main()
{
	setlocale(LC_ALL, "rus");
	float a, b, c;
	float sum;
	float proiz;
	float arifmet;
	cout << "Введите число: " << endl;
	cin >> a >> b >> c;


	sum = a + b + c;
	proiz = a * b * c;
	arifmet = (a + b + c) / 3;

	cout << "Сумма трех чисел равна= " << sum << endl;
	cout << "Произведение трех чисел равно= " << proiz << endl;
	cout << "Арифметическое этих чисел равно= " << arifmet << endl;


}*/
/*int main() //Напишите программу, проверяющую число, введенное с клавиатуры на четность.
{
	setlocale(LC_ALL, "rus");
	int a;
	cout << "Введите число" << endl;
	cin >> a;
	if (a % 2 == 0)
		cout << "Число четное" << endl;
	else
		cout << "Число не четное" << endl;

	int var;
	cout << "Введите число для проверки на четность: ";
	cin >> var;
	if (var % 2 == 0)
		cout << "Число: " << var << " чётное";
	else
		cout << "Число: " << var << " нечетное";
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
/*int main() { //Домашние задания
//1. Разработать программу, которая выводит на экран линию из символов.
//Число символов, какой использовать символ, и какая будет линия - вертикальная, или горизонтальная - указывает пользователь.
	setlocale(LC_ALL, "rus");
	char symbol;
	int index = 0;
	int dlina;
	int type;
	cout << "Введите длинну линии: ";
	cin >> dlina;
	cout << "Введите рисунок линии: ";
	cin >> symbol;
	cout << "Введите тип линии: " << endl
		<< "1. Вертикальная " << endl
		<< "2. Горизонтальная " << endl;
	cin >> typeline;

	if (typeline!=1 && typeline!=2)
	{
		cout << "не попал по кнопке, перезапусти! ";
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
//2. Написать программу, которая находит сумму всех целых нечетных чисел в диапазоне, указанном пользователе.
{
	setlocale(LC_ALL, "rus");

	int memory=0;
	int begin;
	int end;
	cout << "Введите начало диапазона: ";
	cin >> begin;
	cout << "Введите конец диапазона: ";
	cin >> end;

	do
	{
		if (begin%2!=0)
		{
			memory += begin;
		}
		begin++;
	} while (begin<end);
	cout << "Сумма нечетных чисел: " << memory;

}*/
/*int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, button;
	cout << "первое число: ";
	cin >> a;
	cout << "второе число: ";
	cin >> b;
	cout << "Мат. операция: " << endl
		<< "1. Сложить" << endl
		<< "2. Вычесть" << endl
		<< "3. Умножить" << endl
		<< "4. Разделить" << endl;
	cin >> button;
	switch (button)
	{
	case 1:
		cout << "Сумма: " << a + b;
		break;
	case 2:
		cout << "Разница: " << a - b;
		break;
	case 3:
		cout << "Ты перемножил: " << a * b;
		break;
	case 4:
		cout << "Ты разделил: " << (float)a / b;
		break;
	}

}*/
/*int main() //1. Разработать программу, которая выводит на экран линию из символов.
		   //2. Число символов, какой использовать символ, и какая будет линия - вертикальная, или горизонтальная - указывает пользователь.
{
	setlocale(LC_ALL, "rus");
	char line;
	int lineDlina;
	int lineUse;
	int index = 0;
	cout << "Выберите вид линии: ";
	cin >> line;
	cout << "Выберите длину линии: ";
	cin >> lineDlina;
	cout << "Выберите направление линии" << endl
		<< "1. Вертикальная" << endl
		<< "2. Горизонтальная" << endl
		<< "\t:";
	cin >> lineUse;
	switch (lineUse)
	{
	default:
		cout << "Ты дурак? перезапусти!";
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
/*int main() //Заполнить массив случайными числами. Генератор уникальных случайных чисел. rand. srand ДЗ #7
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
/*int main() //Заполнить массив случайными числами. Генератор уникальных случайных чисел. rand. srand ДЗ #7
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	const int SIZE = 10; // Создали константу назвали SIZE присвоили ей значение 10
	int arr[SIZE];		 // Создали массив присвоили SIZE, тоесть столько элементов сколько будет в константе SIZE
	bool УжеЕСТЬэтоЧисло;// Объявили переменную типа bool, назвали её уже есть это число, на проверку в дальнейшем есть ли новое сгенерированое число
						 // в массиве

	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); ) // создали цикл фор с переменной i=0, где условия будет выполняться пока i меньше чем количество
														 // элементов в массиве, и убрали инкримент чтобы цикл не делал следующий шаг, пока условия
														 // задания с уникальными случайными числами не будут выполнены
	{
		УжеЕСТЬэтоЧисло = false; // сразу в цикле обьявили переменную bool, и приравняли к ложь, мы же не знаем еще есть такоеже новое число в массиве.
		int НовоеРандомноеЧисло = rand() % 20; // обьявили новую переменную int назвали новое рандомное число и присвоили функцию по генерации новых
											   // рандомных чисел с деление по модулю на 20, для установки диапазона чисел от 0 до 19

		for (int j = 0; j < i; j++) // создали подцикл фор для проверики  Новых рандомных чисел основного цикла, присвоили переменную int назвали j
									// присвоили ей 0 значение, с условием выполнения когда j будет меньше i, чтобы не делать лишнюю работу
									// присвоили инкримент переменной j чтобы цикл не был вечным и выполнялись следующие условия
		{
			if (arr[j]==НовоеРандомноеЧисло) // создали условие if (Если) c его условием есть ли новое рандомное число в нашем массиве, если такое число
											 // есть то мы входим в цикл, если нету то пропускаем цикл.
			{
				УжеЕСТЬэтоЧисло == true; // если мы всетаки вошли в цикл и новое рандомное число уже есть в цикле, то наша bool переменная которой
										 // мы изначально поставили статус false(ложь), меняется на true(истина)
				break;                   // наше новое число число уже есть в массиве, значит дальше цикл выполнять не надо, идем дальше.
			}
			if (!УжеЕСТЬэтоЧисло) // далее создаем еще одну проверку if(если) c проверкой на истину (true or false) нашей bool переменной и присвоим ей
								  // значение false, тоесть мы зайдем в цикл только в том случае, если нового рандомного числа нету в массиве, а если
								  // такое число всетаки есть, то мы пройдем не будем его добавлять в массив и начнем проверку заного.
								  // УжеЕСТЬэтоЧисло!=true и !УжеЕСТЬэтоЧисло являются одинаковыми утверждениями
			{
				arr[i] = НовоеРандомноеЧисло; // Переменной не было в массиве, соответственно этой командой её добавляем.
				i++;						  // Ставим инкримент на начальный цикл, чтобы добавлять новые рандомные числа
			}
		}
	}


}
int main() */
/*int main() //1.Присваивать уникальные случайно генерированые числа в массив  2.Найти наименьшее число в массиве и вывести в консоль
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	const int SIZE = 10;
	int arr[SIZE];
	bool УжеЕсть;

	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); )
	{
		УжеЕсть = false;
		int НовыйРандом = rand() % 20;

		for (int j = 0; j < i; j++)
		{
			if (arr[j] == НовыйРандом)
			{
				УжеЕсть = true;
				break;
			}
		}
			if (!УжеЕсть)
			{
				arr[i] = НовыйРандом;
				i++;
			}

	}
		int minValue = arr[0]; // создали переменную инт, для хранения нашего минимального значения в массиве, пока присвоили ей значение нулевого
								// элемента в массиве, чтобы в цикл уже попадать со значением.
		for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++) // создали цикл фор, переменную i присвоили значение 1, чтобы сразу в цикле сравнивать
															   // нулевой элемент массива с 1 элементом массива.
		{
			if (arr[i]< minValue)	// условие если, будет проходить по всему циклу, и если будет находить в массиве число меньше чем записано у нас
									// в нашей переменной, то будет  присваивать это значение в нашу переменную
			{
				minValue = arr[i]; // если число в массиве меньше чем в переменной minValue, то ей будет присваиваться это значение
			}
		}
		cout << "Минимальное значение = " << minValue << endl; // вывовдим на экран в консоль наименьшее значение в массиве
}*/
/*int main() //Нету навыка, еще не решил задание.
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
/*void hey(int* pa, int* pb) // Домашнее задание из урока 49 возврат нескольких значение
						   // Напишите функцию, меняющую местами значения переменных с помощью указателей.
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

	cout << "Введите число первое: " << endl;
	cin >> a;
	cout << "Введите число второе: " << endl;
	cin >> b;

	hey(&a, &b);
	cout << "hey функция сработала " << endl
		<< "a= " << a << endl
		<< "b= " << b << endl;



}*/
/*template<typename T, typename T2>
void Swap(T &a, T2 &b) // Дз из урока 52. 1) Написать ШАБЛОННУЮ функцию которая меняет местами значения 2-х переменных с помощью ССЫЛОК.
{
	T temp = a;
	a = b;
	b = temp;
}
int main()
{
	setlocale(LC_ALL, "rus");

	string a, b;
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число ";
	cin >> b;
	Swap(a, b);
	cout << "Число поменялись местами! " << endl
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

	int* newArray = new int[size]; //новый массив для хранения старых данных
	for (int i = 0; i < size; i++)
	{
		newArray[i] = arr[i];

	}

	size--; //уменьшили майновский сизе на 1, было 6 стало 5
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
/*int strlen2(const char* str) // считает количество символов Simplecode
{
	int counter = 0;
	while (str[counter])
	{
		counter++;
	}

	return counter;
}
int strlen3(const char* str) // мой вариант через фор
{
	int index = 0;
	for (int i = 0; ; i++) // запомни, 2 условие не обязательно, так как дальше в логику я засунул еще одно условие, которое и будет счетчиком итерации
	{
		if (str[i]!='\0') // тоесть сдесь пока мы будем пробегать по массиву и видеть символы, цикл будет работать, пока цикл не наткнется на символ ноль терминатор
		{
			index++; // будет увеличивать нашу переменную на 1 каждый круг цикла
		}
		else // как только условие ифа не выполнется, тоесть мы напоримся на ноль терминатор, мы не войдет в условия того цикла, а сразу перейдем в цикл елсе, а там у нас бреак к *уям
		{
			break; // это чудо выводит нас из цикла фор
		}
	}
	cout << endl;
	return index;
}
int main() //Домашнее задание Написать свою реализацию функции strlen
{
	const char* str = "фывфыавпыфыпыфп      ";
	cout << strlen(str)<<endl;
	cout << strlen2(str);
	cout << strlen3(str);
}*/
/*//1. Объявить переменные с помощью которых можно будет посчитать общую сумму покупки нескольких товаров. Например плитки шоколада, кофе и пакеты молока.
int main()
{
	setlocale(LC_ALL, "rus");
	int chocolate, priceofchokolate, coffe, priceofcoffe, milk, priceofmilk;
	cout << "Введите цену шоколада: ";
	cin >> chocolate;
	cout << "Количество шоколада: ";
	cin >> priceofchokolate;
	cout << "Введите цену кофе: ";
	cin >> coffe;
	cout << "Количество кофе: ";
	cin >> priceofcoffe;
	cout << "Введите цену молока: ";
	cin >> milk;
	cout << "Количество молока ";
	cin >> priceofmilk;
	cout << "Сумма шоколада: " << chocolate * priceofchokolate << endl
		<< "Сумма кофе: " << coffe * priceofcoffe << endl
		<< "Сумма молока: " << milk * priceofmilk << endl
		<< "Общая сумма по всем товарам: "
		<< (chocolate * priceofchokolate) + (coffe * priceofcoffe) + (milk * priceofmilk);


}*/
/*//2. Объявить три переменные типа int и присвоить первой числовое значение, вторая переменная равна первой переменной увеличенной на 3, а третья переменная равна сумме первых двух.
int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c;
	a = 5;
	b = a + 3;
	c = a + b;
	cout << "перeменная а = " << a << endl
		<< "переменная b = " << b << endl
		<< "переменная с = " << c << endl;
}*/
/*//1. Создайте 4 переменные с разными типами данных и предложите пользователю ввести в них значения. После ввода, отобразите их на экране.
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
/*//2. Создайте 5 переменных типа char, предложите  пользователю ввести слово из пяти букв и покажите эти символы (слово) на экран.
int main()
{
	setlocale(LC_ALL, "rus");

	char a, b, c, d, f;
	cout << "Введите слово из пяти букв :"<<endl;
	cin >> a >> b >> c >> d >> f;
	cout << "Вы написали: "
		<< a << b << c << d << f;
}*/
/*//3. Вывести на экран текст в таком виде
int main()
{
	setlocale(LC_ALL, "rus");
	cout << "А почему в ресторане ей никогда не нравится то," << endl
		<< "что заказала она, и всегда нравится то, что заказал я?" << endl
		<< "И она начинает есть у меня из тарелки.Я ей говорю:" << endl
		<< "<<Закажи себе то же самое>>. Она говорит:<<Зачем?" << endl
		<< "Я только попробовать>>.И съедает половину." << endl
		<< "//к.ф. 'О чем говорят мужчины'//" << endl << endl;

}*/
/*//4. Пользователь должен ввести 2 числа. Вам надо показать на экран произведение этих чисел, сумму и разницу.  Покажите так же среднее арифметическое этих введенных чисел.
int main()
{
	setlocale(LC_ALL, "rus");

	int a, b;
	cout << "Введите два числа через enter: " << endl;
	cin >> a >> b;
	cout << "Произведение этих чисел :" << a * b << endl
		<< "Сумма эти чисел: " << a + b << endl
		<< "Разница: " << a - b << endl
		<< "Деление: " << (float)a / b << endl
		<< "модулю: " << a % b << endl;


}*/
/*//1. Распространённая задача:  Дано четырехзначное число (к примеру 5678), вывести на экран  в обратном порядке цифры из которых это число состоит.
//То есть мы должны увидеть на экране 8765. Подсказка: чтобы взять из числа отдельные цифры, надо применять  деление по модулю на 10.
int main()
{
	setlocale(LC_ALL, "rus");

	int mainNumber = 5678;

	cout << "Дано целое число: " << mainNumber << endl;
	cout << "Число  наизнанку: ";
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
/*//Необходимо провести расчет и показать на экран прибыль с депозита в месяц,  за весь срок депозита, и общую сумму к выплате в конце срока.
//Валюта пусть будет – доллар США. Процентная ставка – 5% годовых.  Формула  расчета  процентов  в  месяц –
//СуммаДепозита * (ПроцентнаяСтавка / 100)  / ДнейВГоду * ДнейВМесяце.
//Проценты в месяц: проводим расчет по формуле и записываем в переменную profit
//Проценты за весь срок : умножаем % за 1 месяц на весь срок депозита и записываем в profit
//sumDeposit + profit
int main()
{
	setlocale(LC_ALL, "rus");
	float a, b;

	cout << "Введите сумму депозита $: ";
	cin >> a;
	cout << "Введите количество месяцев: ";
	cin >> b;
	float procent = 5;
	const float daysinyear = 365;
	const float daysinmount = 30;
	float profit;
	profit = a * (procent / 100) / daysinyear * daysinmount;
	cout << "Проценты в месяц: "<<a<<"*"<<procent/100<<"/"<<daysinyear<<daysinmount<<"=" << profit << endl;
	profit *= b;
	cout << "Проценты за весь срок " << profit << endl;
	cout << "Общая сумма выплаты в конце срока : " << a + profit << endl;




}*/
/*int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int SIZE;
	cout << "Введите размер: ";
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
{ // задача на возвращение суммы 2х наименьших чисел массива
	int arr[5]{ 5, 8, 12, 19, 22 }; // ститчный массив на 5 ячеек заполненный вручную

	int temp; // временная переменная
	int m0 = arr[0];// переменной m0 присвоили значение 0 ячейки, там 5. стало м0=5
	int m1 = arr[1]; // тоже самое стало м1=8
	if (m0 > m1)
	{
		temp = m0; //в темп=5
		m0 = m1; // в м0 присвоили м1 , 5=8, м0=8
		m1 = temp; //м1=5
	}
	for (int i = 2; i < 5; i++) // цикл фор, будет едти с 3 индекса, с 3й чейки, так как значения 1 и 2 ячейки мы уже внесли в м1 м0
	{
		if (arr[i] < m0) // если текущее значение в массиве меньше 5
		{
			m1 = m0; m0 = arr[i]; // то присвоить это значение в м0
		}
		else if (arr[i] < m1) // если это значение меньше 8
		{
			m1 = arr[i]; // то присвоить его во вторую ячейку
		}
	}
	cout << m1 + m0 << endl; // просто для себя вывод сделал посмотреть, чотка или нет

	
	
}*/