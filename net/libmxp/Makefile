# New ports collection makefile for:	libmxp
# Date created:		2007-02-25
# Whom:			Michael Nottebrock <lofi@kiste>
#
# $FreeBSD: ports/net/libmxp/Makefile,v 1.8 2012/11/17 06:00:04 svnexp Exp $
#

PORTNAME=	libmxp
PORTVERSION=	0.2.4
CATEGORIES=	net games textproc
MASTER_SITES=	http://www.kmuddy.com/libmxp/files/

MAINTAINER=	johans@FreeBSD.org
COMMENT=	Parser for the MUD eXtension protocol

USE_CMAKE=	yes
USE_LDCONFIG=	yes

post-patch:
	${REINPLACE_CMD} -e 's|objformat=.*|objformat=elf|g' \
		${WRKSRC}/configure

.include <bsd.port.mk>
