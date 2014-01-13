# Created by: Dima Sivachenko	<dima@chg.ru>
# $FreeBSD: misc/vera/Makefile 338844 2014-01-06 08:38:49Z demon $

PORTNAME=	vera
PORTVERSION=	1.21a
CATEGORIES=	misc
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	vera

MAINTAINER=	demon@FreeBSD.org
COMMENT=	Virtual Entity of Relevant Acronyms

LICENSE=	GFDL

INFO=		vera

do-build:
	@ cd ${WRKSRC} && makeinfo --no-split vera.texi

do-install:
	@ ${INSTALL_DATA} ${WRKSRC}/vera.info ${STAGEDIR}${PREFIX}/info

.include <bsd.port.mk>
