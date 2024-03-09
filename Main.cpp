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

void test(){
    string filename = "graph.txt";
    List<Vertex*>* GRAPHEDGES = graphEdges(filename);
    List<Vertex*>* GRAPHEDGES1 = graphEdges(filename);
    GRAPHEDGES->clear();
    cout << "Hello World";
}

//Main function
int main(){

    test();
    cout << "dd";
    cout << "dd";
    cout << "dd";


}