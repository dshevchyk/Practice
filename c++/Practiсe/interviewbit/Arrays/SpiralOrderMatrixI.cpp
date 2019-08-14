//
//  SpiralOrderMatrixI.cpp
//  Practiсe
//
//  Created by Dmytro Shevchyk on 8/14/19.
//  Copyright © 2019 Dmytro Shevchyk. All rights reserved.
//

#include "SpiralOrderMatrixI.hpp"
#include <map>
using std::vector;
using std::map;
enum class Direction {
    Up,
    Down,
    Left,
    Right
};
vector<int> SpiralOrderMatrixI::Solution::spiralOrder(const vector<vector<int> > &A) {
    if (A.empty() || A.front().empty()) return {};
    std::map<Direction, std::pair<int, int>> shift = {
        {Direction::Right, {0, 1}},
        {Direction::Left, {0, -1}},
        {Direction::Down, {1, 0}},
        {Direction::Up, {-1, 0}}
    };
    std::map<Direction, Direction> nextDirection = {
        {Direction::Right, Direction::Down},
        {Direction::Left, Direction::Up},
        {Direction::Down, Direction::Left},
        {Direction::Up, Direction::Right}
    };
    
    auto direction = Direction::Right;
    auto sizeX = A.size();
    auto sizeY = A.front().size();
    auto size = sizeX * sizeY;
    int x = 0;
    int y = 0;
    vector<int> res(size);
    int edgeLeftY = 0;
    auto edgeRightY = sizeY - 1;
    int edgeUpX = 1;
    auto edgeDownX = sizeX - 1;
    
    for (int i = 0; i < size; ++i) {
        res[i] = A[x][y];
        if ((x == edgeUpX && direction == Direction::Up) ||
            (x == edgeDownX && direction == Direction::Down) ||
            (y == edgeRightY && direction == Direction::Right) ||
            (y == edgeLeftY && direction == Direction::Left)) {
            
            if (direction == Direction::Up) {
                edgeUpX++;
            } else if (direction == Direction::Down) {
                edgeDownX--;
            } else if (direction == Direction::Right) {
                edgeRightY--;
            } else {
                edgeLeftY++;
            }
            direction = nextDirection[direction];
        }
        x += shift[direction].first;
        y += shift[direction].second;
    }
    return res;
}
