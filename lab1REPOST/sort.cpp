#include <iostream>
using namespace std;

// наш массив
int array[100];

// сортировка
void Sort(int col) 
{ 
    // временная переменная для хранения промежуточного результата
    int trash = 0;  
    // пока не равно количеству елементов
    for (int i = 1; i <= col; i++)
    {
        // пока не равно col-i
        for (int j = 1; j <= col-i; j++) 
        {
            // если левый элемент больше
            if (array [j] > array [j+1]) 
            {
                // правого, то меняем их местами
                trash = array[j]; 
                array [j] = array [j+1];
                array [j+1] = trash;
            }
        }
    }
}
// вывод на экран нашего массива после сортировки
void Out(int col) 
{
    for (int i = 1; i <= col; i++) 
    printf("A[%d] =  %d \n", i, array[i]); 
}
int main()
{
    int col_el;
    cout << "Enter length of array"<< endl;
    // считываем количество элементов
    cin >> col_el;
    // считываем элементы массива
    for (int i = 1; i <= col_el; ++i){
		printf("A[%d] =  ",i);
		cin>>array[i];
		cout<<endl;
	}
    Sort(col_el); 
    // сортируем их
    cout << "Result is :"<<endl; 
    // и выводим  
    Out(col_el);
    // ждем нажатия клавиши
    cin >> col_el; 
    return 0;
}