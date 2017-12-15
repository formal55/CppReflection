//
//  Sensor.hpp
//  CppReflection
//
//  Created by toyota on 2017/12/14.
//  Copyright © 2017年 toyota. All rights reserved.
//

#ifndef Sensor_hpp
#define Sensor_hpp

#include <stdio.h>
#include "IModel.hpp"
#include "ModelFactory.hpp"

class SensorModel : public Model{
DECLARE_MODEL(SensorModel)
public:
    SensorModel(){}

    std::string getData() override;
};

#endif /* Sensor_hpp */
