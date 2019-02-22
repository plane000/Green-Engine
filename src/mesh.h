#ifndef SMHENGINE_SRC_MESH_H_
#define SMHENGINE_SRC_MESH_H_

#include <string>
#include <vector>

#include <glad/glad.hpp>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

class Shader;

class Mesh {
public:
    Mesh();
    Mesh(std::string objPath);

    void LoadFromObj(std::string objPath);
    void settup();

    void bind();
    void render(Shader& shader);
    void unbind();

    GLuint VAOid;

    std::vector<glm::vec3> vertices;
    std::vector<glm::vec4> colours;
    std::vector<glm::vec2> texCoords;
    std::vector<glm::vec3> normals;
    std::vector<GLuint> indices;

private:
    GLuint vertexBuffer;
    GLuint indexBuffer;
};

#endif