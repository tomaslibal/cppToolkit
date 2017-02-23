#pragma once

namespace cpptoolkit {

    template <class ValueType>
    class Vertex {
        private:
            ValueType value;
        public:
            Vertex();
            Vertex(const &ValueType v);
            virtual ~Vertex();
            ValueType getValue();
            void setValue(const &ValueType v);
    }

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
            bool removeVertex();
            bool removeEdge();
            template<class T1, class T2> bool adjacent(T1 v1, T2 v2);
            template<class T> std::vector<Vertex> neighbors(T v);
            template<class T> T getVertexValue();
            void setVertexValue();
            double getEdgeValue(); //weight
            void setEdgeValue(Edge e, double v);


    }
}
