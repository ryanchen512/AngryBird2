#include "Model.h"

using namespace std;

Model& ModelRepositary::accessModel(string key)
{
    return modelMap[key];
}

template <typename modelType>
void ModelRepositary::pushModel(string key)
{
    modelType* model = new modelType;
    modelMap[key] = model;
}
void ModelRepositary::popModel(string key)
{
    delete &modelMap[key];
    modelMap.erase(key);
}

