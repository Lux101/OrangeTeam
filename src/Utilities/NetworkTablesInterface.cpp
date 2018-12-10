/*
 * NetworkTablesInterface.cpp
 *
 *  Created on: Nov 3, 2018
 *      Author: junya
 */

#include <Utilities/NetworkTablesInterface.h>
#include "NetworkTablesInterface.h"
#include "NetworkTables/NetworkTableInstance.h"


bool NetworkTablesInterface::gethi(){
	return nt::NetworkTableInstance::GetDefault().GetEntry("Entry Key").GetBoolean(false);
}
