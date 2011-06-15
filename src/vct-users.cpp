//============================================================================
// Name        : vct-users.cpp
// Author      : yonarox
// Version     :
// Copyright   : GPL v2
// Description :
//============================================================================

#include <glib.h>
#include <stdio.h>

#include "libs/headers/Groups.h"
#include "libs/headers/Users.h"

int main() {
	Groups *grps=new Groups();
	group*g=grps->createGroup("admin",10);
	return 0;
}
