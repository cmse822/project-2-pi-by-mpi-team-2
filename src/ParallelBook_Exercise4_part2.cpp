#include <iostream>
#include <fstream>
#include <string>
#include "mpi.h"

using namespace std;

int main(int argc, char *argv[]) 
{
    int numtasks;
    int rank;
    
    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &numtasks);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    // Open a file and write the content and close it.
    ofstream myfile;
    string filename = "Exercise4_part2_" + to_string(rank) + ".txt";
    myfile.open(filename);
    myfile << "Hello from process " << rank << " out of " << numtasks << endl;
    myfile.close();

    MPI_Finalize();
    
    return 0;
}