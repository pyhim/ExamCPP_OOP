//
// Created by dgalytskyi on 9/30/24.
//

#include "examTest.h"

#include <array>
#include <algorithm>
#include <format>
#include <iostream>

#include "../src/headers/AbstractParticipant.h"
#include "../src/headers/Cat.h"
#include "../src/headers/Human.h"
#include "../src/headers/Robot.h"
#include "../src/headers/Obstacle.h"
#include "../src/headers/RunningRoad.h"
#include "../src/headers/Wall.h"

using namespace std;

namespace Exam {
    void examTest() {
        const array<AbstractParticipant*, 6> participants{
            new Cat(), new Human(), new Robot(),
            new Cat(), new Human(), new Robot()
        };
        const array<Obstacle*, 8> obstacles{
            new Wall(1.3), new Wall(5.3), new RunningRoad(5.4),
            new Wall(4.3), new Wall(5.3), new RunningRoad(5.4),
            new Wall(9.3), new RunningRoad(5.4)
        };

        for (const auto participant : participants) {
            size_t i = 0;
            for (const auto obstacle : obstacles) {
                if (participant->overcomeObstacle(*obstacle)) {
                    cout << format(
                        "Participant[{}] has overcome the obstacle[{}] on the distance of the [{}]",
                        participant->getName(), obstacle->getName(), i
                    ) << '\n';
                    i++;
                    continue;
                }

                cout << format(
                    "Participant[{}] stopped at the obstacle[{}] on the distance of the [{}]",
                    participant->getName(), obstacle->getName(), i
                ) << '\n';
                break;
            }
            cout << "Next contestant!" << endl;
        }

        ranges::for_each(participants, [](const AbstractParticipant* p) {delete p;});
        ranges::for_each(obstacles, [](const Obstacle* o) {delete o;});
    }
} // Exam
