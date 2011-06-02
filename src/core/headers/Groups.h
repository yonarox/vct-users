/*
 * Groups.h
 *
 *  Created on: Jun 2, 2011
 *      Author: yonarox
 */

#include "Users.h";

#ifndef GROUPS_H_
#define GROUPS_H_

typedef struct {
	char*name;
	int gid;
} group;

class Groups {
public:
	Groups();
	bool addGroup(group*);
	bool deleteGroup(group*);
	bool renameGroup(group*,group*);
	group** listGroups();
	group** userGroups(user*);
	group* createGroup(char*,int);
};

#endif /* GROUPS_H_ */
