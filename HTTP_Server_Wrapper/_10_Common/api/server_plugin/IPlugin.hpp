/*!
 * @file IPlugin.hpp
 * @author Pavel Kanazirev
 * @brief Server plugin C++ Interface API
 * @date 2020-05-01
 *
 * <Details.>
 *
 */

#ifndef IPLUGIN_HPP_
#define IPLUGIN_HPP_

#include <string>

/*! \class IPlugin
    \brief Interface class for all the plugins

    Provides the virtual function that needs to be implemented by the plugin services
*/
class IPlugin {
public:
    //! A pure virtual destructor.
    /*!
      \sa IPlugin()
    */
	virtual ~IPlugin() {};
    //! A pure virtual member.
    /*!
      \sa onTheTable()
      \return The type of the drink served on the table.
    */
    virtual std::string onTheTable() = 0;

};

#endif /* IPLUGIN_HPP_ */
