/*
 * EventManagerSingleton.hpp
 *
 *  Created on: May 3, 2020
 *      Author: pavel
 */

#ifndef EVENTMANAGERSINGLETON_HPP_
#define EVENTMANAGERSINGLETON_HPP_
#include <memory>

#include "Expected.hpp"
#include "ResultType.hpp"
#include "common_values.hpp"

#include "Singleton.h"
#include "Http_Functor.hpp"

template<class T> class Expected;

class EventManagerSingleton : public Singleton<EventManagerSingleton> {
private:
	http_result::ResultType m_Result;
	std::shared_ptr<Http_Functor> m_pCliToSrvEvent_cb;
	std::shared_ptr<Http_Functor> m_pSrvToCliEvent_cb;

	boost::posix_time::time_duration m_tread_timeout;

public :
	EventManagerSingleton();
	util::Expected<void> setClentCbResult(
			http_common::http_event_t _event,
			http_common::http_available_t _http_avl);

	util::Expected<void> setCliToSrvEvent_cb(std::shared_ptr<Http_Functor> & _pCliToSrvEvent_cb);
	util::Expected<void> setSrvToCliEvent_cb(std::shared_ptr<Http_Functor> & _pSrvToCliEvent_cb);

	http_common::http_event_t get_event();
	util::Expected<void> set_event(http_common::http_event_t _event);
	http_common::http_available_t get_avl();
	util::Expected<void> set_avl(http_common::http_available_t _avl);

static http_common::http_event_t m_event;
static http_common::http_available_t m_avl;
};

#endif /* EVENTMANAGERSINGLETON_HPP_ */
