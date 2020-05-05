/*
 * client_lib_Tests.cpp
 *
 *  Created on: May 2, 2020
 *      Author: pavel
 */

#include "gtest/gtest.h"
#include "client_lib.hpp"

#include "Functor.hpp"


namespace {
	class ClientLibTest : public ::testing::Test {
	protected:
		client_lib cli;
	};
	TEST_F(ClientLibTest, client_lib) {
		Functor myCb;

		ASSERT_FALSE(cli.init(myCb));
		ASSERT_EQ(cli.write(), 0);
	}
}


