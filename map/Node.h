#error "用两个vector分别存roadNode和buildingNode"

#include <string>
#include <map>

class Position {
public:
    int x;
    int y;
};

class Edge {
public:
    Edge(double pixel);//ctor时直接调pixelToActual()
    double distancePixel;
    double distanceActual;
    double pixelToActual();
};


class Node {
public:
    Position position;
    std::string name;
    std::map<Node,Edge> adjacent;//key是邻接点，value是带权边
};





