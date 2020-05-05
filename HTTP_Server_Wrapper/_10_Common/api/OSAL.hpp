/*!
 * @file OSAL.hpp
 * @author Pavel Kanazirev
 * @brief Common class used for callback definition
 * @date 2020-05-01
 *
 * <Details.>
 *
 */

#ifndef OSAL_HPP_
#define OSAL_HPP_

#include "Singleton.h"

#ifndef HTTP_OS

#define __OS_LINUX__ 101
#define __WIN__ 102
#define __ANDROID__ 103
#define __IOS__ 104

#define HTTP_OS __OS_LINUX__

class OSAL : public Singleton<OSAL> {

private:

#if HTTP_OS == __OS_LINUX__
	typedef void * (*start_routine_t)(void *);
	typedef linux_thread_s {
		pthread_t thread;
		pthread_attr_t thread_attr;
		start_routine_t thread_routine;
	} linux_thread_t;
#endif

public :
   void thread_init(start_routine_t _routine);
   void thread_join();
   void thread_exit();
};

#endif /* OSAL_HPP_ */
