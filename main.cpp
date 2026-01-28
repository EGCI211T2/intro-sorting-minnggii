//
//  main.cpp
//  First arg
//
//  Created by Mingmanas Sivaraksa on 2/1/2567 BE.
//

#include <iostream>
using namespace std;
#include "sorting.h"

int main(int argc, char * argv[]) {
 
  cout<<"argc is "<<argc<<endl;
    int i,N;
    int *a;
    a = new int[N];
    for(i=1;i<argc;i++){
        a[i-1] = atoi(argv[i]);
        cout<<"argv[" << i<<"]" <<argv[i]<<endl;
      
    }
    /* Convert to numbers*/
    
    N=argc-1;
    cout<<"Before sorting:";
    display(a,N);
    
    /*selectionsort(a,N);
    cout<<"After bubble sort:";
    display(a,N);*/

    selectionsort(a,N);
    cout<<"After selection sort:";
    display(a,N);
    
    delete []a;
    return 0;
}
