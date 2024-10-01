//
// Created by dgalytskyi on 9/30/24.
//

#ifndef OBSTACLE_H
#define OBSTACLE_H

#include <iostream>

using namespace std;

namespace Exam {

class Obstacle {
protected:
    string name;
    double size;

    Obstacle(string name, const double size) : name(std::move(name)), size(size) {}

public:
    [[nodiscard]] const string& getName() const {
        return name;
    }

    [[nodiscard]] double getSize() const {
        return size;
    }
};

} // Exam

#endif //OBSTACLE_H
