
macro(add_sources target)
    foreach(file ${ARGN})
        get_filename_component(path "${file}" DIRECTORY)
        if (path STREQUAL "")
            string(REPLACE "/" "\\" group "Source Files")
        else()
            string(REPLACE "/" "\\" group "Source Files/${path}")
        endif()
        source_group("${group}" FILES "${file}")
    endforeach()
endmacro()

macro(mingw_install_libraries)
    if(MINGW)
        if(NOT CMAKE_BUILD_TYPE OR CMAKE_BUILD_TYPE STREQUAL "")
            set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Build Type" FORCE)
            message(WARNING "CMAKE_BUILD_TYPE was not set, defaulting to '${CMAKE_BUILD_TYPE}'.")
        endif()

        get_filename_component(gccdir "${CMAKE_CXX_COMPILER}" DIRECTORY)
        foreach(file libgcc_s_dw2-1.dll libgcc_s_seh-1.dll libwinpthread-1.dll libstdc++-6.dll)
            if(EXISTS "${gccdir}/${file}" AND NOT EXISTS "${CMAKE_BINARY_DIR}/${file}")
                message(STATUS "Installing dependency '${file}'")
                configure_file("${gccdir}/${file}" "${CMAKE_BINARY_DIR}/${file}" COPYONLY)
            endif()
        endforeach()
    endif()
endmacro()
