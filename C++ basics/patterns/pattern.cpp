#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    cout << "____________Pattern 1______________" << endl;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
} 

void pattern2(int n)
{
    cout << "____________Pattern 2______________" << endl;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    cout << "____________Pattern 3______________" << endl;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    cout << "____________Pattern 4______________" << endl;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    cout << "____________Pattern 5______________" << endl;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    cout << "____________Pattern 6______________" << endl;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    /*
     *
     * * *
     * * * * *
     * * * * * * *
     * * * * * * * * *
     */
    cout << "____________Pattern 7______________" << endl;
    
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            for (int j = 1; j <= n - i; j++)
            {
                cout << "  ";
            }
            cout << "*" << endl;
        }
        else
        {
            for (int j = 1; j <= n - i; j++)
            {
                cout << "  ";
            }
            for (int k = 1; k <= ((i * 2) - 1); k++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
}

void pattern8(int n)
{
    /*
     * * * * * * * * * * *
     * * * * * * * * *
     * * * * * * *
     * * * * *
     * * *
     *
     */
    cout << "____________Pattern 8______________" << endl;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= (((n - i) * 2) - 1); k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    cout << "____________Pattern 9______________" << endl;
    
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            for (int j = 1; j <= n - i; j++)
            {
                cout << "  ";
            }
            cout << "*" << endl;
        }
        else
        {
            for (int j = 1; j <= n - i; j++)
            {
                cout << "  ";
            }
            for (int k = 1; k <= ((i * 2) - 1); k++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= (((n - i) * 2) - 1); k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern10(int n)
{
    cout << "____________Pattern 10______________" << endl;
    
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {

            cout << "*" << endl;
        }
        else
        {
            for (int k = 1; k <= ((i * 2) - 1); k++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    for (int i = 0; i < n; i++)
    {

        for (int k = 1; k <= (((n - i) * 2) - 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern11(int n)
{
    /*
    1
    01
    101
    0101
    10101
    010101
    */
    cout << "____________Pattern 11______________" << endl;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

void pattern12(int n){
    /*
    1          1
    12        21
    123      321
    1234    4321
    12345  54321
    123456654321
    */
    cout << "____________Pattern 12______________" << endl;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int k = 1; k <= (2 * (n - i)); k++)
        {
            cout << "  ";
        }
        for (int l = i; l >= 1; l--)
        {
            cout << l << " ";
        }
        cout << endl;
    }
}

void pattern13(int n)
{
    /*
    1
    2  3
    4  5  6
    7  8  9  10
    11  12  13  14  15
    16  17  18  19  20  21
    */
    cout << "____________Pattern 13______________" << endl;
    
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
            a++;
        }

        cout << endl;
    }
}

void pattern14(int n)
{
    /*
    A
    A B
    A B C
    A B C D
    A B C D E
    A B C D E F
    */
    cout << "____________Pattern 14______________" << endl;
    
    for (int i = 1; i <= n; i++)
    {
        char a = 'A';
        for (int j = 0; j < i; j++)
        {
            cout << a << " ";
            a++;
        }

        cout << endl;
    }
}

void pattern15(int n)
{
    /*
    A B C D E F
    A B C D E
    A B C D
    A B C
    A B
    A
    */
    cout << "____________Pattern 15______________" << endl;
    
    for (int i = 0; i < n; i++)
    {
        char a = 'A';
        for (int j = 1; j <= n - i; j++)
        {
            cout << a << " ";
            a++;
        }

        cout << endl;
    }
}

void pattern16(int n)
{
    /*
    A
    B B
    C C C
    D D D D
    E E E E E
    F F F F F F
    */
    cout << "____________Pattern 16______________" << endl;
    
    char a = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
        }
        a++;
        cout << endl;
    }
}

void pattern17(int n)
{
    /*
         A
        ABA
       ABCBA
      ABCDCBA
     ABCDEDCBA
    ABCDEFEDCBA
    */
    cout << "____________Pattern 17______________" << endl;
    
    for (int i = 1; i <= n; i++)
    {
        char a = 'A';
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        if (i == 1)
        {
            cout << "A ";
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                cout << a << " ";
                a++;
            }
            a = a - 1;
            for (int k = 1; k <= i - 1; k++)
            {
                a = a - 1;
                cout << a << " ";
            }
        }

        cout << endl;
    }
}

void pattern18(int n)
{
    /*
    F
    E F
    D E F
    C D E F
    B C D E F
    A B C D E F
    */
    cout << "____________Pattern 18______________" << endl;
    
    char a;
    for (int i = 1; i <= n; i++)
    {
        a = char('A' + n - i);
        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
            a++;
        }

        cout << endl;
    }
}

void pattern19(int n)
{
    /*
    ************
    *****  *****
    ****    ****
    ***      ***
    **        **
    *          *
    *          *
    **        **
    ***      ***
    ****    ****
    *****  *****
    ************
    */
    cout << "____________Pattern 19______________" << endl;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - (i - 1)); j++)
        {
            cout << "* ";
        }
        for (int k = 1; k <= ((i - 1) * 2); k++)
        {
            cout << "  ";
        }
        for (int l = 1; l <= (n - (i - 1)); l++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= (n - (i - 1)); j++)
        {
            cout << "* ";
        }
        for (int k = 1; k <= ((i - 1) * 2); k++)
        {
            cout << "  ";
        }
        for (int l = 1; l <= (n - (i - 1)); l++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern20(int n)
{
    /*
     *          *
     **        **
     ***      ***
     ****    ****
     *****  *****
     ************
     *****  *****
     ****    ****
     ***      ***
     **        **
     *          *
     */
    cout << "____________Pattern 20______________" << endl;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int k = 1; k <= ((2 * n) - (2 * i)); k++)
        {
            cout << "  ";
        }
        for (int l = 1; l <= i; l++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int k = 1; k <= ((2 * n) - (2 * i)); k++)
        {
            cout << "  ";
        }
        for (int l = 1; l <= i; l++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern21(int n)
{
    /*
    ******
    *    *
    *    *
    *    *
    *    *
    ******
    */
    cout << "____________Pattern 21______________" << endl;
    
    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (int j = 1; j <= n - 2; j++)
            {
                cout << "  ";
            }
            cout << "* ";
        }

        cout << endl;
    }
}

void pattern22(int n)
{
    /*
    6 6 6 6 6 6 6 6 6 6 6
    6 5 5 5 5 5 5 5 5 5 6
    6 5 4 4 4 4 4 4 4 5 6
    6 5 4 3 3 3 3 3 4 5 6
    6 5 4 3 2 2 2 3 4 5 6
    6 5 4 3 2 1 2 3 4 5 6
    6 5 4 3 2 2 2 3 4 5 6
    6 5 4 3 3 3 3 3 4 5 6
    6 5 4 4 4 4 4 4 4 5 6
    6 5 5 5 5 5 5 5 5 5 6
    6 6 6 6 6 6 6 6 6 6 6
    */
    cout << "____________Pattern 22______________" << endl;
    
    for (int i = 1; i <= n; i++){
        int toPrint = n;
        for (int j = 1; j <= (i-1); j++){
            cout << toPrint << " ";
            toPrint--;
        }
        

        for (int k = 1; k <= (((n - (i - 1)) * 2)-1); k++){
            cout << toPrint << " ";
        }
        toPrint++;
        for (int l = 1; l <= (i-1); l++){
            cout << toPrint << " ";
            toPrint++;
        }
    cout << endl;
    }

    for (int i = n-1; i >= 1; i--){
        int toPrint = n;
        for (int j = 1; j <= (i-1); j++){
            cout << toPrint << " ";
            toPrint--;
        }
        

        for (int k = 1; k <= (((n - (i - 1)) * 2)-1); k++){
            cout << toPrint << " ";
        }
        toPrint++;
        for (int l = 1; l <= (i-1); l++){
            cout << toPrint << " ";
            toPrint++;
        }
    cout << endl;
    }

}

int main()
{
    int n;
    cin >> n;
    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    // pattern6(n);
    // pattern7(n);
    // pattern8(n);
    // pattern9(n);
    // pattern10(n);
    // pattern11(n);
    // pattern12(n);
    // pattern13(n);
    // pattern14(n);
    // pattern15(n);
    // pattern16(n);
    // pattern17(n);
    // pattern18(n);
    // pattern19(n);
    // pattern20(n);
    // pattern21(n);
    // pattern22(n);
    // return 0;
}