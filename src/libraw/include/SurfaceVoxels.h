#ifndef SURFACEVOXELS_H
#define SURFACEVOXELS_H
#include <glm/glm.hpp>


typedef struct UnitSurfaceVoxData_t {

    glm::ivec3 locate = {0, 0, 0}; // only bounder voxel's locate(x,y,z)
    bool faceAir[6] = {false, false, false, false, false, false};
    glm::fvec3 color = {0.8, 0.0, 1.0};
    glm::fvec2 texcoord = {0.0, 0.0};
    int textype = 0;
}USVoxData_t;

typedef struct SurfaceVoxModel_t {

    std::vector<USVoxData_t> outerVoxel;// layer 0
    std::vector<USVoxData_t> innerVoxel;// layer somInitLayer+somChioceLayerNum

    USVoxData_t** somVoxel;
    int *num;
    glm::ivec3 *maxsize;
    glm::ivec3 *minsize;

    int somChioceLayerNum = 3;
    int somInitLayer = 3;

    int texTypeNum = 3;

}svoxModel_t;


#endif