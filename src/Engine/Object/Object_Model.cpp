#include "Object_Model.hpp"
#include "Model/model.hpp"

void Object_Model::Draw()
{
    
}
void Object_Model::SetModel(const char *path)
{
    Model outModel(path, false);
    model = outModel;

}
void Object_Model::SetShader(const char *path_v, const char *path_f)
{
    Shader outShader (path_v, path_f);
    shader = outShader;
}