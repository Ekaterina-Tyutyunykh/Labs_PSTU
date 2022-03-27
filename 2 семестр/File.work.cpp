#include <iostream>
#include <fstream>
#include<string>
using namespace std;

bool fun(string mass[], int v) {
    int n = 0;
    for (int i = 0; i < v-1; i++) {
        for (int j = i + 1; j < v; j++) {
            if (mass[j] == mass[i]) n++;
        }
        if (n == 1) return true;
  
    }
    return false;
}

int main()
{
    setlocale(LC_ALL,"ru");
    ifstream in("F1.txt");
    ofstream out("F2.txt");

    int v =0;
    int m = 0;
    int count;
    int max=0;
    string max_word = " ";
    int max_index=0;
    string array_word[100] = {};
    string s;
   while (!in.eof())
   {
        getline(in, s);
        int start = 0;
        v = 0;
        for (int i = 0; i < s.size(); i++) {
            count = 0;
            
            if ((s[i] == 32) || (i == s.size() - 1)) {
                int end = i;
                for (int j = start; j < end; j++) { array_word[v] += s[j]; }
                for (int j = 0; j < end - start; j++) {
                    if (array_word[v][j] == 'a' || array_word[v][j] == 'A')
                    {
                        count++;
                        if (count > max) {
                            max = count;
                            max_word = array_word[v];
                            max_index = m;
                        }
                    }
                }
                m++;  
                v++;//количество слов в файле всего
                start = end + 1;
            }
        }
 
       // cout << v << endl;
        if (fun(array_word, v)) {
            out << s;
            out << '\n';
        }
        for (int n = 0; n < v; n++)
        {
            array_word[n] = "";
        }
    }
    cout <<"Количество А(а): " << max << ", Само слово:  " << max_word << ", Его номер (1 - первое слово файла):  " << max_index + 1;
    in.close();
    out.close();
    return 0;
}