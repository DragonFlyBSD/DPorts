# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: graphics/libaux/Makefile 321957 2013-06-28 11:51:05Z bapt $

PORTNAME=	libaux
PORTVERSION=	1.0
PORTREVISION=	5
CATEGORIES=	graphics
MASTER_SITES=	http://www.freebsdbrasil.com.br/~jmelo/
DISTFILES=	libaux${EXTRACT_SUFX} libtk${EXTRACT_SUFX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Nano Window Toolkit and Auxiliary Library for OpenGL

WRKSRC=		${WRKDIR}/${PORTNAME}

USES=		imake
USE_GL=		glut
MAKE_JOBS_UNSAFE=	yes

do-install:
	${INSTALL_DATA} ${WRKSRC}/libaux.a ${PREFIX}/lib
	${INSTALL_DATA} ${WRKSRC}/aux.h ${PREFIX}/include/GL
	${INSTALL_DATA} ${WRKSRC}/../libtk/tk.h ${PREFIX}/include/GL

.include <bsd.port.mk>
