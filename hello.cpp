#include "mpi.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
    int numtasks, rank;  // it is important to initialize variables in the main function
    MPI_Init(&argc, &argv);  // ensure that the argc and argv are declared also in the main fuction
    
    MPI_Comm_size(MPI_COMM_WORLD, &numtasks);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    if (rank == numtasks-1){
        cout << "Hello, World!" << endl;
    }
    MPI_Finalize();
    return 0;
}