#include <stdlib.h>
#include <time.h>

int main()
{
    int random[3][3];
    int i, o;

    srand(time(NULL));
    for(o = 0; o<3; o++)
        for(i = 0; i<3; i++)
            random[o][i] = rand()% 100000;
	
	
		
    return 0;
}
