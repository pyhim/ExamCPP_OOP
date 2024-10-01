//
// Created by dgalytskyi on 9/30/24.
//

#ifndef CAT_H
#define CAT_H

#include "AbstractParticipant.h"

namespace Exam {

class Cat final : public AbstractParticipant {
public:
    Cat() : AbstractParticipant("Cat", 20.0, 8.5) {
    }
};

} // Exam

#endif //CAT_H
