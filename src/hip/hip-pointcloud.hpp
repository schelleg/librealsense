//This file is the hipified version of cuda-pointcloud.cuh

#pragma once
#ifndef HIP_POINTCLOUD_HPP
#define HIP_POINTCLOUD_HPP

#ifdef RS2_USE_HIP

#include <stdint.h>
#include "../../include/librealsense2/rs.h"
#include <hip/hip_runtime.h>

#define RS2_HIP_THREADS_PER_BLOCK 256

namespace rship
{
    // TODO: Add HIP pointcloud declarations here
    // This is a placeholder - needs to be converted from CUDA
}

#endif // RS2_USE_HIP

#endif // HIP_POINTCLOUD_HPP
