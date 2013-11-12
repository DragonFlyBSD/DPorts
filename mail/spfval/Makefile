# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: mail/spfval/Makefile 331494 2013-10-24 15:11:40Z ehaupt $

PORTNAME=	spfval
PORTVERSION=	0.0.1
CATEGORIES=	mail
MASTER_SITES=	CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	SPF validator

USE_BZIP2=	yes
GNU_CONFIGURE=	yes
MAKE_JOBS_UNSAFE=	yes

PLIST_FILES=	bin/spfval

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bin/spfval ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
