# Created by: Petr Holub <hopet@ics.muni.cz>
# $FreeBSD: ports/devel/jrtplib/Makefile,v 1.20 2012/12/01 01:18:03 svnexp Exp $

PORTNAME=	jrtplib
PORTVERSION=	3.9.1
CATEGORIES=	devel
MASTER_SITES=	http://research.edm.uhasselt.be/jori/jrtplib/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Object-oriented RTP library written in C++

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.MIT

USE_BZIP2=	yes
USE_CMAKE=	yes
USE_LDCONFIG=	yes
MAKE_JOBS_SAFE=	yes

PLIST_SUB=	JRTPLIB_VER="${PORTVERSION}"

post-patch:
	@${REINPLACE_CMD} -e \
		'/pkgconfig/s|$${LIBRARY_INSTALL_DIR}|$${CMAKE_INSTALL_PREFIX}/libdata|' ${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>
