#include <iostream>
#include "mpi.h"
using namespace std;

int main() 
{
    MPI_Init();
    cout << "Hello, World!" << endl;
    MPI_Finalize();
    return 0;
}