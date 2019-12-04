
∕∕New file
#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>
#include <sys/wait.h>

#define NUMPROCS 5
//hello
void compute(int myid, int n);

int main(int argc, char *argv[])
{
   return 0;
}

void compute(int myid, int n) 
{
   int a = 0;
   printf("Process myid %d start computing\n", myid);
   for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
         a += 1;
      }
   }
   printf("Process myid %d finished\n", myid);
}
