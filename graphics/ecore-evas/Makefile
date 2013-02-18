# Created by: Stanislav Sedov <stas@FreeBSD.org>
# $FreeBSD: ports/graphics/ecore-evas/Makefile,v 1.17 2013/01/15 17:46:00 svnexp Exp $

PORTNAME=	evas
PORTVERSION=	1.7.5
CATEGORIES=	graphics enlightenment
MASTER_SITES=	http://download.enlightenment.fr/releases/ \
		LOCAL/gblach/e17/
PKGNAMEPREFIX=	ecore-
DISTNAME=	${PKGNAMEPREFIX}${PORTVERSION}

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	Enlightenment core abstraction library (evas module)

LICENSE=	BSD

DIST_SUBDIR=	e17
USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_EFL=	evas ecore libtool_hack
USE_EFL_ECORE=	input input_evas
USE_GNOME=	gnomehack pkgconfig
USE_LDCONFIG=	yes
BUILD_WRKSRC=	${WRKSRC}/src/lib/ecore_evas
INSTALL_WRKSRC=	${BUILD_WRKSRC}

.include "../../devel/ecore-main/Makefile.inc"

CONFIGURE_ARGS+=	--enable-ecore-evas \
			--enable-ecore-input \
			--enable-ecore-input_evas

OPTIONS_DEFINE=	BUFFER OPENGL SDL X11
OPTIONS_DEFAULT=BUFFER OPENGL X11
BUFFER_DESC=	Enable Buffer evas engine
OPENGL_DESC=	Enable OpenGL evas engine
SDL_DESC=	Enable SDL evas engine
X11_DESC=	Enable X11 evas engine

.include <bsd.port.options.mk>

LDFLAGS+=	-L${LOCALBASE}/lib

.if ${PORT_OPTIONS:MBUFFER}
CONFIGURE_ARGS+=	--enable-ecore-evas-software-buffer
USE_EFL_EVAS_ENGINES+=	buffer
.else
CONFIGURE_ARGS+=	--disable-ecore-evas-software-buffer
.endif

.if ${PORT_OPTIONS:MOPENGL}
CONFIGURE_ARGS+=	--enable-ecore-evas-opengl-x11
USE_EFL_EVAS_ENGINES+=	opengl
WITH_X=			yes
.else
CONFIGURE_ARGS+=	--disable-ecore-evas-opengl-x11
.endif

.if ${PORT_OPTIONS:MSDL}
CONFIGURE_ARGS+=	--enable-ecore-evas-software-sdl --enable-ecore-sdl
USE_EFL_EVAS_ENGINES+=	sdl
USE_EFL_ECORE+=	sdl
LDFLAGS+=		-lecore_sdl
.else
CONFIGURE_ARGS+=	--disable-ecore-evas-software-sdl --disable-ecore-sdl
.endif

.if ${PORT_OPTIONS:MX11}
CONFIGURE_ARGS+=	--enable-ecore-x
USE_EFL_ECORE+=		x11
USE_EFL_EVAS_ENGINES+=	x11
LDFLAGS+=		-lecore_x
.else
CONFIGURE_ARGS+=	--disable-ecore-x
.endif

LDFLAGS+=	-lecore -lecore_input -lecore_input_evas

post-patch:
	@${REINPLACE_CMD} -E \
		-e 's,\$$\(top_builddir\)/src/lib/ecore/\.libs,${LOCALBASE}/lib,'\
		-e 's,\$$\(top_builddir\)/src/lib/ecore_x/\.libs,${LOCALBASE}/lib,'\
		-e 's,\$$\(top_builddir\)/src/lib/ecore_sdl/\.libs,${LOCALBASE}/lib,'\
		-e 's,\$$\(top_builddir\)/src/lib/ecore_input/\.libs,${LOCALBASE}/lib,'\
		-e 's,\$$\(top_builddir\)/src/lib/ecore_input_evas/\.libs,${LOCALBASE}/lib,'\
		-e 's,\$$\(top_builddir\)/src/lib/ecore/libecore\.la,,'\
		-e 's,\$$\(top_builddir\)/src/lib/ecore_x/libecore_x\.la,,'\
		-e 's,\$$\(top_builddir\)/src/lib/ecore_sdl/libecore_sdl\.la,,'\
		-e 's,\$$\(top_builddir\)/src/lib/ecore_input/libecore_input\.la,,'\
		-e 's,\$$\(top_builddir\)/src/lib/ecore_input_evas/libecore_input_evas\.la,,'\
		${BUILD_WRKSRC}/Makefile.in

post-install:
	${INSTALL_DATA} ${WRKSRC}/ecore-evas.pc \
		${PREFIX}/libdata/pkgconfig/

.include <bsd.port.mk>
