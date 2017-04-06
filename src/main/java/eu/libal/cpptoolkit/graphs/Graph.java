package eu.libal.cpptoolkit.graphs;

import java.util.List;

public class Graph {
    public Graph() {
    }

    public <T> void addVertex(Vertex<T> v) {

    }

    public <T, U> boolean addEdge(Edge<Vertex<T>, Vertex<U>> e) {

    }

    public boolean removeVertex(Vertex<T> v) {

    }

    public <T, U> boolean removeEdge(Edge<Vertex<T>, Vertex<U>> e) {

    }

    public <T, U> boolean adjacent(Vertex<T> v, Vertex<U> w) {

    }

    public <T> List<Vertex> neighbors(Vertex<T> v) {

    }

    public <T> T getVertexValue(Vertex<T> v) {

    }

    public <T> void setVertexValue(Vertex<T> v, T val) {

    }

    public <T, U> Double getEdgeValue(Edge<Vertex<T>, Vertex<U>> e) {
    
    }

    public <T, U> void setEdgeValue(Edge<Vertex<T>, Vertex<U>> e, Double val) {

    }
}
