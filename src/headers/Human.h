//
// Created by dgalytskyi on 9/30/24.
//

#ifndef HUMAN_H
#define HUMAN_H

#include "AbstractParticipant.h"

namespace Exam {

class Human final : public AbstractParticipant {
public:
    Human() : AbstractParticipant("Human", 25.6, 4.5) {
    }
};

} // Exam

#endif //HUMAN_H
