#include <stdio.h>
#include <unistd.h>
 #include <stdlib.h>
 #include <assert.h>
int main(int argc, char** argv)
{
    int numProcess = getpid();
    printf("%d : début\n",numProcess);
    int rebours;

    // si il existe un second argument
    if(argc >=2) 
    {
        rebours = atoi(argv[1]); // rebours en int
        assert(rebours>0); // vérifier que le rebours est positif
        while(rebours>0)
        {
            printf("%d : %d\n",numProcess,rebours);
            sleep(1);
            rebours--;
        }
    }
    printf("%d : fin\n",numProcess);
    return 0;
}
