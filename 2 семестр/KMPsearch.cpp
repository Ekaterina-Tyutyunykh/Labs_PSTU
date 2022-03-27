#include <iostream>
#include <string>
using namespace std;

int search(string str, string find)
{
	int str_size = str.length();
	int find_size = find.length();
	int* array = new int[find_size];//массив длины совпадающий суффиксов и префиксов
	int i = 1, j = 0;
	array[0] = 0; 
	while (i <= find_size) 
	{
		if (find[i] == find[j]) 
		{
			array[i] = j + 1; // то присвоение длины префикса
			i++; 
			j++;
		}
		else if (j == 0) 
		{
			array[i] = 0; 
			i++; 
		}
		else  j = array[j - 1]; // сдвиг указателя на следующий символ
	}


	i = 0; // индекс по строке
	j = 0; // индекс по ключу
	while (i <= str_size)
	{
		if (str[i] == find[j])
		{
			i++; j++; 
			if (j == find_size)	return i - find_size; 
		}
		else if (j == 0) 
		{
			i++; 
			if (i == str_size) 	return -1; 
		}
		else	j = array[j - 1]; // иначе сдвиг указателя по таблице
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	string find;
	string str;

	cout << "Введите строку: ";
	cin >> str;

	cout << endl << "Введите подстроку: ";
	cin >> find;


	int index = search(str, find);
	if (index > 0) {
		cout << "Строка находится, начиная с индекса " << index <<endl;
		str.erase(index, find.length());
		cout << "Строка после удаления: " << str << endl;
	}
	else cout << "ошибка";
	return 0;
}


