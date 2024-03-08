#include <iostream>
#include "Vertex.h"
using namespace std;

Vertex::Vertex(int vertexId, string vertexName): vertexNeighbours(){
    this->vertexId = vertexId;
    this->vertexName = vertexName;
}

void Vertex::setId(int vertexId){
    this->vertexId = vertexId;
}

void Vertex::setName(string vertexName){
    this->vertexName = vertexName;
}

void Vertex::addNeighbour(Edge neighbour){
    this->vertexNeighbours.push(neighbour);
}

int Vertex::getId(){
    return this->vertexId;
}

string Vertex::getName(){
    return this->vertexName;
}

PriorityQueue<Edge> Vertex::getNeighbours(){
    return this->vertexNeighbours;
}