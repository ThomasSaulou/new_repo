QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11



# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


INCLUDEPATH += -I/usr/include/opencv

LIBS +=-lopencv_shape -lopencv_stitching -lopencv_superres -lopencv_videostab -lopencv_aruco -lopencv_bgsegm -lopencv_bioinspired -lopencv_ccalib -lopencv_datasets -lopencv_dpm -lopencv_face -lopencv_freetype -lopencv_fuzzy -lopencv_hdf -lopencv_line_descriptor -lopencv_optflow -lopencv_video -lopencv_plot -lopencv_reg -lopencv_saliency -lopencv_stereo -lopencv_structured_light -lopencv_phase_unwrapping -lopencv_rgbd -lopencv_viz -lopencv_surface_matching -lopencv_text -lopencv_ximgproc -lopencv_calib3d -lopencv_features2d -lopencv_flann -lopencv_xobjdetect -lopencv_objdetect -lopencv_ml -lopencv_xphoto -lopencv_highgui -lopencv_videoio -lopencv_imgcodecs -lopencv_photo -lopencv_imgproc -lopencv_core


#INCLUDEPATH += /usr/include/eigen3

INCLUDEPATH += /usr/include/suitesparse
LIBS+= -lumfpack

SOURCES += \
    improcessing.cpp \
    interpolate.cpp \
    line.cpp \
    linePerso.cpp \
    main.cpp \
    mainwindow.cpp \
    mesh.cpp \
    mode_manager.cpp \
    my_qlabel.cpp \
    perspective_manipulation.cpp \
    seam.cpp \
    seamcarving.cpp \
    user_infos.cpp \
    vertex.cpp \
    window_handler.cpp



HEADERS += \
    improcessing.h \
    interpolate.h \
    line.h \
    linePerso.h \
    mainwindow.h \
    mesh.h \
    mode_manager.h \
    my_qlabel.h \
    original_image_infos.hpp \
    seam.h \
    user_infos.h \
    vertex.h \
    window_handler.h

FORMS += \
    mainwindow.ui \
    seam.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
