#include "Graph.h"


Graph::Graph(): graph(){}

void Graph::setGraph(string file) {
    List<Vertex*>* newGraph = graphEdges(file);
    for(int i = 0; i < newGraph->size(); i++){
        this->graph.addBack(*newGraph->getElById(i));
    }
    delete newGraph;

}

void Graph::print() {
 "todo";
}



