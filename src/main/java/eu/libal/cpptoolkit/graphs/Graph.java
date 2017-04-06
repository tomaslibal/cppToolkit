package eu.libal.cpptoolkit.graphs;

import java.util.List;

public class Graph {
    public Graph() {
    }

    public <T> void addVertex(Vertex<T> v) {

    }

    public <T, U> boolean addEdge(Edge<Vertex<T>, Vertex<U>> e) {
        return false;
    }

    public <T> boolean removeVertex(Vertex<T> v) {
        return false;
    }

    public <T, U> boolean removeEdge(Edge<Vertex<T>, Vertex<U>> e) {
        return false;
    }

    public <T, U> boolean adjacent(Vertex<T> v, Vertex<U> w) {
        return false;
    }

    public <T> List<Vertex> neighbors(Vertex<T> v) {
        return null;
    }

    public <T> T getVertexValue(Vertex<T> v) {
        return null;
    }

    public <T> void setVertexValue(Vertex<T> v, T val) {

    }

    public <T, U> Double getEdgeValue(Edge<Vertex<T>, Vertex<U>> e) {
        return Double.NaN;
    }

    public <T, U> void setEdgeValue(Edge<Vertex<T>, Vertex<U>> e, Double val) {

    }
}
