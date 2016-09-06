/*
	JUCI Backend Websocket API Server

	Copyright (C) 2016 Martin K. Schröder <mkschreder.uk@gmail.com>

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version. (Please read LICENSE file on special
	permission to include this software in signed images). 

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.
*/
#pragma once

#include "orange_server.h"

struct orange; 

struct orange_rpc{
	struct blob buf; 
	struct blob out; 
}; 

void orange_rpc_init(struct orange_rpc *self); 
void orange_rpc_deinit(struct orange_rpc *self); 

int orange_rpc_process_requests(struct orange_rpc *self, orange_server_t server, struct orange *ctx, unsigned long long timeout_us); 