//
//  ModelFactory.hpp
//  CppReflection
//
//  Created by toyota on 2017/12/14.
//  Copyright © 2017年 toyota. All rights reserved.
//

#ifndef ModelFactory_hpp
#define ModelFactory_hpp

#include <iostream>
#include <unordered_map>
#include "IModel.hpp"
#include <typeinfo>
//#include "ProjectModel.hpp"
//#include "Sensor.hpp"

#define DECLARE_MODEL(className) private: \
                                    static Model * m_##className##dc;


#define IMPLEMENT_MODEL(className)  Model *className::m_##className##dc = \
                                    ModelFactory::getInstance()->registerModel<className>();



typedef std::unordered_map<std::string, Model *> ModelMap;

class ModelFactory{
public:
    static ModelFactory *getInstance();

    template<class T> Model *registerModel(){
        Model *model = new T;
        // std::cout << "insert --> " << typeid(T).name() << std::endl;
        mMap[typeid(T).name()] = model;
        return model;
    }

    template<class T> Model *get(){
        // std::cout << "find --> " << typeid(T).name() << std::endl;
        ModelMap::const_iterator got = mMap.find (typeid(T).name());
        if(got == mMap.end()){
            return nullptr;
        }
        return got->second;
    }

    Model *get(const std::string &modelName);

//    void registerModels();

private:
    ModelMap mMap;
};

#endif /* ModelFactory_hpp */
