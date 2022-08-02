#include <iostream>
#include <ctime>
#include <string>
#include <cstring>

#define ln '\n'
#define tab '\t'

using namespace std;

void Foo(int *pb, int *ps, int *fs) {
    (*pb)++;
    (*ps) = 555;
    (*fs) = -20;
}

void endLine()
{
    cout << endl;
}


template <typename F>
void print(F msg)
{
    cout << msg << endl;
}

template <typename F>
void printArr(F msg)
{
    cout << msg << tab;
}

template <typename F, typename A>
void printArr2(F one, F two, A arr)
{
    cout << arr[one][two] << tab;
}

template <typename F, typename W>
void print(W name,F msg)
{
    cout << name << " = " << msg << endl;
}
//int main() {
    // Консоль
    // std::cout <<  "Hi there" << std::endl;
/*
    cout << "Привет, Alibe!" << endl;
    cout << "Привет, Kostromin!" << endl;
    cout << "Привет, Xallenz!" << endl;
    cout << "Привет, Roffles!" << endl;
    cout << "Привет, Schachern!\n";
    cout << "\n\t\"Ошибка ввода!\"\n";
*/
    // Типы данных
/*
    int a, b;
    a = 16;
    b = 17;
    cout << b-a << endl;
    a = 3;
    cout << b-a << endl;

    double twice = 1.156111;
    cout << twice << endl;

    char alphabet = 'gf'; // Выводится последний символ
    cout << alphabet << endl;

    bool chance = true;
    cout << chance << endl;

    string steal = "fallguys";
    cout << steal << endl;
*/
/* константа:
    const int weekDays = 7;
    cout << tab << weekDays << ln;
 */
// Ввод данных(input):
/*
    int var, num, spel, tel;
    cout << "Введите первое число: ";
    cin >> var;

    cout << "Введите второе число: ";
    cin >> num;
    cout << "число 1 = " << var << ln << "Число 2 = " << num << ln;

    cout << "Введите 2 числa: ";
    cin >> spel >> tel;
    cout << "число 1 = " << spel << ln << "Число 2 = " << tel << ln;
*/
// Аналитические операторы:
// !УНАРНЫЕ:
/*
    int a = -58;
    cout << a << ln;

    a = -a;
    cout << a << ln;

//БИНАРНЫЕ:
    int q = 5, b = 2, c, s;
    c = q + b;
    cout << c << ln;

    s = (2 + 2) * 2;
    cout << s << ln;

 //DZ:
    int e, r, t;
    cout << "Введите 3 числа:" << ln;
    cin >> e >> r >> t;

    cout << "Сумма 3 чисел:" << e + r + t << ln;
    cout << "Произведение 3 чисел:" << e * r * t << ln;
    cout << "Сумма 3 чисел:" << (double)(e + r + t) / 3 << ln;
*/
//Инкременты и декримент:
/*
    int a = 1, b;
    cout << a << ln;

    a += 20 ; // or a++ - только на единицу
    cout << --a << ln; // - вывод в консольб сначала знак потом переменная;
    b = ++a*a++;
    cout << b << ln;
*/
//Логические операции:
/*
    cout << ((2 != 3) && (4 > 6) || 2 > 1 ) << ln;

//Условные операторы
    const bool isRain = true;
    if(isRain)
    {
        cout << "Идет дождь - нам нужен зонт!" << ln;
    }
    else if(!isRain) {
        cout << "Дождя нет - зонт не нужен!" << ln;
    }
*/
//    cout << 4 % 2 << ln;  - проверка на четность числа

//Опиратор множественного выбора Switch:
/*
    int a;
    cin >> a;

    switch (a)
    {
    case 1:
        cout << "Вы ввели 1" << ln;
        break;
    case 2:
        cout << "Вы ввели 2" << ln;
        break;
    case 3:
        cout << "Вы ввели 3" << ln;
        break;
    case 4:
        cout << "Вы ввели 4" << ln;
        break;
    case 5:
        cout << "Вы ввели 5" << ln;
        break;
    case 6:
        cout << "Вы ввели 6" << ln;
        break;
    case 7:
        cout << "Вы ввели 7" << ln;
        break;
    case 8:
        cout << "Вы ввели 8" << ln;
        break;
    case 9:
        cout << "Вы ввели 9" << ln;
        break;
    default:
        cout << "я не знаю этого числа" << ln;
        break;

    }
*/
//Цикл while
//    cout << "Текст вевелся на экран!" << ln;
/*
    int a = 1;
    do
    {
        cout << "Переменная а = " << a << ln;
        a++;
    }
    while(a<3);

//Цикл for:

    for (int i = 0; i < 10; i++) {

        if (i == 5) {
            continue;
        }
        cout << "i = " << i << ln;
    }

    for (int i = 1; i < 5; i++) {
        cout << "Цикл 1 итерация № " << i << ln;

        for (int j = 1; j < 5; j++){
            cout << tab << "Цикл 2 инерация № " << j << ln;
        }
    }
*/
//Массивы
/*
    int arr[4];
    arr[0] = 5;
    arr[1] = 13;
    arr[2] = 12;
    arr[3] = 4;

    cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << ln;
*/
//sizeoff();
/*    int arr[]{5, 43, 24, 44, 55};
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        cout << arr[i] << ln;
    }
 */
//random number generator
/*
    srand(time(NULL));

    bool alreadyThere;
    int arr[10];
    for (int i = 0; i < 10; ) {
        alreadyThere = false;
        int newRandomValue = rand()%20;
        for (int j = 0; j < i; j++) {
            if (arr[j] == newRandomValue){
                alreadyThere = true;
                break;
            }

        }
        if (!alreadyThere) {
            arr[i] = newRandomValue;
            i++;
        }
    }
*/
/*    for (int i = 0; i < 10; i++) {
        cout << arr[i] << ln;
    }
*/
/*
    int minvalue = arr[0];
    for (int i = 0; i < 10; ++i) {
        if(arr[i] < minvalue){
            minvalue = arr[i];
        }
    }
    cout << "minimal value: " << minvalue << ln;
*/
//двумерные массивы;
 /*
    const int  ROW = 3;
    const int COL = 4;
    int arr[ROW][COL]
    {
        {71,22,54,66},
        {15,47,33,12},
        {45,78,48,15}
    };

    cout << arr[1][1] <<ln << arr[2][0] << ln;
*/
//Заполнение двумерного массива
/*
    const int ROW = 5;
    const int COL = 8;

    int arr[ROW][COL];

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; ++j) {
            arr[i][j] = rand()%10;
        }
    }

    for (int i = 0; i < ROW; ++i) {
        for (int j = 0; j < COL; ++j) {
            cout << arr[i][j] << tab;
        }
        cout << ln;
    }
*/
//}

//Функции:
/*
int sum(int a, int b)
{

    int result;
    result = a + b;
    return result;

//      or
    return a + b;
}
void parapa(){} // Функция ничего не возвращает, но может использываться;
int main() // функция чтото возвращает;
{
    cout << sum(2, 4) << ln;
}
*/
//Передача параметров функции
/*
int Foo(int a)
{
    return ++a;
}

int main()
{
    int value = 1;
    value = Foo(value);
    cout << value << ln;
}
*/
//Передача массивов функции:
/*
void FillArray(int* const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}

void PrintArray(const int* const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    const int SIZE = 10;
    int arr[SIZE];

    FillArray(arr, SIZE);
    PrintArray(arr, SIZE);
}
*/
// Прототипы функции:
/*
void foo(); // - прототип функции;
//  сама функция пишется в любом месте, но, чтобы функция в любом месте вызывалась, нужен прототип;
void flood(int a, int b);

int main()
{
    foo();
    flood(5, 2);
}

void foo()
{
    cout << "я функция, меня вызвали!" << endl;
}

void flood(int a, int b)
{

}
*/
// Область видимости:
/*
int a; // видится везде;

void foo()
{
    a++; //+1
}

int main()
{
    foo();
    a++;  //+1
    cout << a << ln;
}
*/
// Аргументы функции (по умолчанию):
/*
void foo(int a = 6) // cначала любые параметры потом параметры со  значением!!!
{
    for (int i = 1; i < a; i++) {
        cout << i << ")# ";
    }
}

int main()
{
    foo(11);
}
*/
//Ключевое слово инлайн:
/*
inline int sum(int a = 5, int b = 6)
{
    return a + b;
}

int main()
{
    cout << sum();
}
*/
//перегрузка функций:
/*
inline int sum(int a, int b)
{
    return a + b;
}

inline int sum(int a, int b, int c)
{
    return a + b + c;
}

inline double sum(double a, double b)
{
    return a + b;
}

int main()
{
    cout << sum(5,6) << ln;
    cout << sum(5.5,6.5) << ln;
    cout << sum(55,65, 78) << ln;
}
*/
// Шаблоны функций:
/*
template <typename T, typename F>
T sum(T a, F b)
{
    return a + b;
}

int main()
{
    cout << sum(5, 10) << ln;
    cout << sum(5.2, 10.4) << ln;
    cout << sum(5.2, 10) << ln;

}
*/
// Рекурсия - функции:
//факториал:
/*
int Fact(int N)
{
    if (N == 0)
        return 0;
    else if (N == 1)
        return 1;
    return N * Fact(N-1);
}

int main()
{
    cout << "Введите число:" << ln;
    int num;
    cin >>  num;
    cout << Fact(num) << ln;
}
*/
//Указатели все о Указателях + cсылки:
/*
int main()
{
    //Указатели

   int a = 5;
   int *pa = &a;
   cout << pa << ln;
   cout << *pa << ln;
//Арифметика указателей:

    const int num = 5;
    int arr[num]{4, 55, 79, 1, 4};

    for (int i = 0; i < num; i++) {
        cout << arr[i] << ln;
    }

    int *pArr = arr;
    for (int i = 0; i < num; i++) {
        cout << pArr[i] << ln;
    }

// связь кода и функции через указатель

    int b = 0;
    int ps = 0;
    int fs = 1;
    cout << "b = " << b << ln;
    cout << "ps = " << ps << ln;
    cout << "fs = " << fs << ln;

    Foo(&b, &ps, &fs);

    cout << "b = " << b << ln;
    cout << "ps = " << ps << ln;
    cout << "fs = " << fs << ln;

//Ccылки:

    int c = 5;
    int *pc = &c;
    int &cref = *pc;

    int *ppc = &cref;

    cout << "c\t" << c << ln;
    *ppc = 12;
    cout << "c\t" << c << ln;

}
*/
//Параметры и аргументы ссылок:
/*
void foo(int a)
{
    a = 1;
}

void foo2(int &a)
{
     a = 2;
}

void foo3(int *a)
{
    *a = 3;
}

int main()
{
    int value = 5;
    cout << value << ln;

    cout << "Foo" << ln;
    foo(value);
    cout << value << ln;

    cout << "Foo" << ln;
    foo2(value);
    cout << value << ln;

    cout << "Foo" << ln;
    foo3(&value);
    cout << value << ln;
}
*/
//Возврат нескольких значений функции через ссылки:
/*
void foo(int &a, int &b, int &c)
{
    a = 10;
    b *= 2;
    c -= 100;
}

int main()
{
    int a = 0;
    int b = 4;
    int c = 34;

    cout << "a = " << a << ln;
    cout << "b = " << b << ln;
    cout << "c = " << c << ln;

    foo(a, b, c);

    cout << "a = " << a << ln;
    cout << "b = " << b << ln;
    cout << "c = " << c << ln;
}
*/
//DZ - изменить значение переменной в функции с помощью ссылки:
/*
template <typename F>
void Swap(F &a, F &b)
{
    F temp = a;
    a = b;
    b = temp;
}

int main()
{
    string a = "Анатолий";
    string b = "Сергей";
    cout << "a =" << a << ln;
    cout << "b =" << b << ln;

    Swap(a, b);

    cout << "a =" << a << ln;
    cout << "b =" << b << ln;
}
*/
// Опираторы выделения памяти -  new || delete:
/*
int main()
{
    int *pa = new int;
    *pa = 10;
    print("a", *pa);
    delete pa;
}
*/
// Работа с динамической памятью. NULL и nullptr:
/*
int main()
{

    int *pa = new int;
    *pa = 10;
    print("a", *pa);
    delete pa;
    pa = nullptr;
    if (pa != nullptr)
    {
        print(pa);
    }
}
*/
//Динамический массив:
/*
int main()
{
    int size = 50;
    int *arr = new int[size];

    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 10;
    }

    for (int i = 0; i < size; i++) {
        printarr(arr[i]);
    }

    delete [] arr;
}
 */
//Двумерный динамический массив:
/*
int main()
{
    //размер массива
    int rows = 4;
    int cols = 5;
    // cоздание массива;
    int **arr = new int* [rows];

    for (int i = 0; i < rows; i++) {
        arr[i] = new int  [cols];
    }
//заполнение массива
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 20;
        }
    }
//вывод массива

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printArr2(i, j, arr);
        }
        endLine();
    }
//удаление массива из памяти:
    for (int i = 0; i < rows; i++)
    {
        delete [] arr[i];
    }

    delete [] arr;
}
*/
//Копирование динамического массива:
/*
void FillArray(int* const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}

void PrintArray(const int* const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        printArr(arr[i] );
    }
    endLine();
}

int main()
{
    const int SIZE = 10;
    int *FirstArr = new int [SIZE];
    int *SecondArr = new int [SIZE];

    delete [] FirstArr;
    delete [] SecondArr;

    FillArray(FirstArr, SIZE);
    FillArray(SecondArr, SIZE);

    print("FirstArr = ");
    PrintArray(FirstArr, SIZE);
    print("SecondArr = ");
    PrintArray(SecondArr, SIZE);
}
*/
//Массив - измененние размера, удаление и тд:
/*
void FillArray(int* const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}

void PrintArray(const int* const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        printArr(arr[i] );
    }
    endLine();
}


void push_back(int *&arr, int &size, const int value)
{
    int *newArray = new int [size + 1];
    for (int i = 0; i < size; i++) {
        newArray[i] = arr[i];
    }
    newArray[size] = value;
    size++;
    delete [] arr;
    arr = newArray;
}

void pop_back(int *&arr, int &size)
{
    size--;
    int *newArray = new int [size];
    for (int i = 0; i < size; i++) {
        newArray[i] = arr[i];
    }
    delete [] arr;
    arr = newArray;
}

int main()
{
    int size = 5;
    int *arr = new int [size];
    FillArray(arr, size);
    PrintArray(arr, size);
    push_back(arr, size, 111);
    PrintArray(arr, size);

    pop_back(arr, size);
    PrintArray(arr, size);

    delete [] arr;
}
*/
//Cтроки:
/*
int main()

{
    char string [] = "haoohoo!";
    int length = strlen(string);
    print(string);
    print(length);
}
*/
//Прелбразование типов:
/*
int main()
{
    double a = 33.3;
    print((int)a);
    print((bool)a);
    print((char)a);
}
 */
// Таблица символов ASCII:
/*
 int main()
{
    for (int i = 0; i < 255; i++) {
        cout << "code = " << i << " " << "char = " << (char)i << endl;
    }
}
*/
//Строки и указатели +DZ:
/*
int strLength(char *str)
{
    int counter = 0;
    while (str[counter]!='\0')
    {
        counter++;
    }
    return counter;
}

int main()
{
    char *str = "shoblavobla";
    print(strLength(str));
}
*/
//Кoнкатенация строк:
/*
int main()
{
    string father = "Macheyle";
    string seed = "Wooden";
    string name = "Jake";
    string result;
    result = "Фамилия " + seed + " имя " + name + " отчество " + father;
    print(result);
    print("Фамилия " + seed + " имя " + name + " отчество " + father);
}
*/
//Указатели на функцию:
/*
string DataFromDB()
{
    return "DataFromDB";
}

string DataFromWebServer()
{
    return "DataFromWebServer";
}

void ShowInfo(string (*foo)())
{
    print(foo());
}

int Foo1(int a)
{
    return a - 1;
}

int Foo2(int a)
{
    return a * 2;
}

int main()
{
    int(*fooPointer)(int a);
    fooPointer = Foo2;
    print(fooPointer(4));
    fooPointer = Foo1;
    print(fooPointer(4));
    ShowInfo(DataFromWebServer);
}
*/
//Препроцессор:
/*
#define PI 3.14
#define ln '\n'
// include - подключает какой-то файл(библиотеку);
int main()
{
    print(PI);
}
 */
//макрос функция:
/*
#define FFF(x, y)((x)*(y))
int main()
{
    print(FFF(5, 6));
}
*/
//условная компиляция:
/*
//#define Debug - если закомментировать, область кода не будет работать при компиляции
#define Debug 5
int main()
{
#ifndef Debug
    //обратная область кода - работает если дебаг не подключен
#endif
#if Debug < 4
    //область кода
    print("workif");
#elif Debug == 5
    print("work elif");
#else
    print("work else");
#endif //debug

    for (int i = 0; i < 4; ++i)
    {
        #ifdef Debug
            print(i);
        #endif //debug
    }
}
*/
//условные тернарые операторы:
/*
int main()
{
    int a;
    print("Введите число:");
    cin >> a;

    //a < 10 ? print(a," < 10") : print(a, " > 10");
    a < 10 ? cout << a << " < 10" << ln : a > 10 ? cout << a << " > 10" << ln : cout << a << " = 10" << ln;
}
*/
// int argc, char* argv[]
/*
int main(int argc, char* argv[])
{
    for (int i = 0; i < argc; ++i) {
        print(argv[i]);
    }
}
*/
