# Created by: Yen-Ming Lee <leeym@FreeBSD.org>
# $FreeBSD: mail/autosig/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	autosig
PORTVERSION=	2.3
CATEGORIES=	mail
MASTER_SITES=	http://www.irendi.com/~msharpe/

MAINTAINER=	leeym@FreeBSD.org
COMMENT=	A random .signature generator with header file included

MAKEFILE=	makefile
PLIST_FILES=	bin/autosig
ALL_TARGET=	${PORTNAME}

NO_STAGE=	yes
pre-build:
	${REINPLACE_CMD} -e '/^CC/d' ${WRKSRC}/makefile

do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
