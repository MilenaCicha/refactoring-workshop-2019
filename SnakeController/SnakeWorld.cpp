#include "SnakeWorld.hpp"

namespace Snake
{

World::World(Dimension dimension, Position position)
    : m_foodPosition(position),
      m_dimension(dimension)
{}

void World::setFoodPosition(Position position)
{
    m_foodPosition = position;
}

Position World::getFoodPosition() const
{
    return m_foodPosition;
}

bool World::contains(int x, int y) const
{
    return x >= 0 and x < m_dimension.first and y >= 0 and y < m_dimension.second;
}

} // namespace Snake
