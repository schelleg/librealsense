//This file is the hipified version of cuda-align.h

#pragma once
#ifndef HIP_ALIGN_H
#define HIP_ALIGN_H

#ifdef RS2_USE_HIP

#include "../align.h"
#include <memory>

namespace librealsense
{
    class hip_align : public align
    {
    public:
        hip_align(rs2_stream to_stream);
        ~hip_align();

    private:
        void align_z_to_other(rs2::video_frame depth, const rs2::video_stream_profile& depth_profile,
            rs2::video_frame to, const rs2::video_stream_profile& to_profile, const rs2_intrinsics& depth_intrin,
            const rs2_intrinsics& other_intrin, const rs2_extrinsics& depth_to_other);

        void align_other_to_z(rs2::video_frame depth, const rs2::video_stream_profile& depth_profile,
            rs2::video_frame to, const rs2::video_stream_profile& to_profile, const rs2_intrinsics& depth_intrin,
            const rs2_intrinsics& other_intrin, const rs2_extrinsics& depth_to_other);

        // TODO: Add HIP-specific members
    };
}

#endif // RS2_USE_HIP

#endif // HIP_ALIGN_H
