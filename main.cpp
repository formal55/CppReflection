//
//  main.cpp
//  CppReflection
//
//  Created by toyota on 2017/12/14.
//  Copyright © 2017年 toyota. All rights reserved.
//

#include <iostream>
#include "ProjectModel.hpp"
#include "SensorModel.hpp"

class Manager{
public:
    template<class T> std::string getData(){
        Model *model = ModelFactory::getInstance()->get<T>();
        return model->getData();
    }

    std::string getData(const std::string &className){
        Model *model = ModelFactory::getInstance()->get(className);
        return model->getData();
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Manager manager;
    std::cout << "========= Class Reflection ========= " << std::endl;
    std::cout << manager.getData<SensorModel>() << std::endl;
    std::cout << "========= String Reflection ========= " << std::endl;
    std::cout << manager.getData("ProjectModel") << std::endl;
    return 0;
}
