#include <iomanip>

void swap(int &a, int &b)
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

void bubblesort(int *a,int N)
{
    int i, j;
    int sorted;
    for(j = N-1; j > 0; j--)
    {
        sorted = 0;
        for(i = 0; i < j; i++)
            {
            // For ascending order
            if(a[i] > a[i + 1])
            {
                swap(a[i], a[i + 1]);
                sorted = 1;
            }
        }
        if(sorted == 0)
        {
            break;
        }
        cout<<endl;
        display(a, N);
    }
}

void selectionsort(int *a, int N)
{
    int min = a[0], mi = 0, i, j;
    for(j = 0; j < N-1; j++)
    {
        min = a[j];
        mi = j;
        for(i = j+1; i < N; i++)
        {
            if(min > a[i])
            {
                min = a[i];
                mi = i;
            }
        }
    swap(a[j], a[mi]);
    }
    
}

