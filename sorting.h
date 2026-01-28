#include <iomanip>

void swap(int &a,int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void display(int a[],int N)
{
    for(int i = 0; i < N; i++)
    {
        cout<<" "<<a[i];
        
    }
    cout<<endl;
}

void sort(int *a,int N)
{
    int i, j;
    for(j = 0; j < N-1; j++)
    {
        for(i = 0; i < N-1-j; i++)
            {
            // For ascending order
            if(a[i] > a[i + 1])
            {
                swap(a[i], a[i + 1]);
            }
        }
        display(a, N);
    }
}



