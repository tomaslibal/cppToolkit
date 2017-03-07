#include "kruskal.h"


std::vector<cpptoolkit::Edge> cpptoolkit::kruskal(std::vector<cpptoolkit::Vertex> v, std::vector<cpptoolkit::Edge> e)
{
    std::vector<cpptoolkit::Edge> mst;

    for (auto vert : v) {
        // make set vert
    }
    // sort edges by weight ASC
    for (auto edge : e) {
        if (findSet(edge.a) == findSet(edge.b)) {
            // mst.add(edge)
            // union a,b
        }
    }
    return mst
}
