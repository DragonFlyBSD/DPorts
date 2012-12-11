# New ports collection makefile for:	checkheaders
# Date created:		August 18, 2010
# Whom:	      		bf <bf@FreeBSD.org>
#
# $FreeBSD: ports/devel/checkheaders/Makefile,v 1.3 2012/11/17 05:55:37 svnexp Exp $
#

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

post-patch:
	@${REINPLACE_CMD} -e '/^CXX.*=/d' ${WRKSRC}/Makefile

do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
