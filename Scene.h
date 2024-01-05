#include <vector>
#include "GameObject.h"

using namespace std;

class Scene
{
public:
    void update();
private:
    vector<GameObject> sceneObjects;
};