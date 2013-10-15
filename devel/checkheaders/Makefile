# Created by: bf <bf@FreeBSD.org>
# $FreeBSD: devel/checkheaders/Makefile 327722 2013-09-20 17:03:26Z bapt $

PORTNAME=	checkheaders
PORTVERSION=	1.0.1
CATEGORIES=	devel
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	bf@FreeBSD.org
COMMENT=	Checks headers in C/C++ programs

USE_ZIP=	yes
USE_GMAKE=	yes

PLIST_FILES=	bin/${PORTNAME}

LICENSE=	GPLv3

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e '/^CXX.*=/d' ${WRKSRC}/Makefile

do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
