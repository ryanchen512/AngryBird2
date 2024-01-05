#include <map>
class Model
{
friend class ModelRepositary
public:
private:
    
}

class ModelRepositary
{
public:
    Model& accessModel();
    void pushModel();
    void popModel();
private:
    map<string, Model> modelRepositary;
}