#include <iostream>
using namespace std;

// ��� ������
int array[100];

// ����������
void Sort(int col) 
{ 
    // ��������� ���������� ��� �������� �������������� ����������
    int trash = 0;  
    // ���� �� ����� ���������� ���������
    for (int i = 1; i <= col; i++)
    {
        // ���� �� ����� col-i
        for (int j = 1; j <= col-i; j++) 
        {
            // ���� ����� ������� ������
            if (array [j] > array [j+1]) 
            {
                // �������, �� ������ �� �������
                trash = array[j]; 
                array [j] = array [j+1];
                array [j+1] = trash;
            }
        }
    }
}
// ����� �� ����� ������ ������� ����� ����������
void Out(int col) 
{
    for (int i = 1; i <= col; i++) 
    printf("A[%d] =  %d \n", i, array[i]); 
}
int main()
{
    int col_el;
    cout << "Enter length of array"<< endl;
    // ��������� ���������� ���������
    cin >> col_el;
    // ��������� �������� �������
    for (int i = 1; i <= col_el; ++i){
		printf("A[%d] =  ",i);
		cin>>array[i];
		cout<<endl;
	}
    Sort(col_el); 
    // ��������� ��
    cout << "Result is :"<<endl; 
    // � �������  
    Out(col_el);
    // ���� ������� �������
    cin >> col_el; 
    return 0;
}