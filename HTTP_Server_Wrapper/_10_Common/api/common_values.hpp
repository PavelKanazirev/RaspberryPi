/*
 * common_values.hpp
 *
 *  Created on: May 3, 2020
 *      Author: pavel
 */

#ifndef CONST_VALUES_HPP_
#define CONST_VALUES_HPP_

//#define DEBUG

#include <string>
#include <mutex>
#include <boost/date_time/time_duration.hpp>
#include <nghttp2/asio_http2.h>

namespace HTTP_common {

const unsigned int HTTP_PORT_INT = 80U;
const std::string HTTP_STR_SERVER = "localhost";
const std::string HTTP_STR_PORT ="80";
const std::string HTTP_STR_PORT_ADDRESS = "http://localhost:80/";

const unsigned int HTTP_NTHREADS_INT = 3U;
const unsigned int HTTP_WORKER_POLLING_VALUE_MS = 300U;
const int HTTP_READ_HOURS = 0;
const int HTTP_READ_MINUTES = 0;
const int HTTP_READ_SECONDS = 15;
const int HTTP_READ_FRAWSECONDS = 0;

typedef enum HTTP_event_e {
	EHTTP_UNDEFINED = 0,
	EHTTP_CLI_TO_SRV_CONN,
	EHTTP_SRV_TO_CLI_CONN,
	EHTTP_LAST,
	EHTTP_MAX = EHTTP_LAST
} HTTP_event_t;

typedef enum HTTP_available_e {
	EHTTP_AVL_UNDEFINED = 0,
	EHTTP_AVL_LAST,
	EHTTP_AVL_MAX = EHTTP_LAST
} HTTP_available_t;

typedef struct HTTP_event_msg_s {
	HTTP_event_t e_event;
	std::string s_event_payload;
	boost::posix_time::time_duration t_time;
	boost::asio::ip::tcp::endpoint tcp_remotepoint;
//	std::mutex m_mutex;
} HTTP_event_msg_t;


// Copyright 2018 Google LLC.
// SPDX-License-Identifier: Apache-2.0

struct all{
    all operator*()const{return {};}
    all operator++(int){return *this;}
    bool operator==(all) const{return false;}
    bool operator!=(all) const{return true;}
    all operator++(){return *this;}
    all begin()const{return {};}
    all end()const{return {};}
};
inline constexpr all me;

} // HTTP_common

#endif /* CONST_VALUES_HPP_ */
