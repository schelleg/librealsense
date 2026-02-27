# License: Apache 2.0. See LICENSE file in root directory.
# Copyright(c) 2019 RealSense, Inc. All Rights Reserved.
target_sources(${LRS_TARGET}
    PRIVATE
        "${CMAKE_CURRENT_LIST_DIR}/hip-align.h"
        "${CMAKE_CURRENT_LIST_DIR}/hip-align.cpp"
        "${CMAKE_CURRENT_LIST_DIR}/hip-align.hpp"
        "${CMAKE_CURRENT_LIST_DIR}/hip-pointcloud.h"
        "${CMAKE_CURRENT_LIST_DIR}/hip-pointcloud.cpp"

)
