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
			int arr[] = { -2,4,1,-4,2 }, size = 5;
			Assert::AreEqual(sum(arr,size), 1);
		}
	};
}
