/*!
 * @file plugin_api.h
 * @author Pavel Kanazirev
 * @brief Server plugin API
 * @date 2020-05-01
 *
 * <Details.>
 *
 */

#ifndef PLUGIN_API_H_
#define PLUGIN_API_H_

#include "IPlugin.hpp"

#define PLUGIN_API_VERSION 1
#define PLUGIN_API_SYMBOL "exports"

typedef IPlugin* (*GetPluginFunc)();

//! Structure that will carry the plugin interface
/*! Each plugin will reserve data for this structure */
struct PluginDetails {
    int apiVersion;
    GetPluginFunc initializeFunc;
};

#define DECLARE_PLUGIN(x) extern "C"{ 		\
			inline IPlugin * getPlugin() 	\
			{ 								\
				return new x;				\
			} 								\
			inline PluginDetails exports =  \
		    {                             	\
				  PLUGIN_API_VERSION,     	\
		          getPlugin,                \
		    };								\
} // extern "C"

#endif /* PLUGIN_API_H_ */
