# Created by: trevor
# $FreeBSD: ports/sysutils/rfstool/Makefile,v 1.6 2013/01/27 06:41:41 svnexp Exp $

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
