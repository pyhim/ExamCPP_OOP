//
// Created by dgalytskyi on 9/30/24.
//

#ifndef PARTICIPANT_H
#define PARTICIPANT_H

#include <iostream>
#include "Obstacle.h"

using namespace std;

namespace Exam {

class AbstractParticipant {
protected:
    string name;
    double sprintLimit;
    double jumpLimit;

    AbstractParticipant(string name, double sprintLimit, double jumpLimit);

    [[nodiscard]] bool jump(const Obstacle& o) const;

    [[nodiscard]] bool sprint(const Obstacle& o) const;

public:
    [[nodiscard]] bool overcomeObstacle(const Obstacle& o) const;

    [[nodiscard]] const string& getName() const;

    virtual ~AbstractParticipant() = default;
};

} // Exam

#endif //PARTICIPANT_H
