# Created by: zakj@nox.cx
# $FreeBSD: security/tinysu/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	tinysu
PORTVERSION=	0.9
CATEGORIES=	security
MASTER_SITES=	http://peff.net/tinysu/

MAINTAINER=	zakj@nox.cx
COMMENT=	A featureless replacement for su and sudo

PLIST_FILES=	bin/tinysu

ALL_TARGET=	it
INSTALL_TARGET=	setup check

NO_STAGE=	yes
post-extract:
	@${ECHO_CMD} ${PREFIX} >${WRKSRC}/conf-home

.include <bsd.port.mk>
