//
// Created by dgalytskyi on 9/30/24.
//

#ifndef RUNNINGROAD_H
#define RUNNINGROAD_H

#include "Obstacle.h"

namespace Exam {

class RunningRoad final : public Obstacle {
public:
    explicit RunningRoad(const double length) : Obstacle("RunningRoad", length) {
    }
};

} // Exam

#endif //RUNNINGROAD_H
