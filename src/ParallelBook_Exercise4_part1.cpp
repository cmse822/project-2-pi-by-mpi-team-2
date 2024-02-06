#include <iostream>
#include "mpi.h"

using namespace std;

int main(int argc, char *argv[]) 
{
    int numtasks;
    int rank;
    
    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &numtasks);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    cout << "Hello from process " << rank << " out of " << numtasks << endl;
    
    MPI_Finalize();
    
    return 0;
}