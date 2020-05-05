/*
 * EventManagerSingleton.cpp
 *
 *  Created on: May 3, 2020
 *      Author: pavel
 */
#include <memory>

#include "EventManagerSingleton.hpp"

#include "spdlog/spdlog.h"
#include "Http_Functor.hpp"
#include "common_values.hpp"

http_common::http_event_t EventManagerSingleton::m_event = http_common::EHTTP_UNDEFINED;
http_common::http_available_t EventManagerSingleton::m_avl = http_common::EHTTP_AVL_UNDEFINED;

EventManagerSingleton::EventManagerSingleton() :
	Singleton<EventManagerSingleton>(*this),
	m_tread_timeout(http_common::HTTP_READ_HOURS,
			http_common::HTTP_READ_MINUTES,
			http_common::HTTP_READ_SECONDS,
			http_common::HTTP_READ_FRAWSECONDS)
{

}

util::Expected<void>
EventManagerSingleton::setCliToSrvEvent_cb(
							std::shared_ptr<Http_Functor> & _pCliToSrvEvent_cb)
{
//	m_pCliToSrvEvent_cb = std::make_shared(_pCliToSrvEvent_cb);
	UNUSED(_pCliToSrvEvent_cb);

	return {};
}

util::Expected<void>
EventManagerSingleton::setSrvToCliEvent_cb(
							std::shared_ptr<Http_Functor> & _pSrvToCliEvent_cb)

{
//	m_pSrvToCliEvent_cb = std::make_shared(_pSrvToCliEvent_cb);
	UNUSED(_pSrvToCliEvent_cb);

	return {};
}


util::Expected<void> EventManagerSingleton::setClentCbResult(
				http_common::http_event_t _event,
				http_common::http_available_t _http_avl = http_common::EHTTP_AVL_UNDEFINED)
{
	m_event = _event;
	m_avl = _http_avl;

	SPDLOG_INFO("Gotcha: {} ",static_cast<int>(m_event) );

	return {};
};

http_common::http_event_t
EventManagerSingleton::get_event()
{
	return m_event;
}

util::Expected<void>
EventManagerSingleton::set_event(http_common::http_event_t _event)
{
	m_event = _event;

	return {};
}

http_common::http_available_t EventManagerSingleton::get_avl()
{
	return m_avl;
}

util::Expected<void> EventManagerSingleton::set_avl(http_common::http_available_t _avl)
{
	m_avl = _avl;

	return {};
}
