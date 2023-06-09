/** \file UnitTest_Exam_COMP118.cpp
* \brief Unit test for Exam_COMP118
* \details Tests Exam_COMP118 program
* \author Igor Kuvshinov
* \date 09.06.2023
* \version v0.1
* */

#include "pch.h"
#include "CppUnitTest.h"
#include "../Exam_COMP118/Exam_COMP118.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestExamCOMP118
{
	TEST_CLASS(UnitTestExamCOMP118)
	{
	public:
	
		TEST_METHOD(TestMethodSumOfOnes)
		{
			const double sum = 2;
			const double matrix[MAX_ROW][MAX_COL] = {1, 0, 0, 1};
			double res;

			res = SumOfOnes(matrix, sum);

			Assert::AreEqual(sum, res);
		}
	};
}
