// #include "graph.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct GraphRep
{
    int **edges;  // adjacency matrix
    int nV;       // #vertices
    int nE;       // #edges
} GraphRep;

typedef struct GraphRep *Graph;

// vertices are ints
typedef int Vertex;

// edges are pairs of vertices (end-points)
typedef struct Edge
{
    Vertex v;
    Vertex w;
} Edge;


Graph newGraph(int V)
{
    int i;

    Graph g = malloc(sizeof(GraphRep));
    g->nV = V;
    g->nE = 0;

    // allocate memory for each row
    g->edges = malloc(V * sizeof(int *));
    // allocate memory for each column and initialise with 0
    for (i = 0; i < V; i++)
    {
        g->edges[i] = calloc(V, sizeof(int));
    }

    return g;
}

void insertEdge(Graph g, Edge e)
{

    if (!g->edges[e.v][e.w])
    {  // edge e not in graph
        g->edges[e.v][e.w] = 1;
        g->edges[e.w][e.v] = 1;
        g->nE++;
    }
}

void removeEdge(Graph g, Edge e)
{

    if (g->edges[e.v][e.w])
    {  // edge e in graph
        g->edges[e.v][e.w] = 0;
        g->edges[e.w][e.v] = 0;
        g->nE--;
    }
}

void printAdjMatrix(Graph g) {
  int i, j;

    printf("Adjacency matrix\n");
  for (i = 0; i < g->nV; i++) {
    printf("%d: ", i);
    for (j = 0; j < g->nV; j++) {
      printf("%d ", g->edges[i][j]);
    }
    printf("\n");
  }
}

int main() {

    Graph demo = newGraph(4);

    Edge e1;
    e1.v = 0;
    e1.w = 1;

    Edge e2;
    e2.v = 0;
    e2.w = 2;

    Edge e3;
    e3.v = 1;
    e3.w = 2;
    
    Edge e4;
    e4.v = 2;
    e4.w = 3;
    
    insertEdge(demo, e1);
    insertEdge(demo, e2);
    insertEdge(demo, e3);
    insertEdge(demo, e4);

    printf("\n");
    printAdjMatrix(demo);
}