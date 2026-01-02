cmake_minimum_required(VERSION 3.19)
project(Student_Management_System LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(Student_Management_System
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    addstudentdialog.h addstudentdialog.cpp addstudentdialog.ui
    displaystudentdialog.h displaystudentdialog.cpp displaystudentdialog.ui
    updatestudentdialog.h updatestudentdialog.cpp updatestudentdialog.ui
    searchbynamedialog.h searchbynamedialog.cpp searchbynamedialog.ui
    searchbyrolldialog.h searchbyrolldialog.cpp searchbyrolldialog.ui
    searchbycgpadialog.h searchbycgpadialog.cpp searchbycgpadialog.ui
    sortbyrolldialog.h sortbyrolldialog.cpp sortbyrolldialog.ui

    StudentData.h
    StudentData.h
    linkedlist.h linkedlist.cpp
    markattendancedialog.h markattendancedialog.cpp markattendancedialog.ui
    searchbyrolldialog.h searchbyrolldialog.cpp searchbyrolldialog.ui
    searchbycgpadialog.h searchbycgpadialog.cpp searchbycgpadialog.ui
    sortbyrolldialog.h sortbyrolldialog.cpp sortbyrolldialog.ui
    deletestudentdialog.h deletestudentdialog.cpp deletestudentdialog.ui

)

target_link_libraries(Student_Management_System
    PRIVATE
        Qt::Core
        Qt::Widgets
)

include(GNUInstallDirs)

install(TARGETS Student_Management_System
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET Student_Management_System
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
