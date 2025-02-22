cmake_minimum_required(VERSION 3.5)

project(FruitNinjaViewer LANGUAGES CXX)

# Enable Qt's MOC/UIC/RCC processing
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Find Qt6 or Qt5 as needed
find_package(Qt6 COMPONENTS Core Widgets WebEngineWidgets REQUIRED)
# or, if you have Qt5, switch to:
# find_package(Qt5 COMPONENTS Core Widgets WebEngineWidgets REQUIRED)

# Add the executable
add_executable(FruitNinjaViewer main.cpp)

# Link the required Qt libraries
target_link_libraries(FruitNinjaViewer PRIVATE Qt6::Core Qt6::Widgets Qt6::WebEngineWidgets)

