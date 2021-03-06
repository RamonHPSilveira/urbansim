/*
 * Copyright (C) 2012  Pitch Technologies
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <iostream>

#include "RunningState.h"
#include "NoScenarioState.h"
#include "ScenarioLoadedState.h"
#include "Controller.h"

using namespace std;

RunningState::RunningState() 
{
    /* void */
}

void RunningState::enable(Controller* controller)
{
    (controller->_simulator)->setSimulating(true);
    controller->printStartSimulating();
}

void RunningState::stop(Controller* controller)
{
    (controller->_simulator)->setSimulating(false);
    controller->printStopSimulating();
    changeState(controller, StatePtr(new ScenarioLoadedState()));
}


void RunningState::loadScenario(const wstring& scenario, double initialFuelLevel, Controller* controller)
{
    cerr << "RunningState: Load scenario not allowed while running simulation" << endl;
}

void RunningState::quit(Controller* controller)
{
    (controller->_simulator)->setSimulating(false);
    changeState(controller, StatePtr(new ScenarioLoadedState()));
}

