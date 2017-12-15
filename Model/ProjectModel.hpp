//
//  ProjectModel.hpp
//  CppReflection
//
//  Created by toyota on 2017/12/14.
//  Copyright © 2017年 toyota. All rights reserved.
//

#ifndef ProjectModel_hpp
#define ProjectModel_hpp

#include <stdio.h>
#include "IModel.hpp"
#include "ModelFactory.hpp"

class ProjectModel : public Model{
DECLARE_MODEL(ProjectModel)
public:
    ProjectModel(){}

    std::string getData() override;
};


#endif /* ProjectModel_hpp */
