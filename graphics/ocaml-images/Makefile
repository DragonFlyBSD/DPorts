# Created by: ijliao
# $FreeBSD: ports/graphics/ocaml-images/Makefile,v 1.45 2013/02/05 15:47:07 svnexp Exp $

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

OPTIONS=	PNG "Enable PNG support" on \
		JPEG "Enable JPEG support" on \
		TIFF "Enable TIFF support" on \
		XPM "Enable XPM support" on \
		GIF "Enable GIF support" on \
		FREETYPE "Enable text rendering via freetype" on \
		GS "Enable PostScript support via Ghostscript" on \
		GTK2 "Enable LablGTK2 support" off

.include <bsd.port.options.mk>

.if !defined(WITHOUT_PNG)
LIB_DEPENDS+=	png15:${PORTSDIR}/graphics/png
.endif

.if !defined(WITHOUT_JPEG)
LIB_DEPENDS+=	jpeg.11:${PORTSDIR}/graphics/jpeg
.endif

.if !defined(WITHOUT_TIFF)
LIB_DEPENDS+=	tiff.4:${PORTSDIR}/graphics/tiff
.endif

.if !defined(WITHOUT_XPM)
USE_XORG=	xpm
.endif

.if !defined(WITHOUT_GIF)
LIB_DEPENDS+=	gif.5:${PORTSDIR}/graphics/giflib
.endif

.if !defined(WITHOUT_FREETYPE)
USE_FREETYPE=	yes
.endif

.if defined(WITH_GS)
USE_GHOSTSCRIPT=	yes
.endif

.if defined(WITH_GTK2)
BUILD_DEPENDS+=	lablgtk2:${PORTSDIR}/x11-toolkits/ocaml-lablgtk2
RUN_DEPENDS+=	lablgtk2:${PORTSDIR}/x11-toolkits/ocaml-lablgtk2
.endif

do-configure:
	@(cd ${WRKSRC} && ${REINPLACE_CMD} ${OMAKESUBS} OMakefile)
	@(cd ${WRKSRC} && ${OMAKE} configure)

do-build:
	@(cd ${WRKSRC} && ${OMAKE})

do-install:
	@(cd ${WRKSRC} && ${OMAKE} install)

.include <bsd.port.mk>
