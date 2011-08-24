/*
 * tcp_connector.c
 *
 *  Created on: Aug 22, 2011
 *      Author: gefupi
 */

#include "tcp_connector.h"
#include <stdlib.h>
#include <unistd.h>

tcp_connector *tcp_connector_create() {

	return NULL;

}


void tcp_connector_destroy(tcp_connector **this) {
	if (*this) {
		close((*this)->socket_fd);
		free(*this);
		*this = 0;
	}
}
