# Created by: Li-Wen Hsu <lwhsu@FreeBSD.org>
# $FreeBSD: ports/print/pdfcube/Makefile,v 1.20 2013/01/31 14:01:31 svnexp Exp $

PORTNAME=	pdfcube
DISTVERSION=	0.0.4-beta
PORTREVISION=	3
CATEGORIES=	print
MASTER_SITES=	http://code.100allora.it/releases/pdfcube/

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	An OpenGL presentation viewer on a spinning cube

LIB_DEPENDS=	gtkglext:${PORTSDIR}/x11-toolkits/gtkglext \
		poppler-glib:${PORTSDIR}/graphics/poppler-glib \
		boost_program_options:${PORTSDIR}/devel/boost-libs

USE_GL=		glut
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--libdir=${LOCALBASE}/lib --includedir=${LOCALBASE}/include
WRKSRC=	${WRKDIR}/${PORTNAME}-${PORTVERSION:R}

PLIST_FILES=	bin/pdfcube

post-patch:
	${REINPLACE_CMD} -e \
		's|BOOSTLIBDIR/libboost_program_options\*\.{so,a}\*|BOOSTLIBDIR/libboost_program_options.so|' \
		${WRKSRC}/configure

.include <bsd.port.mk>
