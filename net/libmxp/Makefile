# Created by: Michael Nottebrock <lofi@kiste>
# $FreeBSD: net/libmxp/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	libmxp
PORTVERSION=	0.2.4
CATEGORIES=	net games textproc
MASTER_SITES=	http://www.kmuddy.com/libmxp/files/

MAINTAINER=	johans@FreeBSD.org
COMMENT=	Parser for the MUD eXtension protocol

USES=		cmake
USE_LDCONFIG=	yes

NO_STAGE=	yes
post-patch:
	${REINPLACE_CMD} -e 's|objformat=.*|objformat=elf|g' \
		${WRKSRC}/configure

.include <bsd.port.mk>
