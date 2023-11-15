#include "pch.h"
#include "CppUnitTest.h"
#include"../Lab_8.1.string/LAB.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81string
{
	TEST_CLASS(UnitTest81string)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(Count("d,-g..g,-"), 2);
		}
	};
}
