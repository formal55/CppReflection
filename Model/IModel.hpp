//
//  IModel.hpp
//  CppReflection
//
//  Created by toyota on 2017/12/14.
//  Copyright © 2017年 toyota. All rights reserved.
//

#ifndef IModel_hpp
#define IModel_hpp

#include <iostream>

class IModel{
public:
    IModel(){}
    virtual std::string getData() = 0;
};

class Model : public IModel{
public:
    std::string getData() override;
};

#endif /* IModel_hpp */
