//This file is the hipified version of cuda-pointcloud.h

#pragma once
#ifndef HIP_POINTCLOUD_H
#define HIP_POINTCLOUD_H

#ifdef RS2_USE_HIP

#include "../pointcloud.h"
#include <memory>

namespace librealsense
{
    class hip_pointcloud : public pointcloud
    {
    public:
        hip_pointcloud();
        ~hip_pointcloud();

    protected:
        // TODO: Add HIP-specific methods
    };
}

#endif // RS2_USE_HIP

#endif // HIP_POINTCLOUD_H
