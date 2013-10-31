# Created by: Dirk Engling <erdgeist@erdgeist.org>
# $FreeBSD: sysutils/minimunin/Makefile 331876 2013-10-28 18:08:56Z flo $

PORTNAME=	minimunin
PORTVERSION=	0.1
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	http://erdgeist.org/arts/software/minimunin/

MAINTAINER=	erdgeist@erdgeist.org
COMMENT=	Tiny munin-node implementation written in pure bourne shell

USE_BZIP2=	yes
PLIST_FILES=	bin/minimunin
SUB_FILES=	pkg-message

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/minimunin ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
