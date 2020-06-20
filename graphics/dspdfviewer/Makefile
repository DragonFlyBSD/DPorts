# $FreeBSD$

PORTNAME=	dspdfviewer
PORTVERSION=	1.15.1
DISTVERSIONPREFIX=	v
PORTREVISION=	30
CATEGORIES=	graphics

MAINTAINER=	fox@FreeBSD.org
COMMENT=	Dual-screen PDF viewer for LaTeX-beamer

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libboost_program_options.so:devel/boost-libs \
		libpoppler-qt5.so:graphics/poppler-qt5

USES=		cmake:insource pkgconfig qt:5
USE_QT=		core gui linguisttools widgets xml buildtools_build qmake_build
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	dannyedel

BUILD_WRKSRC=		${WRKSRC}/build
CONFIGURE_WRKSRC=	${WRKSRC}/build
INSTALL_WRKSRC=		${WRKSRC}/build

CMAKE_ARGS=	-DBuildTests=OFF \
		-DPOPPLER_LIBRARIES=${LOCALBASE}/lib/libpoppler-qt5.so

PLIST_FILES=	bin/dspdfviewer \
		man/man1/dspdfviewer.1.gz \
		share/applications/dspdfviewer.desktop

.include <bsd.port.pre.mk>

# Prepare for Qt5-5.15
CFLAGS+=	-Wno-deprecated

.include <bsd.port.post.mk>
