/******************************************************************************

GHAAS Database library V2.1
Global Hydrologic Archive and Analysis System
Copyright 1994-2015, UNH - CCNY/CUNY

DBPause.C

bfekete@ccny.cuny.edu

*******************************************************************************/

#include <DB.H>

static int (*_DBPauseFunction) (int) = NULL;

void DBPauseSetFunction (int (*pauseFunc) (int)) { _DBPauseFunction = pauseFunc; }

int DBPause (int perCent)

	{
	if (_DBPauseFunction == NULL) return (false);
	else return ((*_DBPauseFunction) (perCent)); 
	}
