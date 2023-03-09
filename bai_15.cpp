#include <iostream>
#include <math.h>

using namespace std;

int main()
{
// vi du 1:
    cout << 1 << endl;
    cout << 2 << endl;
    cout << 3 << endl;
    cout << 4 << endl;
    cout << 5 << endl;
    cout << 6 << endl;

// vi du 2:
    for(int i = 1; i <= 7; i++)
    {
        cout << i << endl;
    }
    cout << "ket thuc vong lap";
// vi du 3:
    int i = 1;
    while(i<= 7)
    {
        cout << i << endl;
        i++;
    }
// vi du 4:
    int i = 8;
    do {
        cout << i << endl;
        i++;
    }   while ( i <= 7);

// vi du 5: in ra cac so le tu 1 -> 9

// su dung ham for
    for(int i = 1; i <= 9; i = i + 2)
    {
        cout << i << endl;
    }
    cout << "ket thuc vong lap";
// su dung ham while
    int i = 1;
    while (i <= 9)
    {
        cout << i << endl;
        i += 2;
    }

return 0;
}


// bai tap vong lap

#include <iostream>
#include <math.h>

using namespace std;

// bai 1

int main()
{
    int n;
    int S = 0;

    cout << "n = ";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        S = S + i;
    }
    cout << "S = " << S;
}

// bai 2

int main() 
{
    int n;
    int S = 0;

    cout << "n = ";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        S = S + pow(i , 2);
    }
    cout << "S = " << S;
}

// bai 3

int main()
{
    int n;

    cout << "n = ";
    cin >> n;

    unsigned long long a = 1;
    
    for(int i = 1; i <= n; i ++)
    {
        a = a * i;
    }
    cout << "n! = " << a;
}

// bai 4

int main()
{
    int n;

    cout << "n = ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        if(i % 5 == 0){
            cout << i << " ";
        }
    }
}