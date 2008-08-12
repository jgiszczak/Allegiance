/*-------------------------------------------------------------------------
 * \src\Inc\MessageVersion.h
 * 
 * 
 * 
 * Owner: FAZ Dev Team
 */
 
#ifndef _MESSAGEVERSION_ 
#define _MESSAGEVERSION_ 

 
/* this gets incremented for any change to the file. On client startup, we 
   make sure the client version is equal to the server version. Of course,
   at a later date, if we decide to allow the server to support out of date 
   clients, we can leave in the old structure of message(s) and the server can
   use whichever, depending on the version of client connected. Since we have
   one server, and many clients, the server is always up to date by definition.
   ***Also gets incremented for changes to parts.h***
*/
const int MSGVER = 199; // KGJV updated for R5

#endif