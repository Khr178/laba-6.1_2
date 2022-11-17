
#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;
int main()
{
}
void mas(int*b, int arr[], const int size, const int min, const int max)
{
    
    for (int i = 0; i < size; i++) 
    {
        int range = max - min + 1;
        arr[i] = rand() % range + min;
    }
}
void print_array(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        std::cout << arr[i] << std::setw(4);
    }
    std::cout << std::endl;
}

bool is_valid(int n) 
{
    if ((n % 2 == 0) && (n < 0)) 
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int count_quantity(int arr[], int size) {
    int quantity = 0;

    for (int i = 0; i < size; i++) {
        if (is_valid(arr[i])) {
            ++quantity;
        }
    }
    return quantity;
}

int sum(int arr[], const int size) 
{
    int sum = 0;

    for (int i = 0; i < size; i++) 
    {
        if (is_valid(arr[i])) 
        {
            sum += arr[i];
        }
    }
    return sum;
}

void mas2(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        if (is_valid(arr[i])) 
        {
            arr[i] = 0;
        }
    }
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
