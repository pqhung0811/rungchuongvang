cmake_minimum_required(VERSION 3.5)

project(RCVproject VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core )
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core )
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Sql )
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Sql )
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Network )
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Network )
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Test )
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Test )

set(PROJECT_SOURCES
        main.cpp
        scene/mainwindow.cpp
        scene/mainwindow.h
        scene/mainwindow.ui
        scene/register.cpp
        scene/register.h
        scene/register.ui
        scene/homescene.cpp
        scene/homescene.h
        scene/homescene.ui
        scene/rankscene.cpp
        scene/rankscene.h
        scene/rankscene.ui
        scene/listroomscene.cpp
        scene/listroomscene.h
        scene/listroomscene.ui
        scene/roomscene.h
        scene/roomscene.cpp
        scene/roomscene.ui
        scene/gamescene.h
        scene/gamescene.cpp
        scene/gamescene.ui
        entity/user.h
        entity/user.cpp
        entity/room.h
        entity/room.cpp
        entity/question.h
        entity/question.cpp
        entity/answer.h
        entity/answer.cpp
        api/connection.h
        api/connection.cpp
        api/userapi.h
        api/userapi.cpp
        api/roomapi.h
        api/roomapi.cpp
        api/questionapi.h
        api/questionapi.cpp
        api/answerapi.h
        api/answerapi.cpp
#        controller/usercontroller.h
#        controller/usercontroller.cpp
#        controller/roomcontroller.h
#        controller/roomcontroller.cpp
#        controller/questioncontroller.h
#        controller/questioncontroller.cpp
#        controller/answercontroller.h
#        controller/answercontroller.cpp
        controller/logincontroller.h
        controller/logincontroller.cpp
        controller/logoutcontroller.h
        controller/logoutcontroller.cpp
        controller/registercontroller.h
        controller/registercontroller.cpp
        controller/createroomcontroller.h
        controller/createroomcontroller.cpp
        controller/requestjoinroomcontroller.h
        controller/requestjoinroomcontroller.cpp
        server/servermain.h
        server/servermain.cpp
        server/core/servercore.h
        server/core/servercore.cpp
        server/core/requestprocessing.h
        server/core/requestprocessing.cpp
        server/core/processor/requestprocessor.h
        server/core/processor/requestprocessor.cpp
        client/clientmain.h
        client/clientmain.cpp
        client/core/clientcore.h
        client/core/clientcore.cpp
        message/message.h
        message/message.cpp
        message/login/loginclientmessage.h
        message/login/loginclientmessage.cpp
        message/login/loginservermessage.h
        message/login/loginservermessage.cpp
        message/clientmessage.h
        message/clientmessage.cpp
        message/servermessage.h
        message/servermessage.cpp
        message/logout/logoutclientmessage.h
        message/logout/logoutclientmessage.cpp
        message/logout/logoutservermessage.h
        message/logout/logoutservermessage.cpp
        message/register/registerclientmessage.h
        message/register/registerclientmessage.cpp
        message/register/registerservermessage.h
        message/register/registerservermessage.cpp
        message/createroom/createroomclientmessage.h
        message/createroom/createroomclientmessage.cpp
        message/createroom/createroomservermessage.h
        message/createroom/createroomservermessage.cpp
        message/requestjoinroom/requestjoinroomclientmessage.h
        message/requestjoinroom/requestjoinroomclientmessage.cpp
        message/requestjoinroom/requestjoinroomservermessage.h
        message/requestjoinroom/requestjoinroomservermessage.cpp
        protocol/requestbody.h
        protocol/requestbody.cpp
        protocol/responsebody.h
        protocol/responsebody.cpp
        protocol/command.h
        protocol/command.cpp
        protocol/attachment.h
        protocol/attachment.cpp
        protocol/statuscode.h
        protocol/statuscode.cpp
        test/userapitest.h
        test/userapitest.cpp
        resource.qrc
)

include_directories(entity)
include_directories(scene)
include_directories(api)
include_directories(controller)
include_directories(server)
include_directories(client)
include_directories(message)
include_directories(protocol)
include_directories(test)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(RCVproject
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET RCVproject APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(RCVproject SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(RCVproject
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(RCVproject PRIVATE
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Core
    Qt${QT_VERSION_MAJOR}::Sql
    Qt${QT_VERSION_MAJOR}::Network
    Qt${QT_VERSION_MAJOR}::Test
)

set_target_properties(RCVproject PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS RCVproject
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(RCVproject)
endif()
