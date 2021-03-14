cmake_minimum_required (VERSION 2.8.3)
project(InstantMeshesForMaya)



set(MAYADIR "/usr/autodesk/maya")
set(MAYAINCLUDEDIR ${MAYADIR}/include)

include_directories(
  ${MAYAINCLUDEDIR}
)

set(SOURCEDIR "src")


set(SOURCES 
${SOURCEDIR}/polyModifierCmd.h 
${SOURCEDIR}/polyModifierCmd.cpp 
${SOURCEDIR}/polyModifierFty.h 
${SOURCEDIR}/polyModifierFty.cpp
${SOURCEDIR}/polyModifierNode.h
${SOURCEDIR}/polyModifierNode.cpp 

)

add_library(InstantMeshesForMaya OBJECT ${SOURCES} )
