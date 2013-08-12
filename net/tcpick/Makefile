# Created by: MANTANI Nobutaka <nobutaka@FreeBSD.org>
# $FreeBSD: net/tcpick/Makefile 324070 2013-07-31 22:47:01Z bapt $

PORTNAME=	tcpick
PORTVERSION=	0.2.1
PORTREVISION=	1
CATEGORIES=	net
MASTER_SITES=	SF

MAINTAINER=	nobutaka@FreeBSD.org
COMMENT=	Text-based TCP stream sniffer

GNU_CONFIGURE=	yes
USE_CSTD=	gnu89

MANLANG=	"" it
MAN8=		tcpick.8

post-install:
	${MKDIR} ${PREFIX}/man/it/man8
	${MV} ${PREFIX}/man/man8/tcpick_italian.8 ${PREFIX}/man/it/man8/tcpick.8

.include <bsd.port.mk>
