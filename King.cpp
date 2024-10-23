#include "King.h"
#include <cstdlib>

King::King(Color color,int x, int y) : Pieces{color, x, y} {}

QVector<std::pair<int,int>> King::canMove() const  {
    int x = Pieces::getCoordinates().first, y = Pieces::getCoordinates().second;
    QVector<std::pair<int,int>> v;


    return v;
}
