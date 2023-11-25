#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.2(2)/lab6.2(2).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestFindMinMaxRecursive)
		{
			const int n = 5;
			int arr[n] = { 1, 2, 3, 4, 5 };

			int minValue = INT_MAX, maxValue = INT_MIN;
			findMinMaxRecursive(arr, n, 0, minValue, maxValue);

			Assert::AreEqual(1, minValue);
			Assert::AreEqual(5, maxValue);
		}
	};
}
