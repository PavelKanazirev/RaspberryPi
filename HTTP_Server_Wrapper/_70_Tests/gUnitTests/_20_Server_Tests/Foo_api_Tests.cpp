/*
 * FooTests.cpp
 *
 *  Created on: May 2, 2020
 *      Author: pavel
 */

#include "gtest/gtest.h"
#include "foo_api.hpp"

namespace {
	class FooApiTest : public ::testing::Test {
	protected:
		Foo_api foo;
	};
	TEST_F(FooApiTest, Foo_api) {
		ASSERT_TRUE(foo.stat_foo());
		ASSERT_EQ(foo.stat_foo(), 42);
	}
}
