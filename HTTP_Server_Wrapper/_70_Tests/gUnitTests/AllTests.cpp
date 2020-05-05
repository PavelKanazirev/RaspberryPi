/*
 * AllTests.cpp
 *
 *  Created on: May 2, 2020
 *      Author: pavel
 */
#include "_10_Common_Tests/Foo_common_Tests.cpp"
#include "_20_Server_Tests/Foo_api_Tests.cpp"
#include "_20_Server_Tests/Foo_local_Tests.cpp"
#include "_30_ServerPlugins_Tests/sample_plugin_local_Tests.cpp"
#include "_40_ClientLib_Tests/client_lib_Tests.cpp"
#include "_50_ClientApps_Tests/Foo_client_api_Tests.cpp"

#include "gtest/gtest.h"

int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}


