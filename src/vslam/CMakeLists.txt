cmake_minimum_required(VERSION 3.0)
project(vslam)

find_package(catkin_simple REQUIRED
	visualization
)
catkin_simple(ALL_DEPS_REQUIRED)

add_definitions(--std=c++14 -Wno-unknown-pragmas)

cs_add_library(${PROJECT_NAME}
src/Tracking.cc
src/LocalMapping.cc
src/LoopClosing.cc
src/ORBextractor.cc
src/ORBmatcher.cc
src/Converter.cc
src/MapPoint.cc
src/KeyFrame.cc
src/Map.cc
src/Optimizer.cc
src/PnPsolver.cc
src/Frame.cc
src/KeyFrameDatabase.cc
src/Sim3Solver.cc
src/System.cc
src/Initializer.cc
)
list(APPEND CMAKE_PREFIX_PATH "/home/gxf/software/libtorch_ABI_1/libtorch/share/cmake/Torch")
find_package(Torch REQUIRED)

find_package(OpenCV 3.0 QUIET)
if(NOT OpenCV_FOUND)
   find_package(OpenCV 2.4.3 QUIET)
   if(NOT OpenCV_FOUND)
      message(FATAL_ERROR "OpenCV > 2.4.3 not found.")
   endif()
endif()


include_directories(${OpenCV_INCLUDE_DIRS} ${TORCH_INCLUDE_DIRS})
cs_add_executable(euroc
Examples/Monocular/euroc.cc)
target_link_libraries(euroc ${PROJECT_NAME} ${TORCH_LIBRARIES})


cs_add_executable(kitti
Examples/Monocular/kitti.cc)
target_link_libraries(kitti ${PROJECT_NAME} ${TORCH_LIBRARIES})


cs_install()
cs_export()
cs_export()

