/*
 * sample_plugin.cpp
 *
 *  Created on: May 2, 2020
 *      Author: pavel
 */

#include "gtest/gtest.h"
#include "sample_plugin.hpp"

namespace {
	class sample_pluginTest : public ::testing::Test {
	protected:
		sample_plugin sample_plugin;
	};
	TEST_F(sample_pluginTest, sample_plugin) {

		ASSERT_EQ(sample_plugin.onTheTable(), " Whiskey ");
	}
}


