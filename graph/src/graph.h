#pragma once

namespace cpptoolkit {

    template <class T>
    class Vertex {
        private:
            T value;
        public:
            Vertex();
            Vertex(const &ValueType v);
            virtual ~Vertex();
            T getValue();
            void setValue(const &ValueType v);
    };

    template<class T1, class T2>
    class Edge {
        private:
            T1 from;
            T2 to;
        public:
            Edge(const &T1 from, const &T2 to);
            virtual ~Edge();
    }

    class Graph {
        private:

        public:
            Graph();
            virtual ~Graph();
            template<class T> addVertex(T v);
            bool addEge(Edge e);
            template<class T> bool removeVertex(T v);
            bool removeEdge(Edge e);
            template<class T1, class T2> bool adjacent(T1 v1, T2 v2);
            template<class T> std::vector<T> neighbors(T v);
            template<class T> T getVertexValue(Vertex<T> v);
            template<class T> void setVertexValue(Vertex<T> v, T val);
            double getEdgeValue(Edge e); //weight
            void setEdgeValue(Edge e, double v);


    }
}
