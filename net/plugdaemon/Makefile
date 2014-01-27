# Created by: David Thiel <lx@redundancy.redundancy.org>
# $FreeBSD: net/plugdaemon/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	plugdaemon
PORTVERSION=	2.5.5
CATEGORIES=	net
MASTER_SITES=	SF
EXTRACT_SUFX=	.tgz

MAINTAINER=	lx@FreeBSD.org
COMMENT=	Plug proxy daemon, forwards TCP/IP connections

MAN1=		plug.1
PLIST_FILES=	sbin/plug

NO_STAGE=	yes
post-install:
	@${STRIP_CMD} ${PREFIX}/sbin/plug

.include <bsd.port.mk>
