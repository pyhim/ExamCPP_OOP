//
// Created by dgalytskyi on 9/30/24.
//

#ifndef ROBOT_H
#define ROBOT_H

#include "AbstractParticipant.h"

namespace Exam {

class Robot final : public AbstractParticipant {
public:
    Robot() : AbstractParticipant("Robot", 13.0, 3.5) {
    }
};

} // Exam

#endif //ROBOT_H
