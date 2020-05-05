/*
 * Foo_client_api_Tests.cpp
 *
 *  Created on: May 2, 2020
 *      Author: pavel
 */

#include "gtest/gtest.h"
#include "foo_client_api.hpp"

namespace {
	class FooClientLocalTest : public ::testing::Test {
	protected:
		Foo_client_api foo;
	};
	TEST_F(FooClientLocalTest, Foo_client_api) {
		ASSERT_TRUE(foo.stat_foo());
		ASSERT_EQ(foo.stat_foo(), 42);
	}
}


