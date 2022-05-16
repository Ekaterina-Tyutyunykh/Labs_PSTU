#pragma once
//#include "string";
//#include "Form1.h"
#include"class_graph.h"

int** matrix_temp;
int* solution;
int*** matrix_solution;
//string str = "";




int* Kommivoyazher(/*int*** matrix_solution, int** matrix_temp, int* solution,*/int count, int **matrix) {

    int size = count;

    matrix_temp = new int* [size];

    solution = new int[size];

    matrix_solution = new int** [size];

    for (int i = 0; i < size; i++) {
        matrix[i][i] = 10000000;
    }





    for (int i = 0; i <= size; i++)
    {
        matrix_temp[i] = new int[size];
    }

    for (int i = 0; i < size; i++)
    {
        matrix_solution[i] = new int* [size];
        for (int j = 0; j < size; j++)
        {
            if (matrix[i][j] == 0) {
                matrix_solution[i][j] = nullptr;
               // continue;
            }
            matrix_solution[i][j] = new int(matrix[i][j]);
        }
    }
    for (int l = 0; l < size; l++)
    {
        for (int i = 0; i < size; i++)
        {
            int min = 1000000;
            for (int j = 0; j < size; j++)
                if (matrix_solution[i][j] && min > *matrix_solution[i][j])
                    min = *matrix_solution[i][j];
            for (int j = 0; j < size; j++)
                if (matrix_solution[i][j])
                    *matrix_solution[i][j] -= min;
        }
        for (int j = 0; j < size; j++)
        {
            int min = 1000000;
            for (int i = 0; i < size; i++)
                if (matrix_solution[i][j] && min > *matrix_solution[i][j])
                    min = *matrix_solution[i][j];
            for (int i = 0; i < size; i++)
                if (matrix_solution[i][j])
                    *matrix_solution[i][j] -= min;
        }

        for (int i = 0; i < size; i++)
            for (int j = 0; j < size; j++)
                matrix_temp[i][j] = 0;

        for (int i = 0; i < size; i++)
            for (int j = 0; j < size; j++)
            {
                if (matrix_solution[i][j] && !*matrix_solution[i][j])
                {
                    int hmin = 1000000;
                    int vmin = 1000000;

                    for (int l = 0; l < size; l++)
                        if (l != i && matrix_solution[l][j] && hmin > *matrix_solution[l][j])
                            hmin = *matrix_solution[l][j];

                    for (int l = 0; l < size; l++)
                        if (l != j && matrix_solution[i][l] && vmin > *matrix_solution[i][l])
                            vmin = *matrix_solution[i][l];

                    matrix_temp[i][j] = hmin + vmin;
                }
            }

        int mcost = 0, mi = 0, mj = 0;
        for (int i = 0; i < size; i++)
            for (int j = 0; j < size; j++)
                if (matrix_solution[i][j] && mcost < matrix_temp[i][j])
                {
                    mcost = matrix_temp[i][j];
                    mi = i;
                    mj = j;
                }
        solution[mi] = mj;

        for (int i = 0; i < size; i++)
            matrix_solution[i][mj] = nullptr;

        for (int i = 0; i < size; i++)
            matrix_solution[mi][i] = nullptr;

        matrix_solution[mj][mi] = nullptr;







        for (int i = 0; i < size; i++) {
            matrix[i][i] = 0;
        }



    }
    return solution;
    //cout << "Отрезки пути ";
   // int s = 0;
   // for (int i = 0, j = 0; i < size; i++)
   // {
   //     j = solution[i];
   //     //cout << i + 1 << " -> " << j + 1 << '\t';
   //     s += matrix[i][j];
   // }
   //// cout << endl;
   // //cout << "Кратчайший путь  ";
   // int temp = 0;
   // for (int l = 0; l < size;)
   // {
   //     for (int i = 0, j = 0; i < size; i++)
   //     {
   //         if (temp == 0 || i + 1 == temp)
   //         {
   //             //if (temp == 0) cout << i + 1;
   //             j = solution[i];
   //             temp = j + 1;
   //             //if (temp > 0)	cout << " -> " << temp;
   //             l++;
   //         }
   //     }
   // }
    //cout << "Путь  " << s;
    //cout << endl;
}