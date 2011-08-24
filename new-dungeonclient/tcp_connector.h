/*
 * tcp_connector.h
 *
 *  Created on: Aug 22, 2011
 *      Author: gefupi
 */

#ifndef TCP_CONNECTOR_H_
#define TCP_CONNECTOR_H_

typedef struct _tcp_connector_ {
	int socket_fd;
} tcp_connector;


tcp_connector *tcp_connector_create();
void tcp_connector_destroy(tcp_connector **this);

#endif /* TCP_CONNECTOR_H_ */
