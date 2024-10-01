//
// Created by dgalytskyi on 9/30/24.
//

#ifndef WALL_H
#define WALL_H

#include "Obstacle.h"

namespace Exam {

class Wall final : public Obstacle {
public:
    explicit Wall(const double height) : Obstacle("Wall", height) {
    }
};

} // Exam

#endif //WALL_H
