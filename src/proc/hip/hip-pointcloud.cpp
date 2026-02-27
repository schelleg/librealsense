// License: Apache 2.0. See LICENSE file in root directory.
// Copyright(c) 2019 RealSense, Inc. All Rights Reserved.
#include "proc/hip/hip-pointcloud.h"

#ifdef RS2_USE_HIP
#include "../../hip/hip-pointcloud.hpp"
#endif

namespace librealsense
{
    pointcloud_hip::pointcloud_hip() : pointcloud("Pointcloud (HIP)") {}

    const float3 * pointcloud_hip::depth_to_points(
        rs2::points output,
        const rs2_intrinsics &depth_intrinsics,
        const rs2::depth_frame& depth_frame)
    {
        auto image = output.get_vertices();
        auto depth_data = (uint16_t*)depth_frame.get_data();
        auto depth_scale = depth_frame.get_units();
#ifdef RS2_USE_HIP
        rship::deproject_depth_hip((float*)image, depth_intrinsics, depth_data, depth_scale);
#endif
        return (float3*)image;
    }
}
