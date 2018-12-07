#pragma once

#include <vector>

namespace cpptoolkit {

    template <class T>
    class Vertex {
        private:
            T value;
        public:
            Vertex();
            Vertex(T const& v);
            virtual ~Vertex();
            T getValue();
            void setValue(T const& v);
    };

    template<class T1, class T2>
    class Edge {
        private:
            T1 from;
            T2 to;
        public:
            Edge(T1 const& from, T2 const& to);
            virtual ~Edge();
    };

    class Graph {
        private:

        public:
            Graph();
            virtual ~Graph();
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

    };
}
