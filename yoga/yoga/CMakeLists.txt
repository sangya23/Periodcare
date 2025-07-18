cmake_minimum_required(VERSION 3.16)

project(periodcarefinal VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable automatic handling of UI, MOC, and resource files
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# Find Qt (prefer Qt 6, fallback to Qt 5)
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

# List all your source, header, and UI files
set(PROJECT_SOURCES
    main.cpp
    yoga.cpp
    yoga.h
    yoga.ui





    resource.qrc
)

# Define the executable
add_executable(periodcarefinal
    ${PROJECT_SOURCES}

)

# Link Qt libraries
target_link_libraries(periodcarefinal PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Platform-specific settings
set_target_properties(periodcarefinal PROPERTIES
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

if(${QT_VERSION} VERSION_LESS 6.1.0)
    set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.periodcarefinal)
    set_target_properties(periodcarefinal PROPERTIES
        ${BUNDLE_ID_OPTION}
        MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
        MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    )
endif()

# Install instructions (optional)
include(GNUInstallDirs)
install(TARGETS periodcarefinal
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# Finalize for Qt 6
if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(periodcarefinal)
endif()


