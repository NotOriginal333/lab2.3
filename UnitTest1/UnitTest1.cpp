#include "pch.h"
#include "CppUnitTest.h"
#include "../lab2.3/Money.h"
#include "../lab2.3/Money.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money b;
			+b;
			int t = b.getTotal();
			Assert::AreEqual(0, t);
		}
	};
}
