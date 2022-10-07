#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

string addition(string a, string b)
{
    int i;
    int c;
    int y;

    string z = "";
    string x;

    if(a.length() > b.length())
    {
        y = a.length() - b.length();
        for(i = 0; i < y; i++)
        {
            b = '0' + b;
        }
    }
    else
    {
        y = b.length() - a.length();
        for(i = 0; i < y; i++)
        {
            a = '0' + a;
        }
    }

    c = 0;
    for(i = a.length()-1; i >= 0; i--)
    {
        x = to_string((a[i] - '0') + (b[i] - '0') + c);
        c = 0;
        if(x.length() > 1 && i != 0)
        {
            c = x[0] - '0';
            z = x[1] + z;
        }
        else
        {
            z = x + z;
        }
    }

    return z;
}

string subtraction(string a, string b)
{
    int i;
    int j;
    int y;
    int c;

    string z = "";
    string x;

    if(a.length() > b.length())
    {
        y = a.length() - b.length();
        for(i = 0; i < y; i++)
        {
            b = '0' + b;
        }
    }
    else
    {
        y = b.length() - a.length();
        for(i = 0; i < y; i++)
        {
            a = '0' + a;
        }
    }

    for(i = a.length()-1; i >= 0; i--)
    {
        x = to_string((a[i] - '0') - (b[i] - '0'));

        int t;

        t = (a[i] - '0') - (b[i] - '0');

        if(t < 0)
        {
            j = i - 1;
            while(1)
            {
                c = (a[j] - '0') - 1;
                if(c < 0)
                {
                    a[j] = '9';
                    j--;
                }
                else
                {
                    c = (a[j] - '0') - 1;
                    a[j] = '0' + c;
                    break;
                }
            }
            c = (a[i] - '0') + 10;
            x = to_string(c - (b[i] - '0'));
        }

        z = x + z;
    }

    return z;
}

string mul_pow(string s, int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        s = s + '0';
    }

    return s;
}

string karatsuba(string a, string b)
{
    int n;
    int x;
    int i;

    string al;
    string ar;
    string bl;
    string br;
    string p1;
    string p2;
    string p3;

    if(a.length() > b.length())
    {
        x = a.length() - b.length();
        for(i = 0; i < x; i++)
        {
            b = '0' + b;
        }
    }
    else
    {
        x = b.length() - a.length();
        for(i = 0; i < x; i++)
        {
            a = '0' + a;
        }
    }

    n = a.length();

    if(n == 1)
    {
        int x;
        x = stoi(a) * stoi(b);
        return to_string(x);
    }
    else
    {
        x = 0;
        while(1)
        {
            if(pow(2,(x+1)) >= a.length())
            {
                x++;
                break;
            }
            x++;
        }

        while((pow(2,x) - a.length()) > 0)
        {
            a = '0' + a;
            b = '0' + b;
        }

        n = a.length();

        al = a.substr(0,(n/2));
        ar = a.substr(n/2);
        bl = b.substr(0,(n/2));
        br = b.substr(n/2);

        p1 = karatsuba(al,bl);
        p2 = karatsuba(ar,br);
        p3 = karatsuba(addition(al,ar),addition(bl,br));

        string i;
        string j;
        string k;

        i = mul_pow(p1,n);
        j = p2;
        k = mul_pow(subtraction(p3,addition(p1,p2)),n/2);
        return addition(addition(i,k),j);
    }

    return "";
}

int main()
{
    int x;
    int i;

    string a;
    string b;
    string c;

    cout << "ENTER NUMBER 1 : ";
    cin >> a;

    cout << endl;

    cout << "ENTER NUMBER 2 : ";
    cin >> b;

    cout << endl;

    if(a.length() > b.length())
    {
        x = a.length() - b.length();
        for(i = 0; i < x; i++)
        {
            b = '0' + b;
        }
    }
    else
    {
        x = b.length() - a.length();
        for(i = 0; i < x; i++)
        {
            a = '0' + a;
        }
    }

    x = 0;
    while(1)
    {
        if(pow(2,(x+1)) >= a.length())
        {
            x++;
            break;
        }
        x++;
    }

    while((pow(2,x) - a.length()) > 0)
    {
        a = '0' + a;
        b = '0' + b;
    }

    cout << "KARATSUBA ALGORITHM" << endl << endl;
    c = karatsuba(a,b);

    for(i = 0; i < c.length(); i++)
    {
        if(c[i] != '0')
        {
            break;
        }
    }

    c = c.substr(i);

    cout << c << endl;
}
