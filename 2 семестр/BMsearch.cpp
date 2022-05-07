#include <iostream>
#include <string>
using namespace std;


int BMsearch(string find, string str)
{
	int find_size = find.length();
	int str_size = str.length();
	if (str_size < find_size) return -1; 

	int array[256];
	for (int i = 0; i < 256; i++)  array[i] = find_size; 
	
	for (int i = find_size - 2; i >= 0; i--) 
	{
		if (array[(int)find[i]] == find_size)   array[(int)find[i]] = find_size - i - 1; 
		
	}
	int index = find_size - 1; 
	bool flag = true;
	while (index < str_size) 
	{
		if (find[find_size - 1] != str[index])   index += array[str[index]]; 
		
		else 
		{
			for (int i = find_size - 1; i >= 0 && flag; i--) 
			{
				if (find[i] != str[index - find_size + i + 1]) //если нашлось несовпадение
				{
					index += array[str[index - find_size + i + 1]]; 
					flag = false;
				}
				else if (i == 0)   return index - find_size + 1; 
			}
		}
	}
	return -1; 
}

int main()
{
	setlocale(LC_ALL, "ru");
	string find;
	string str;
	cout << "Введите строку "<<endl;
	cin >> str;
	
	cout << "Введите подстроку для поиска "<<endl;
	cin >> find;
	
	int index = BMsearch(find, str);
	if (index > 0) {
		cout << "Подтрока находится, начиная с индекса " << index << endl;
		str.erase(index, find.length());
		cout << "Сначала удаление данной подстроки " << str << endl;
		str.insert(0, find);
		cout << "Добавление в начало: " << str;
	}
	else cout << "ошибка";
	return 0;
}

