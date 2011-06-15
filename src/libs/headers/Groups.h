/*
 * Groups.h
 *
 *  Created on: Jun 2, 2011
 *      Author: yonarox
 */

#include <glib.h>

#ifndef GROUPS_H_
#define GROUPS_H_

typedef struct {
	gchar*name;
	gint gid;
} group;

class Groups {
public:
	bool addGroup(group*);
	bool deleteGroup(group*);
	bool renameGroup(group*,group*);
	group** listGroups();
	group** userGroups(gchar*);
	group* createGroup(gchar*,gint);
};

#endif /* GROUPS_H_ */
