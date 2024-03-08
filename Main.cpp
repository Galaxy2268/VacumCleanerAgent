#include <iostream>
#include <string>
#include "Vector/Vector.h"
#include "List/List.h"
#include "Pair/Pair.h"
#include "PriorityQueue/PriorityQueue.h"
#include "Map/Map.h"
#include "List/ListEl.h"
#include "Graph/Edge.h"
#include "Graph/Vertex.h"
#include "Graph/GraphEdges.h"

using namespace std;

//Main function
int main(){

    string filename = "graph.txt";
    List<Vertex> GRAPHEDGES = graphEdges(filename);
    cout << "Hello World";

}