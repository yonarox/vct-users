/*
 * Users.h
 *
 *  Created on: Jun 2, 2011
 *      Author: yonarox
 */

#ifndef USERS_H_
#define USERS_H_

typedef struct  {
	char*name;
	char*fullname;
	char*home;
	int uid;
	char*skel;
	char*shell;
	bool log;			// for logging lastlog and faillog
	bool ch;			// create home
	group**groups;
} user;

class Users {
public:
	Users();
	bool addUser(user*);
	bool deleteUser(user*);
	bool renameUser(user*);
};

#endif /* USERS_H_ */
