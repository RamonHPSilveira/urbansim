function setSpeedDeviation(typeID, deviation)
%setSpeedDeviation
%   setSpeedDeviation(TYPEID,DEVIATION) Sets the maximum speed deviation of
%   vehicles of this type.

%   Copyright 2015 Universidad Nacional de Colombia,
%   Politecnico Jaime Isaza Cadavid.
%   Authors: Andres Acosta, Jairo Espinosa, Jorge Espinosa.
%   $Id: setSpeedDeviation.m 20 2015-03-02 16:52:32Z afacostag $

import traci.constants
traci.sendDoubleCmd(constants.CMD_SET_VEHICLETYPE_VARIABLE, constants.VAR_SPEED_DEVIATION, typeID, deviation);