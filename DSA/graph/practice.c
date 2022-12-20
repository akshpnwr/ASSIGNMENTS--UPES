#include<stdio.h>
typedef int Vertex;

typedef struct Edge
{
    /* data */
    Vertex w;
    Vertex e;
    int e;
}Edge;


int main() {

Edge e;
e.e = 'a';

printf("%d",e.e);
printf("\n%d",e.w);

return 0;
}
