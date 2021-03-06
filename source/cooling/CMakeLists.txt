cmake_minimum_required(VERSION 3.13 FATAL_ERROR)

project(cooling)

include(../../cmake/AutoSourceGroup.cmake)

set(FILES
     algorithms/algorithm.hpp
     algorithms/basic_culling_algorithm.cpp
     algorithms/basic_culling_algorithm.hpp
	 algorithms/bounding_volume_hierarchy.cpp
	 algorithms/bounding_volume_hierarchy.hpp
     algorithms/octree.cpp
     algorithms/octree.hpp
     algorithms/regular_space_partitioning.cpp
     algorithms/regular_space_partitioning.hpp
     export/cooling_dll.hpp
     occlusion_query/queries_manager.cpp
     occlusion_query/queries_manager.hpp
     occlusion_query/query.cpp
     occlusion_query/query.hpp
     profiler/profiler.cpp
     profiler/profiler.hpp
     utils/aabb.hpp
     utils/aabb.cpp
     utils/visibility_tests.cpp
     utils/visibility_tests.hpp
     culling_manager.cpp
     culling_manager.hpp
     frustum_view.cpp
     frustum_view.hpp
     object.cpp
     object.hpp
     )

add_library(cooling SHARED
	${FILES})

AUTO_GROUP_SOURCE(${FILES})

target_include_directories(cooling PUBLIC "${CMAKE_SOURCE_DIR}/source")
