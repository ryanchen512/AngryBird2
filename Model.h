#ifndef Model_H
#define Model_H
#include <map>
#include <string>
#include "global.h"

using namespace std;

class Model
{
friend class ModelRepositary;
public:
    virtual ~Model();
protected:
    Model();
};

class ModelRepositary
{
public:
    static ModelRepositary shared;
    Model& accessModel(string key);
    template <typename modelType>
    void pushModel(string key);
    void popModel(string key);
    virtual ~ModelRepositary();
private:
    map<string, Model&> modelMap;
    ModelRepositary();
};

#endif Model_H
