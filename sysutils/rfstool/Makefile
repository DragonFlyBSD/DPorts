# Created by: trevor
# $FreeBSD: sysutils/rfstool/Makefile 311049 2013-01-27 05:55:20Z tabthorpe $

PORTNAME=	rfstool
PORTVERSION=	0.14
CATEGORIES=	sysutils
MASTER_SITES=	${MASTER_SITE_NETBSD}
DISTNAME=	rfstool-0.14-source

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Read from a Reiser file system

PLIST_FILES=	bin/rfstool
USE_ZIP=	yes
WRKSRC=		${WRKDIR}/rfstool-0.14/RFSTOOL
MAKEFILE=	makefile.gcc3x

post-extract:
	@${REINPLACE_CMD} -e "s,g++,\$${CXX},g" ${WRKSRC}/${MAKEFILE}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/rfstool ${PREFIX}/bin

.include <bsd.port.mk>
