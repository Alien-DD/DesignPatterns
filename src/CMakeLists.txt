
set(PROJECT_TARGET_NAME ${PROJECT_NAME})

message(STATUS "source file name = ${PROJECT_SOURCE_DIR}")
message(STATUS "project target name = ${PROJECT_TARGET_NAME}")

include_directories(
    ${PROJECT_SOURCE_DIR}/src
)

set(DECORATOR
    structure/decorator/Notifier.cpp
    structure/decorator/BaseDecorator.cpp
    structure/decorator/QQ.cpp
    structure/decorator/SMS.cpp
    structure/decorator/WeChat.cpp
)

add_library(myproject OBJECT
    ${DECORATOR}
)

add_executable(${PROJECT_TARGET_NAME}
    $<TARGET_OBJECTS:myproject>
    main.cpp
)