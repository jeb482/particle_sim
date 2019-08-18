cmake_minimum_required (VERSION 3.0)
PROJECT(particle_sim)


# Eigen
INCLUDE_DIRECTORIES ($PROJECT_SOURCE_DIR/ext/eigen)

# GLAD
add_subdirectory(ext/glad/)


add_executable(particle_sim main.cpp viewer.hpp snapshot.hpp scene.hpp particle.hpp camera.hpp)


target_link_libraries(particle_sim PRIVATE glad)