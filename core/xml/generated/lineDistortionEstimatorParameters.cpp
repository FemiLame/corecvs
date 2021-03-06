/**
 * \file lineDistortionEstimatorParameters.cpp
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 * Generated from distortion.xml
 */

#include <vector>
#include <stddef.h>
#include "lineDistortionEstimatorParameters.h"

/**
 *  Looks extremely unsafe because it depends on the order of static initialization.
 *  Should check standard if this is ok
 *
 *  Also it's not clear why removing "= Reflection()" breaks the code;
 **/

namespace corecvs {
#if 0
template<>
Reflection BaseReflection<LineDistortionEstimatorParameters>::reflection = Reflection();
template<>
int BaseReflection<LineDistortionEstimatorParameters>::dummy = LineDistortionEstimatorParameters::staticInit();
#endif
} // namespace corecvs 

SUPPRESS_OFFSET_WARNING_BEGIN


using namespace corecvs;

int LineDistortionEstimatorParameters::staticInit(corecvs::Reflection *toFill)
{
    if (toFill == NULL || toFill->objectSize != 0) {
        SYNC_PRINT(("staticInit(): Contract Violation in <LineDistortionEstimatorParameters>\n"));
         return -1;
    }

    toFill->name = ReflectionNaming(
        "Line Distortion Estimator Parameters",
        "Line Distortion Estimator Parameters",
        ""
    );

     toFill->objectSize = sizeof(LineDistortionEstimatorParameters);
     

    EnumField* field0 = new EnumField
        (
          LineDistortionEstimatorParameters::COST_ALGORITHM_ID,
          offsetof(LineDistortionEstimatorParameters, mCostAlgorithm),
          0,
          "Cost Algorithm",
          "Cost Algorithm",
          "Cost Algorithm",
          new EnumReflection(2
          , new EnumOption(0,"Line Deviation Cost")
          , new EnumOption(1,"Joint Angle Cost")
          )
        );
    field0->widgetHint=BaseField::COMBO_BOX;
    toFill->fields.push_back(field0);
    /*  */ 
    IntField* field1 = new IntField
        (
          LineDistortionEstimatorParameters::ITERATION_NUMBER_ID,
          offsetof(LineDistortionEstimatorParameters, mIterationNumber),
          1000,
          "Iteration Number",
          "Iteration Number",
          "Iteration Number",
          true,
         0,
         99999,
         1
        );
    toFill->fields.push_back(field1);
    /*  */ 
    IntField* field2 = new IntField
        (
          LineDistortionEstimatorParameters::POLYNOM_DEGREE_ID,
          offsetof(LineDistortionEstimatorParameters, mPolynomDegree),
          6,
          "Polynom Degree",
          "Polynom Degree",
          "Polynom Degree",
          true,
         0,
         20,
         1
        );
    field2->prefixHint="x^";
    toFill->fields.push_back(field2);
    /*  */ 
    BoolField* field3 = new BoolField
        (
          LineDistortionEstimatorParameters::SIMPLE_JACOBIAN_ID,
          offsetof(LineDistortionEstimatorParameters, mSimpleJacobian),
          true,
          "Simple Jacobian",
          "Simple Jacobian",
          "Simple Jacobian"
        );
    field3->widgetHint=BaseField::CHECK_BOX;
    toFill->fields.push_back(field3);
    /*  */ 
    BoolField* field4 = new BoolField
        (
          LineDistortionEstimatorParameters::EVEN_POWERS_ONLY_ID,
          offsetof(LineDistortionEstimatorParameters, mEvenPowersOnly),
          false,
          "Even powers only",
          "Even powers only",
          "Even powers only"
        );
    field4->widgetHint=BaseField::CHECK_BOX;
    toFill->fields.push_back(field4);
    /*  */ 
    BoolField* field5 = new BoolField
        (
          LineDistortionEstimatorParameters::ESTIMATE_TANGENT_ID,
          offsetof(LineDistortionEstimatorParameters, mEstimateTangent),
          true,
          "Estimate Tangent",
          "Estimate Tangent",
          "Estimate Tangent"
        );
    field5->widgetHint=BaseField::CHECK_BOX;
    toFill->fields.push_back(field5);
    /*  */ 
    BoolField* field6 = new BoolField
        (
          LineDistortionEstimatorParameters::ESTIMATE_CENTER_ID,
          offsetof(LineDistortionEstimatorParameters, mEstimateCenter),
          true,
          "Estimate Center",
          "Estimate Center",
          "Estimate Center"
        );
    field6->widgetHint=BaseField::CHECK_BOX;
    toFill->fields.push_back(field6);
    /*  */ 
    ReflectionDirectory &directory = *ReflectionDirectoryHolder::getReflectionDirectory();
    directory[std::string("Line Distortion Estimator Parameters")]= toFill;
   return 0;
}
int LineDistortionEstimatorParameters::relinkCompositeFields()
{
   return 0;
}

SUPPRESS_OFFSET_WARNING_END


