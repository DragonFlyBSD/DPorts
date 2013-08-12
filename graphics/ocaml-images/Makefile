# Created by: ijliao
# $FreeBSD: graphics/ocaml-images/Makefile 324318 2013-08-06 15:23:12Z johans $

PORTNAME=	images
PORTVERSION=	4.0.1
PORTEPOCH=	2
CATEGORIES=	graphics
MASTER_SITES=	https://bitbucket.org/camlspotter/camlimages/get/

PKGNAMEPREFIX=	ocaml-

DIST_SUBDIR=	ocaml-images
DISTNAME=	v${PORTVERSION}
WRKSRC =	${WRKDIR}/camlspotter-camlimages-c803efa9d5d3

MAINTAINER=	michael.grunewald@laposte.net
COMMENT=	Objective Caml image processing library

BUILD_DEPENDS=	${LOCALBASE}/share/aclocal/ocaml.m4:${PORTSDIR}/lang/ocaml-autoconf
BUILD_DEPENDS+=	omake:${PORTSDIR}/devel/omake

USE_OCAML=	yes
USE_OCAML_FINDLIB=	yes
USE_OCAML_WASH=	yes
USE_OCAML_LDCONFIG=	yes

OCAML_PKGDIRS=	camlimages
OCAML_LDLIBS=	${OCAML_SITELIBDIR}/camlimages


OMAKESUBS+=	-e s@%%INCLUDESPORTS%%@${LOCALBASE}/include@
OMAKESUBS+=	-e s@%%INCLUDESX11%%@${LOCALBASE}/include/X11@
OMAKESUBS+=	-e s@%%INCLUDESPNG%%@${LOCALBASE}/include/libpng15@
OMAKESUBS+=	-e s@%%LDFLAGSPORTS%%@-L${LOCALBASE}/lib@

OMAKE=		omake 'PREFIX=${PREFIX}'

MAKE_JOBS_UNSAFE=	yes

OPTIONS_DEFINE=	PNG JPEG TIFF XPM GIF FREETYPE GHOSTSCRIPT GTK2 DOCS
OPTIONS_DEFAULT=	PNG JPEG TIFF XPM GIT FREETYPE GHOSTSCRIPT

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MPNG}
LIB_DEPENDS+=	png15:${PORTSDIR}/graphics/png
CONFIGURE_ARGS+=	--with-png
.else
CONFIGURE_ARGS+=	--without-png
.endif

.if ${PORT_OPTIONS:MJPEG}
LIB_DEPENDS+=	jpeg.11:${PORTSDIR}/graphics/jpeg
CONFIGURE_ARGS+=	--with-jpeg
.else
CONFIGURE_ARGS+=	--without-jpeg
.endif

.if ${PORT_OPTIONS:MTIFF}
LIB_DEPENDS+=	tiff.4:${PORTSDIR}/graphics/tiff
CONFIGURE_ARGS+=	--with-tiff
.else
CONFIGURE_ARGS+=	--without-tiff
.endif

.if ${PORT_OPTIONS:MXPM}
USE_XORG=	xpm
CONFIGURE_ARGS+=	--with-xpm
.else
CONFIGURE_ARGS+=	--without-xpm
.endif

.if ${PORT_OPTIONS:MGIF}
LIB_DEPENDS+=	gif.5:${PORTSDIR}/graphics/giflib
CONFIGURE_ARGS+=	--with-gif
.else
CONFIGURE_ARGS+=	--without-gif
.endif

.if ${PORT_OPTIONS:MFREETYPE}
LIB_DEPENDS+=		ttf:${PORTSDIR}/print/freetype
CONFIGURE_ARGS+=	--with-freetype
.else
CONFIGURE_ARGS+=	--without-freetype
.endif

.if ${PORT_OPTIONS:MGHOSTSCRIPT}
USE_GHOSTSCRIPT=	yes
CONFIGURE_ARGS+=	--with-gs
.else
CONFIGURE_ARGS+=	--without-gs
.endif

.if ${PORT_OPTIONS:MGTK2}
CONFIGURE_ARGS+=	--with-lablgtk2
BUILD_DEPENDS+=	lablgtk2:${PORTSDIR}/x11-toolkits/ocaml-lablgtk2
RUN_DEPENDS+=	lablgtk2:${PORTSDIR}/x11-toolkits/ocaml-lablgtk2
.else
CONFIGURE_ARGS+=	--without-lablgtk2
.endif

do-configure:
	@(cd ${WRKSRC} && ${REINPLACE_CMD} ${OMAKESUBS} OMakefile)
	@(cd ${WRKSRC} && ${OMAKE} configure)

do-build:
	@(cd ${WRKSRC} && ${OMAKE})

do-install:
	@(cd ${WRKSRC} && ${OMAKE} install)

.include <bsd.port.mk>
