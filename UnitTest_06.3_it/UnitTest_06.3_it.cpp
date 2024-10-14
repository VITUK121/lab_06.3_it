#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_06.3_it/lab_06.3_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest063it
{
	TEST_CLASS(UnitTest063it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr1[] = { -2,4,1,-4,2 }, size1 = 5;
			Assert::AreEqual(sum1(arr1, size1), 1);
		}
		TEST_METHOD(TestMethod2)
		{
			int arr2[] = { -5.5,9.33,1.25,-4.5,0.42 }, size2 = 5;
			Assert::AreEqual(sum2(arr2, size2), 1);
		}
	};
}
