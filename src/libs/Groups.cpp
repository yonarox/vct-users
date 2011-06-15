/*
 * Groups.cpp
 *
 *  Created on: Jun 2, 2011
 *      Author: yonarox
 */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "headers/Groups.h"

#define GROUP_FILE "/etc/group";


bool Groups::addGroup(group*grp){
	return true;
};

bool Groups::deleteGroup(group*grp){
	return true;
};

group** Groups::listGroups(){
	printf("Listing groups...");
	return 0;
};

group** Groups::userGroups(char*){
	return 0;
}

bool Groups::renameGroup(group*oldgrp,group*newgrp){
	return true;
}

group* Groups::createGroup(char*name,gint gid){
	group*grp;
	grp=(group*)malloc(sizeof(group));
	grp->name=(char*)malloc(sizeof(name)*sizeof(char));
	strcpy(grp->name,name);
	grp->gid=gid;

	return grp;
};
