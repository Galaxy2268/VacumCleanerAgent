#include <iostream>
#include "fileReader.h"
#include "Vertex.h"
#include "Edge.h"
#include "../PriorityQueue/PriorityQueue.h"
#include "../List/List.h"

List<Vertex*>* graphEdges(string filename){

    Pair<List<Vertex*>*, List<Edge*>*> pair = fileReader(filename);

    List<Vertex*>* vertexes = pair.getFirst();
    List<Edge*>* edges = pair.getSecond();

    int j = 0;
    for (int i = 0; i < edges->size(); i++) {
        if (edges->getElById(i)->getSource() != vertexes->getElById(j)->getId()) {
            j++;
        }
        vertexes->getElById(j)->addNeighbour(*edges->getElById(i));
    }
    return vertexes;

}