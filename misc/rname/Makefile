# Created by: roam@FreeBSD.org
# $FreeBSD: misc/rname/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	rname
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	misc
MASTER_SITES=	http://devel.ringlet.net/sysutils/rname/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Execute a program with a fake name

WRKSRC=		${WRKDIR}/${PORTNAME}
USE_GMAKE=	yes

NO_STAGE=	yes
.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MDOCS}
INSTALL_TARGET=	install install-doc
.endif

.include <bsd.port.mk>
