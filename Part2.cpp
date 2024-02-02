#include <iostream>
#include "mpi.h"

using namespace std;

int main(int argc, char *argv[]) 
{
    int numtasks;
    int rank;
    
    cout << "Text before Initializing MPI" << endl;


    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &numtasks);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    
    cout << "Text between MPI structure!" << " Performed on rank#:" << rank << endl;
    
    MPI_Finalize();

    cout << "Text After Finalizing MPI" << endl;
    
    return 0;
}