#include <iostream>
#include "mpi.h"

using namespace std;

int main(int argc, char *argv[]) 
{
    int numtasks;
    int rank;
    int name_length = MPI_MAX_PROCESSOR_NAME;
    char proc_name[name_length];
    
    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &numtasks);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    MPI_Get_processor_name(proc_name, &name_length);

    cout << proc_name << endl;
    
    MPI_Finalize();
    
    return 0;
}