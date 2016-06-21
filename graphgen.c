/* 
 * This file defines some graph structures 
 * and a random graph generator 
*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "graph.h"
#include "graph.c"

/*
	D is the degree for every vertex
	V is the total number of vertices
	generate a random graph with V vertices, and every vertex has exact degree of D
*/

int main(){
  FILE *output = fopen("test1.txt","w");
	Graph *G ;
	G = gen(4,10000);
	pg(G,output);
	free_graph(G);
	fclose(output);
	return 0 ;
}
