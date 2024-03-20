#ifndef VACUMCLEANERAGENT_GRAPH_H
#define VACUMCLEANERAGENT_GRAPH_H
#include "../List/List.h"
#include "Vertex.h"
#include "../FileReading/GraphEdges.h"


class Graph {
private:
    List<Vertex> graph;

public:
    Graph();

    void setGraph(string file);

    void print();

    void printPath(int start, int end);
};


#include "Graph.cpp"
#endif //VACUMCLEANERAGENT_GRAPH_H
