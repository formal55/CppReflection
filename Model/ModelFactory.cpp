//
//  ModelFactory.cpp
//  CppReflection
//
//  Created by toyota on 2017/12/14.
//  Copyright © 2017年 toyota. All rights reserved.
//

#include "ModelFactory.hpp"

ModelFactory *ModelFactory::getInstance(){
    static ModelFactory *instance = new ModelFactory;
    return instance;
}


Model *ModelFactory::get(const std::string &modelName){
    ModelMap::iterator it = mMap.begin();
    Model *model = nullptr;
    while(it != mMap.end())
    {
        if (it->first.find(modelName) != std::string::npos) {
            model = it->second;
            break;
        }
    	it++;
    }
    return model;
}
