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

    class Edge {
        public:
            Edge();
            virtual ~Edge();
    }

}
