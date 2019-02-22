#############################################################################
# Makefile for building: FYP2019
# Generated by qmake (2.01a) (Qt 4.8.7) on: Mon Feb 18 17:54:12 2019
# Project:  FYP2019.pro
# Template: app
# Command: /usr/lib/x86_64-linux-gnu/qt4/bin/qmake -spec /usr/share/qt4/mkspecs/linux-g++-64 CONFIG+=debug -o Makefile FYP2019.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_DEPRECATED_WARNINGS -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -m64 -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -m64 -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++-64 -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4 -I. -I.
LINK          = g++
LFLAGS        = -m64
LIBS          = $(SUBLIBS)  -L/usr/lib/x86_64-linux-gnu -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/lib/x86_64-linux-gnu/qt4/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		home.cpp \
		gloabal.cpp \
		selection.cpp \
		visualisation.cpp \
		modification.cpp \
		addaction.cpp \
		removeaction.cpp \
		replaceaction.cpp \
		rescheduleaction.cpp \
		changeaction.cpp \
		access.cpp \
		window.cpp \
		beforeafter.cpp \
		fileclass.cpp \
		listofactions.cpp \
		userquestions.cpp \
		comparison.cpp \
		fileclasspf.cpp moc_home.cpp \
		moc_selection.cpp \
		moc_visualisation.cpp \
		moc_modification.cpp \
		moc_addaction.cpp \
		moc_removeaction.cpp \
		moc_replaceaction.cpp \
		moc_rescheduleaction.cpp \
		moc_changeaction.cpp \
		moc_access.cpp \
		moc_window.cpp \
		moc_beforeafter.cpp \
		moc_fileclass.cpp \
		moc_listofactions.cpp \
		moc_userquestions.cpp \
		moc_comparison.cpp \
		moc_fileclasspf.cpp
OBJECTS       = main.o \
		home.o \
		gloabal.o \
		selection.o \
		visualisation.o \
		modification.o \
		addaction.o \
		removeaction.o \
		replaceaction.o \
		rescheduleaction.o \
		changeaction.o \
		access.o \
		window.o \
		beforeafter.o \
		fileclass.o \
		listofactions.o \
		userquestions.o \
		comparison.o \
		fileclasspf.o \
		moc_home.o \
		moc_selection.o \
		moc_visualisation.o \
		moc_modification.o \
		moc_addaction.o \
		moc_removeaction.o \
		moc_replaceaction.o \
		moc_rescheduleaction.o \
		moc_changeaction.o \
		moc_access.o \
		moc_window.o \
		moc_beforeafter.o \
		moc_fileclass.o \
		moc_listofactions.o \
		moc_userquestions.o \
		moc_comparison.o \
		moc_fileclasspf.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		FYP2019.pro
QMAKE_TARGET  = FYP2019
DESTDIR       = 
TARGET        = FYP2019

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_home.h ui_selection.h ui_visualisation.h ui_modification.h ui_addaction.h ui_removeaction.h ui_replaceaction.h ui_rescheduleaction.h ui_changeaction.h ui_access.h ui_window.h ui_beforeafter.h ui_fileclass.h ui_listofactions.h ui_userquestions.h ui_comparison.h ui_fileclasspf.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)
	{ test -n "$(DESTDIR)" && DESTDIR="$(DESTDIR)" || DESTDIR=.; } && test $$(gdb --version | sed -e 's,[^0-9][^0-9]*\([0-9]\)\.\([0-9]\).*,\1\2,;q') -gt 72 && gdb --nx --batch --quiet -ex 'set confirm off' -ex "save gdb-index $$DESTDIR" -ex quit '$(TARGET)' && test -f $(TARGET).gdb-index && objcopy --add-section '.gdb_index=$(TARGET).gdb-index' --set-section-flags '.gdb_index=readonly' '$(TARGET)' '$(TARGET)' && rm -f $(TARGET).gdb-index || true

Makefile: FYP2019.pro  /usr/share/qt4/mkspecs/linux-g++-64/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/x86_64-linux-gnu/libQtGui.prl \
		/usr/lib/x86_64-linux-gnu/libQtCore.prl
	$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++-64 CONFIG+=debug -o Makefile FYP2019.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/debug.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/shared.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/x86_64-linux-gnu/libQtGui.prl:
/usr/lib/x86_64-linux-gnu/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++-64 CONFIG+=debug -o Makefile FYP2019.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/FYP20191.0.0 || $(MKDIR) .tmp/FYP20191.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/FYP20191.0.0/ && $(COPY_FILE) --parents home.h gloabal.h selection.h visualisation.h modification.h addaction.h removeaction.h replaceaction.h rescheduleaction.h changeaction.h access.h window.h beforeafter.h fileclass.h listofactions.h userquestions.h comparison.h fileclasspf.h .tmp/FYP20191.0.0/ && $(COPY_FILE) --parents main.cpp home.cpp gloabal.cpp selection.cpp visualisation.cpp modification.cpp addaction.cpp removeaction.cpp replaceaction.cpp rescheduleaction.cpp changeaction.cpp access.cpp window.cpp beforeafter.cpp fileclass.cpp listofactions.cpp userquestions.cpp comparison.cpp fileclasspf.cpp .tmp/FYP20191.0.0/ && $(COPY_FILE) --parents home.ui selection.ui visualisation.ui modification.ui addaction.ui removeaction.ui replaceaction.ui rescheduleaction.ui changeaction.ui access.ui window.ui beforeafter.ui fileclass.ui listofactions.ui userquestions.ui comparison.ui fileclasspf.ui .tmp/FYP20191.0.0/ && (cd `dirname .tmp/FYP20191.0.0` && $(TAR) FYP20191.0.0.tar FYP20191.0.0 && $(COMPRESS) FYP20191.0.0.tar) && $(MOVE) `dirname .tmp/FYP20191.0.0`/FYP20191.0.0.tar.gz . && $(DEL_FILE) -r .tmp/FYP20191.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_home.cpp moc_selection.cpp moc_visualisation.cpp moc_modification.cpp moc_addaction.cpp moc_removeaction.cpp moc_replaceaction.cpp moc_rescheduleaction.cpp moc_changeaction.cpp moc_access.cpp moc_window.cpp moc_beforeafter.cpp moc_fileclass.cpp moc_listofactions.cpp moc_userquestions.cpp moc_comparison.cpp moc_fileclasspf.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_home.cpp moc_selection.cpp moc_visualisation.cpp moc_modification.cpp moc_addaction.cpp moc_removeaction.cpp moc_replaceaction.cpp moc_rescheduleaction.cpp moc_changeaction.cpp moc_access.cpp moc_window.cpp moc_beforeafter.cpp moc_fileclass.cpp moc_listofactions.cpp moc_userquestions.cpp moc_comparison.cpp moc_fileclasspf.cpp
moc_home.cpp: selection.h \
		visualisation.h \
		modification.h \
		addaction.h \
		fileclass.h \
		listofactions.h \
		comparison.h \
		removeaction.h \
		replaceaction.h \
		rescheduleaction.h \
		window.h \
		beforeafter.h \
		changeaction.h \
		access.h \
		userquestions.h \
		home.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) home.h -o moc_home.cpp

moc_selection.cpp: visualisation.h \
		modification.h \
		addaction.h \
		fileclass.h \
		listofactions.h \
		comparison.h \
		removeaction.h \
		replaceaction.h \
		rescheduleaction.h \
		window.h \
		beforeafter.h \
		changeaction.h \
		access.h \
		userquestions.h \
		selection.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) selection.h -o moc_selection.cpp

moc_visualisation.cpp: modification.h \
		addaction.h \
		fileclass.h \
		listofactions.h \
		comparison.h \
		removeaction.h \
		replaceaction.h \
		rescheduleaction.h \
		window.h \
		beforeafter.h \
		changeaction.h \
		access.h \
		userquestions.h \
		visualisation.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) visualisation.h -o moc_visualisation.cpp

moc_modification.cpp: addaction.h \
		fileclass.h \
		listofactions.h \
		comparison.h \
		removeaction.h \
		replaceaction.h \
		rescheduleaction.h \
		window.h \
		beforeafter.h \
		changeaction.h \
		access.h \
		modification.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) modification.h -o moc_modification.cpp

moc_addaction.cpp: fileclass.h \
		listofactions.h \
		comparison.h \
		addaction.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) addaction.h -o moc_addaction.cpp

moc_removeaction.cpp: fileclass.h \
		comparison.h \
		removeaction.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) removeaction.h -o moc_removeaction.cpp

moc_replaceaction.cpp: comparison.h \
		replaceaction.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) replaceaction.h -o moc_replaceaction.cpp

moc_rescheduleaction.cpp: window.h \
		beforeafter.h \
		rescheduleaction.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) rescheduleaction.h -o moc_rescheduleaction.cpp

moc_changeaction.cpp: changeaction.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) changeaction.h -o moc_changeaction.cpp

moc_access.cpp: fileclass.h \
		access.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) access.h -o moc_access.cpp

moc_window.cpp: window.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) window.h -o moc_window.cpp

moc_beforeafter.cpp: beforeafter.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) beforeafter.h -o moc_beforeafter.cpp

moc_fileclass.cpp: fileclass.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) fileclass.h -o moc_fileclass.cpp

moc_listofactions.cpp: listofactions.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) listofactions.h -o moc_listofactions.cpp

moc_userquestions.cpp: comparison.h \
		rescheduleaction.h \
		window.h \
		beforeafter.h \
		userquestions.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) userquestions.h -o moc_userquestions.cpp

moc_comparison.cpp: comparison.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) comparison.h -o moc_comparison.cpp

moc_fileclasspf.cpp: fileclasspf.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) fileclasspf.h -o moc_fileclasspf.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_home.h ui_selection.h ui_visualisation.h ui_modification.h ui_addaction.h ui_removeaction.h ui_replaceaction.h ui_rescheduleaction.h ui_changeaction.h ui_access.h ui_window.h ui_beforeafter.h ui_fileclass.h ui_listofactions.h ui_userquestions.h ui_comparison.h ui_fileclasspf.h
compiler_uic_clean:
	-$(DEL_FILE) ui_home.h ui_selection.h ui_visualisation.h ui_modification.h ui_addaction.h ui_removeaction.h ui_replaceaction.h ui_rescheduleaction.h ui_changeaction.h ui_access.h ui_window.h ui_beforeafter.h ui_fileclass.h ui_listofactions.h ui_userquestions.h ui_comparison.h ui_fileclasspf.h
ui_home.h: home.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic home.ui -o ui_home.h

ui_selection.h: selection.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic selection.ui -o ui_selection.h

ui_visualisation.h: visualisation.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic visualisation.ui -o ui_visualisation.h

ui_modification.h: modification.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic modification.ui -o ui_modification.h

ui_addaction.h: addaction.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic addaction.ui -o ui_addaction.h

ui_removeaction.h: removeaction.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic removeaction.ui -o ui_removeaction.h

ui_replaceaction.h: replaceaction.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic replaceaction.ui -o ui_replaceaction.h

ui_rescheduleaction.h: rescheduleaction.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic rescheduleaction.ui -o ui_rescheduleaction.h

ui_changeaction.h: changeaction.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic changeaction.ui -o ui_changeaction.h

ui_access.h: access.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic access.ui -o ui_access.h

ui_window.h: window.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic window.ui -o ui_window.h

ui_beforeafter.h: beforeafter.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic beforeafter.ui -o ui_beforeafter.h

ui_fileclass.h: fileclass.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic fileclass.ui -o ui_fileclass.h

ui_listofactions.h: listofactions.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic listofactions.ui -o ui_listofactions.h

ui_userquestions.h: userquestions.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic userquestions.ui -o ui_userquestions.h

ui_comparison.h: comparison.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic comparison.ui -o ui_comparison.h

ui_fileclasspf.h: fileclasspf.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic fileclasspf.ui -o ui_fileclasspf.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

main.o: main.cpp home.h \
		selection.h \
		visualisation.h \
		modification.h \
		addaction.h \
		fileclass.h \
		listofactions.h \
		comparison.h \
		removeaction.h \
		replaceaction.h \
		rescheduleaction.h \
		window.h \
		beforeafter.h \
		changeaction.h \
		access.h \
		userquestions.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

home.o: home.cpp home.h \
		selection.h \
		visualisation.h \
		modification.h \
		addaction.h \
		fileclass.h \
		listofactions.h \
		comparison.h \
		removeaction.h \
		replaceaction.h \
		rescheduleaction.h \
		window.h \
		beforeafter.h \
		changeaction.h \
		access.h \
		userquestions.h \
		ui_home.h \
		gloabal.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o home.o home.cpp

gloabal.o: gloabal.cpp gloabal.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o gloabal.o gloabal.cpp

selection.o: selection.cpp selection.h \
		visualisation.h \
		modification.h \
		addaction.h \
		fileclass.h \
		listofactions.h \
		comparison.h \
		removeaction.h \
		replaceaction.h \
		rescheduleaction.h \
		window.h \
		beforeafter.h \
		changeaction.h \
		access.h \
		userquestions.h \
		ui_selection.h \
		gloabal.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o selection.o selection.cpp

visualisation.o: visualisation.cpp visualisation.h \
		modification.h \
		addaction.h \
		fileclass.h \
		listofactions.h \
		comparison.h \
		removeaction.h \
		replaceaction.h \
		rescheduleaction.h \
		window.h \
		beforeafter.h \
		changeaction.h \
		access.h \
		userquestions.h \
		ui_visualisation.h \
		gloabal.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o visualisation.o visualisation.cpp

modification.o: modification.cpp modification.h \
		addaction.h \
		fileclass.h \
		listofactions.h \
		comparison.h \
		removeaction.h \
		replaceaction.h \
		rescheduleaction.h \
		window.h \
		beforeafter.h \
		changeaction.h \
		access.h \
		ui_modification.h \
		gloabal.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o modification.o modification.cpp

addaction.o: addaction.cpp addaction.h \
		fileclass.h \
		listofactions.h \
		comparison.h \
		ui_addaction.h \
		gloabal.h \
		newaction.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o addaction.o addaction.cpp

removeaction.o: removeaction.cpp removeaction.h \
		fileclass.h \
		comparison.h \
		ui_removeaction.h \
		newaction.h \
		gloabal.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o removeaction.o removeaction.cpp

replaceaction.o: replaceaction.cpp replaceaction.h \
		comparison.h \
		ui_replaceaction.h \
		gloabal.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o replaceaction.o replaceaction.cpp

rescheduleaction.o: rescheduleaction.cpp rescheduleaction.h \
		window.h \
		beforeafter.h \
		ui_rescheduleaction.h \
		gloabal.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o rescheduleaction.o rescheduleaction.cpp

changeaction.o: changeaction.cpp changeaction.h \
		ui_changeaction.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o changeaction.o changeaction.cpp

access.o: access.cpp access.h \
		fileclass.h \
		ui_access.h \
		newaction.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o access.o access.cpp

window.o: window.cpp window.h \
		ui_window.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o window.o window.cpp

beforeafter.o: beforeafter.cpp beforeafter.h \
		ui_beforeafter.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o beforeafter.o beforeafter.cpp

fileclass.o: fileclass.cpp fileclass.h \
		ui_fileclass.h \
		gloabal.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o fileclass.o fileclass.cpp

listofactions.o: listofactions.cpp listofactions.h \
		ui_listofactions.h \
		gloabal.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o listofactions.o listofactions.cpp

userquestions.o: userquestions.cpp userquestions.h \
		comparison.h \
		rescheduleaction.h \
		window.h \
		beforeafter.h \
		ui_userquestions.h \
		gloabal.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o userquestions.o userquestions.cpp

comparison.o: comparison.cpp comparison.h \
		ui_comparison.h \
		gloabal.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o comparison.o comparison.cpp

fileclasspf.o: fileclasspf.cpp fileclasspf.h \
		ui_fileclasspf.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o fileclasspf.o fileclasspf.cpp

moc_home.o: moc_home.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_home.o moc_home.cpp

moc_selection.o: moc_selection.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_selection.o moc_selection.cpp

moc_visualisation.o: moc_visualisation.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_visualisation.o moc_visualisation.cpp

moc_modification.o: moc_modification.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_modification.o moc_modification.cpp

moc_addaction.o: moc_addaction.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_addaction.o moc_addaction.cpp

moc_removeaction.o: moc_removeaction.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_removeaction.o moc_removeaction.cpp

moc_replaceaction.o: moc_replaceaction.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_replaceaction.o moc_replaceaction.cpp

moc_rescheduleaction.o: moc_rescheduleaction.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_rescheduleaction.o moc_rescheduleaction.cpp

moc_changeaction.o: moc_changeaction.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_changeaction.o moc_changeaction.cpp

moc_access.o: moc_access.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_access.o moc_access.cpp

moc_window.o: moc_window.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_window.o moc_window.cpp

moc_beforeafter.o: moc_beforeafter.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_beforeafter.o moc_beforeafter.cpp

moc_fileclass.o: moc_fileclass.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_fileclass.o moc_fileclass.cpp

moc_listofactions.o: moc_listofactions.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_listofactions.o moc_listofactions.cpp

moc_userquestions.o: moc_userquestions.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_userquestions.o moc_userquestions.cpp

moc_comparison.o: moc_comparison.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_comparison.o moc_comparison.cpp

moc_fileclasspf.o: moc_fileclasspf.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_fileclasspf.o moc_fileclasspf.cpp

####### Install

install_target: first FORCE
	@$(CHK_DIR_EXISTS) $(INSTALL_ROOT)/opt/FYP2019/bin/ || $(MKDIR) $(INSTALL_ROOT)/opt/FYP2019/bin/ 
	-$(INSTALL_PROGRAM) "$(QMAKE_TARGET)" "$(INSTALL_ROOT)/opt/FYP2019/bin/$(QMAKE_TARGET)"

uninstall_target:  FORCE
	-$(DEL_FILE) "$(INSTALL_ROOT)/opt/FYP2019/bin/$(QMAKE_TARGET)"
	-$(DEL_DIR) $(INSTALL_ROOT)/opt/FYP2019/bin/ 


install:  install_target  FORCE

uninstall: uninstall_target   FORCE

FORCE:

