PORTNAME=	flightgear
PORTVERSION=	2024.1.7
PORTREVISION=	1
CATEGORIES=	games

MAINTAINER=	martymac@FreeBSD.org
COMMENT=	FlightGear flight simulator
WWW=		https://www.flightgear.org/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libpng.so:graphics/png \
		libboost_thread.so:devel/boost-libs \
		libfltk.so:x11-toolkits/fltk \
		libfreetype.so:print/freetype2 \
		libosg.so:graphics/osg \
		libspeex.so:audio/speex \
		libspeexdsp.so:audio/speexdsp \
		libcurl.so:ftp/curl \
		libudev.so:devel/libudev-devd \
		libexpat.so:textproc/expat2 \
		libSimGearCore.so:devel/simgear
BUILD_DEPENDS=	${LOCALBASE}/lib/libplibsl.a:x11-toolkits/plib \
		${LOCALBASE}/include/linux/input.h:devel/evdev-proto \
		${LOCALBASE}/share/flightgear/version:games/flightgear-data
RUN_DEPENDS=	${LOCALBASE}/lib/libplibsl.a:x11-toolkits/plib \
		${LOCALBASE}/share/flightgear/version:games/flightgear-data

# Disable ninja, see https://sourceforge.net/p/flightgear/codetickets/2118/
USES=		cmake:noninja compiler:c++17-lang cpe dos2unix gl jpeg \
		openal:al,alut sqlite tar:bzip2 xorg

USE_GITLAB=	yes
GL_ACCOUNT=	flightgear

USE_XORG=	ice sm x11 xext xft xi xinerama xmu xt
USE_GL=		gl glew glu glut

DOS2UNIX_REGEX=	.*\.(c|h|cxx|cpp|hxx|hpp)
CMAKE_ARGS+=	-DSYSTEM_SQLITE:BOOL=ON \
		-DENABLE_HID_INPUT:BOOL=OFF \
		-DFG_DATA_DIR:PATH=${LOCALBASE}/share/${PORTNAME} \
		-DFGCOM_DATA_PATH:PATH=${DATADIR}
LDFLAGS+= -L${LOCALBASE}/lib -lpthread
LDFLAGS_i386=	-Wl,-znotext

OPTIONS_DEFINE=	DBUS QT5
OPTIONS_DEFAULT=	DBUS QT5
DBUS_LIB_DEPENDS=	libdbus-1.so:devel/dbus
DBUS_USES=	pkgconfig
DBUS_CMAKE_ON=	-DUSE_DBUS:BOOL=ON
DBUS_CMAKE_OFF=	-DUSE_DBUS:BOOL=OFF
QT5_CMAKE_ON=	-DENABLE_QT:BOOL=ON -DCHECK_FOR_QT6:BOOL=OFF
QT5_CMAKE_OFF=	-DENABLE_QT:BOOL=OFF
QT5_USES=	qt:5
QT5_USE=	QT=core,buildtools,linguisttools,gui,declarative,network,qmake,widgets,svg

DPMSG= ${WRKDIR}/dports-message
post-patch:
# Avoid conflict with C++20 <version> - used version file is flightgear-version
	@${RM} ${WRKSRC}/version

.include <bsd.port.pre.mk>

.if ${COMPILER_TYPE} == "clang"
LDFLAGS_i386+=	-Wl,--no-check-dynamic-relocations
.endif

.if !defined(DPORTS_BUILDER) && defined(PACKAGE_BUILDING)
RUN_DEPENDS:=	${RUN_DEPENDS:N*flightgear-data}
PKGMESSAGE=	${DPMSG}
.endif

dfly-patch:
	${REINPLACE_CMD} -e '/MATCHES/s@\(FreeBSD\)"@\1|DragonFly"@g'	\
			 -e 's@MATCHES "Linux|FreeBSD|OpenBSD@&|DragonFly@g' \
		${WRKSRC}/CMakeModules/SetupFGFSLibraries.cmake		\
		${WRKSRC}/CMakeLists.txt				\
		${WRKSRC}/src/Main/CMakeLists.txt
	-${REINPLACE_CMD} -e '/MATCHES/s@\(FreeBSD\)"@\1|DragonFly"@g'	\
		${WRKSRC}/CMakeLists.txt.c++20
	${ECHO_MSG} 'target_link_libraries(fgfs "-L/usr/local/lib -lX11")' >> \
		${WRKSRC}/src/Main/CMakeLists.txt
.if !defined(DPORTS_BUILDER) && defined(PACKAGE_BUILDING)
	@${CP} ${.CURDIR}/pkg-message ${DPMSG}
	@${ECHO} "########################################################" >> ${DPMSG}
	@${ECHO} "# Build games/flightgear-data from source to play this #" >> ${DPMSG}
	@${ECHO} "########################################################" >> ${DPMSG}
.endif

.include <bsd.port.post.mk>
