#pragma once

namespace cpptoolkit {

    template <class ValueType>
    class Vertex {
        private:
            ValueType value;
        public:
            Vertex();
            virtual ~Vertex();
            ValueType getValue();
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

}
