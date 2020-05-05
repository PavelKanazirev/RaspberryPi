/*
 * FooTests.cpp
 *
 *  Created on: May 2, 2020
 *      Author: pavel
 */

#include "gtest/gtest.h"
#include "foo_local.hpp"

namespace {
	class FooLocalTest : public ::testing::Test {
	protected:
		Foo_local foo;
	};
	TEST_F(FooLocalTest, Foo_local) {
		ASSERT_TRUE(foo.stat_foo());
		ASSERT_EQ(foo.stat_foo(), 42);
	}
}
