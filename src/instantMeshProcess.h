
#pragma once

#include <common.h>

extern void instantMeshProcess(const std::string &input, const std::string &output,
                          int rosy, int posy, Float scale, int face_count,
                          int vertex_count, Float creaseAngle, bool extrinsic,
                          bool align_to_boundaries, int smooth_iter,
                          int knn_points, bool dominant, bool deterministic);
