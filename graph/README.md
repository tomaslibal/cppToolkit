# Graphs

A graph is an object consisting of:

- non empty vertex set
- possibly an empty edge set or unordered pairs of vertices

## Basic graph operations

```c++
template<class T> void addVertex(T v);
template<class T1, class T2> bool addEge(Edge<T1, T2> e);
template<class T> bool removeVertex(T v);
template<class T1, class T2> bool removeEdge(Edge<T1, T2> e);
template<class T1, class T2> bool adjacent(T1 v1, T2 v2);
template<class T> std::vector<T> neighbors(T v);
template<class T> T getVertexValue(Vertex<T> v);
template<class T> void setVertexValue(Vertex<T> v, T val);
template<class T1, class T2> double getEdgeValue(Edge<T1, T2> e); //weight
template<class T1, class T2> void setEdgeValue(Edge<T1, T2> e, double v);
```
