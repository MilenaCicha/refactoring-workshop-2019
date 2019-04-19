#pragma once

#include <utility>
#include "SnakePosition.hpp"

namespace Snake
{
    struct Dimension{
        int width;
        int height;

    };

class World
{
public:
    World(Dimension dimension, Position position);

    void setFoodPosition( Position position);
    Position getFoodPosition() const;

    bool contains(int x, int y) const;

private:
    Position m_foodPosition;
    Dimension m_dimension;


};

} // namespace Snake
