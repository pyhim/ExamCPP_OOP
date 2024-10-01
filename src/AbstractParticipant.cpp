//
// Created by dgalytskyi on 9/30/24.
//

#include "headers/AbstractParticipant.h"

namespace Exam {
    AbstractParticipant::AbstractParticipant(string name, const double sprintLimit, const double jumpLimit) :
        name(std::move(name)), sprintLimit(sprintLimit), jumpLimit(jumpLimit) {
    }

    const string& AbstractParticipant::getName() const {
        return name;
    }

    bool AbstractParticipant::jump(const Obstacle& o) const {
        if (o.getSize() > this->jumpLimit) return false;

        cout << "Jumping!" << endl;
        return true;
    }

    bool AbstractParticipant::sprint(const Obstacle& o) const {
        if (o.getSize() > this->sprintLimit) return false;

        cout << "Sprinting!" << endl;
        return true;
    }

    bool AbstractParticipant::overcomeObstacle(const Obstacle& o) const {
        if (o.getName() == "Wall")
            return this->jump(o);
        if (o.getName() == "RunningRoad")
            return this->sprint(o);

        cerr << "ERROR: Unknown obstacle type: " << o.getName() << endl;
        return false;
    }
} // Exam
