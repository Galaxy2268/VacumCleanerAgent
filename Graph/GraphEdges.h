#include <iostream>
#include "fileReader.h"
#include "Vertex.h"
#include "Edge.h"
#include "../PriorityQueue/PriorityQueue.h"

List<Vertex> graphEdges(string filename){

    fileReader(filename);
    List<Vertex>vertexes = fileReader(filename).getFirst();
    List<Edge> edges = fileReader(filename).getSecond();


    List<Vertex> graphEdges;


for (int i = 0; i < vertexes.size(); i++) {
    Vertex& vertex = vertexes.getReferenceById(i);
    PriorityQueue<Edge> vertexNeighbours;
    for (int j = 0; j < edges.size(); j++) {
        Edge& edge = edges.getReferenceById(j);
        if (edge.getSource() ==  vertex.getId()) {
            Edge neighbour(edge.getDestination(), edge.getCost());
            vertexNeighbours.push(neighbour);
        }
    }

    Vertex graphVertex(vertex.getId(), vertexNeighbours);
    graphEdges.addBack(graphVertex);
}

    return graphEdges;

}