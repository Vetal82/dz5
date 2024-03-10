// dz5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>

#include <cstdlib>

#include<ctime>

            using namespace std;

        int main()

        {

            setlocale(LC_ALL, "");

            srand(time(0));



            //===============================================================================

                 //// задаємо розмірність масиву 

                 //const int m = 3;

                 //const int n = 2;

                 //int A[m][n]; // оголошуємо двовимірний масив

                 //// заповнення масиву випадковими числами

                 //// і вивід на екран

                 //// перебираємо окремі рядки

                 //for (int i = 0; i < m; i++)

                 //{

                 //    // перебираємо окремі елементи кожного рядка

                 //    for (int j = 0; j < n; j++)

                 //    {

                 //        // ініціалізація елементів значеннями

                 //        // у діапазоні від 0 до 100

                 //        A[i][j] = rand() % 100;

                 //        // вивід значень на екран 

                 //        cout << A[i][j] << " ";

                 //    }

                 //        // перехід на інший рядок матриці

                 //        cout << "\n\n";

                 //}

                 //cout << "\n\n";

                 //// пошук у рядках максимального елемента

                 //// перебираємо окремі рядки

                 //for (int i = 0; i < m; i++)

                 //{

                 //    // припускаємо, що максимальним є

                 //    // нульовий елемент рядка

                 //    int max = A[i][0];

                 //    // пошук максимального елемента

                 //    // в поточному рядку

                 //    // зміна індексу стовпця для поточного рядка

                 //    for (int j = 0; j < n; j++)

                 //    {

                 //        if (A[i][j] > max)

                 //            max = A[i][j];

                 //    }

                 //    cout << "Max element " << i << " row=" <<

                 //        max << endl;

                 //}

         //========================================================================================================

                // 2.	Дано двовимірний масив.Визначити в якому стовпчику

                //       масиву сума елементів більша в першому чи в передостанньому ?

         //

         //    const int  row = 6;

         //    const int  col = 5;

         //

         //    int m[row][col] = {0};

         //

         //    for (int i = 0; i < row; i++)

         //    {

         //        for (int j = 0; j < col; j++)

         //        {

         //            m[i][j] = rand() % 10 + 5;

         //            cout.width(5);

         //            cout << m[i][j];

         //        }

         //        cout << endl;

         //    }

         //    cout << endl;

         //

         ////---------

         //    int sum_1 = 0;

         //

         //    for (int i = 0; i < row; i++)

         //    {      

         //            sum_1 += m[i][0];       

         //    }

         //   

         ////--------

         //    int sum_2 = 0;

         //

         //    for (int i = 0; i < row; i++)

         //    {      

         //            sum_2 += m[i][col - 2];

         //              

         //    }

         // 

         //

         //    if (sum_1 > sum_2) {

         //        cout << "сумма элемонтов в 1 столбце = " << sum_1 << " это больше нежели в предпоследнем.\n";

         //    }

         //    else 

         //    {

         //        cout << "сумма элемонтов в предпоследнем столбце = " << sum_2 << " это больше нежели в 1.\n";

         //    }



             //3.	Дано двовимірний масив розміру 6×5. Перетворити масив,

             //      помінявши місцями мінімальний і останній елемент у кожному рядку.

         //

         //    const int  row = 6;

         //    const int  col = 5;

         //

         //    int m[row][col] = {0};

         //

         //    for (int i = 0; i < row; i++)

         //    {

         //        for (int j = 0; j < col; j++)

         //        {

         //            m[i][j] = rand() % 10 + 5;

         //            cout.width(5);

         //            cout << m[i][j];

         //        }

         //        cout << endl;

         //    }

         //    cout << endl;

         ////--------------------------

         //

         //    for (int i = 0; i < row; i++){

         //

         //        int min = m[i][0];

         //        int buf1 = m[i][col - 1];

         //

         //        for (int j = 0; j < col; j++)

         //        {

         //            

         //            if (m[i][j] < min) {

         //                min = m[i][j];

         //                m[i][j] = buf1;

         //            }

         //            

         //            m[i][col - 1] = min;

         //                      

         //        }

         //         

         //    }

         ////-------------------------------

         //    for (int i = 0; i < row; i++)

         //    {

         //        for (int j = 0; j < col; j++)

         //        {

         //            cout.width(5);

         //            cout << m[i][j];

         //        }

         //        cout << endl;

         //    }

         //    cout << endl;





             ////4.	У кожному з двох класів навчаються по 18 осіб.

             ////      Відомі середні оцінки кожного учня кожного класу, 

             ////      підраховані з низки предметів (усі значення для кожного класу різні).

             ////      Визначити, у якому класі в "третього з учнів,

             ////      які найуспішніше навчаються", середня оцінка більша.



             //const int size = 18;

             //int m[size] = { 9, 12, 5, 10, 8, 8, 9, 12, 10, 6, 7, 9, 10, 3, 6, 5, 4, 1};

             //////вывод массива до сортировки

             ////for (int i = 0; i < size; i++)

             ////{

             ////    cout << m[i] << " ";

             ////}

             ////cout << endl;

             ////сортировка пузырьком

             //for (int i = 0; i < size - 1; i++)

             //{

             //    for (int j = 0; j < size - i - 1; j++)

             //    {

             //        if (m[j] < m[j + 1])

             //        {

             //            int b = m[j];

             //            m[j] = m[j + 1];

             //            m[j + 1] = b;

             //        }

             //    }

             //}

             //////вывод массива после сортировки

             ////for (int i = 0; i < size; i++)

             ////{

             ////    cout << m[i] << " ";

             ////}

             ////cout << endl;

             ////-------------------------------------

             //const int siz = 18;

             //int s[siz] = { 12, 10, 5, 11, 7, 8, 9, 9, 8, 3, 7, 9, 12, 3, 6, 9, 4, 7 };

             //////вывод массива до сортировки

             ////for (int i = 0; i < siz; i++)

             ////{

             ////    cout << s[i] << " ";

             ////}

             ////cout << endl;


             //for (int i = 0; i < siz - 1; i++)

             //{

             //    for (int j = 0; j < siz - i - 1; j++)

             //    {

             //        if (s[j] < s[j + 1])

             //        {

             //            int b = s[j];

             //            s[j] = s[j + 1];

             //            s[j + 1] = b;

             //        }

             //    }

             //}

             //if (m[2] > s[2]) { cout << " найуспішніше навчаеться учень ,М, класу\n" << " його бал = " << m[2]; }

             //else if (m[2] < s[2]) { cout << " найуспішніше навчаеться учень ,S, класу\n" << " його бал = "<< s[2]; }

             //else

             //{

             //    cout << " Данні учні ,М, класу  та ,S, класу мають рівний бал " << endl;

             //}

             //

             //

             //////вывод массива после сортировки

             ////for (int i = 0; i < siz; i++)

             ////{

             ////    cout << s[i] << " ";

             ////}

             ////cout << endl;

             ////    return 0;



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
