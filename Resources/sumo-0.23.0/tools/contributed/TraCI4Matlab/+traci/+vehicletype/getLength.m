function length = getLength(typeID)
%getLength
%   length = getLength(TYPEID) Returns the length in m of the vehicles of 
%   this type.

%   Copyright 2015 Universidad Nacional de Colombia,
%   Politecnico Jaime Isaza Cadavid.
%   Authors: Andres Acosta, Jairo Espinosa, Jorge Espinosa.
%   $Id: getLength.m 20 2015-03-02 16:52:32Z afacostag $

import traci.constants
length = traci.vehicletype.getUniversal(constants.VAR_LENGTH, typeID);