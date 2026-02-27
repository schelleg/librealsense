#pragma once
#ifndef LIBREALSENSE_HIP_POINTCLOUD_H
#define LIBREALSENSE_HIP_POINTCLOUD_H

#ifdef RS2_USE_HIP

// Types
#include <stdint.h>
#include "../../include/librealsense2/rs.h"
#include "assert.h"
#include "../../include/librealsense2/rsutil.h"
#include <functional>

// HIP headers
#include <hip/hip_runtime.h>

#define RS2_HIP_THREADS_PER_BLOCK 256

namespace rship
{
    void deproject_depth_hip(float * points, const rs2_intrinsics & intrin, const uint16_t * depth, float depth_scale);

}

#endif // RS2_USE_HIP

#endif // LIBREALSENSE_HIP_POINTCLOUD_H
