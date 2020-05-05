/*
 * FooTests.cpp
 *
 *  Created on: May 2, 2020
 *      Author: pavel
 */

#include "gtest/gtest.h"
#include "foo_common.hpp"

namespace {
	class FooCommonTest : public ::testing::Test {
	protected:
		Foo_common foo;
	};
	TEST_F(FooCommonTest, Foo_common) {
		ASSERT_TRUE(foo.stat_foo());
		ASSERT_EQ(foo.stat_foo(), 42);
	}
}
