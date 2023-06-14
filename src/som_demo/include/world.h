#ifndef WORLD_H
#define WORLD_H

#include <array>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <glm/glm.hpp>

#include "Vertex.h"
#include "RAWmodel.h"
#include "SOM.h"

struct World {

    std::vector<Vertex> square;// floor
    std::vector<Vertex> cube; // test
    std::vector<Vertex> lightcube; // light
    std::vector<Vertex> outerVoxel;
    std::vector<Vertex> innerVoxel;
    std::vector<Vertex> voxel;
    std::vector<std::vector<Vertex>> somVoxel; // voxel model
    std::vector<Vertex> lattice_line; // lattice
    std::vector<std::vector<Vertex>> l_lattice_line; // lattice
    std::vector<Vertex> lattice_plane; // plane of texture
    std::vector<std::vector<Vertex>> l_lattice_plane; // plane of texture
    std::vector<Vertex> axis;
};

void create_world(SurfaceVoxModel_t  voxelModel);
void renew_world(int layerNum);
void renew_voxel_color(SurfaceVoxModel_t voxelModel);
void destroy_world();
extern struct World world;

#endif