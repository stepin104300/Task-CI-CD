
#include "unity.h"
#include "fibon.h"

	void setUp()
	{	}
	void tearDown()
	{	}

	void test_fibon(void)
	{
  		TEST_ASSERT_EQUAL(1, fibon(8));
  		TEST_ASSERT_EQUAL(0, fibon(10));
	}

	int test_main(void)
	{
	  	UNITY_BEGIN();

	  	RUN_TEST(test_fibon);

  		return UNITY_END();
	}
