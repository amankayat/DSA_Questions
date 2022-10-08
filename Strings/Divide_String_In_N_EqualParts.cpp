//Divide a String into N Equal Parts

#include <iostream>
#include <string.h>
 
using namespace std;

class StringDivide {
 
    // Function to print String into n equal parts
public:
    void divideString(char str[], int n)
    {
 
        int str_size = strlen(str);
        int i;
        int part_size;
 
        // Check if string can be divided in n equal parts

        if (str_size % n != 0) {
            cout << "Invalid Input: String size";
            cout << " is not divisible by n";
            return;
        }
 
        // Calculate the size of parts to find the division points
        part_size = str_size / n;
        for (i = 0; i < str_size; i++) {
            if (i % part_size == 0)
                cout << endl;
            cout << str[i];
        }
    }
};
 
// Driver code
int main()
{
    StringDivide str;
 
    // length of string is...
    char str1[1000];
    cin.getline(str1,1000);
    cout<<"\n";
 
    // Print n equal parts of the string
    int N;
    cout<<"Enter N for string to get Divided";
    cin>>N;
    cout<<"Divided string is : \n";
    str.divideString(str1, N);
    return 0;
}