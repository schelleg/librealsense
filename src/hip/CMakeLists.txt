# License: Apache 2.0. See LICENSE file in root directory.
# Copyright(c) 2019 RealSense, Inc. All Rights Reserved.
target_sources(${LRS_TARGET}
    PRIVATE
        "${CMAKE_CURRENT_LIST_DIR}/hip-conversion.cpp"
        "${CMAKE_CURRENT_LIST_DIR}/hip-conversion.hpp"
        "${CMAKE_CURRENT_LIST_DIR}/hip-pointcloud.cpp"
        "${CMAKE_CURRENT_LIST_DIR}/hip-pointcloud.hpp"
        "${CMAKE_CURRENT_LIST_DIR}/rship_utils.hpp"
)
