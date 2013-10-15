# Created by: Sergey Kandaurov <pluknet@gmail.com>
# $FreeBSD: net/simpleproxy/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	simpleproxy
PORTVERSION=	3.4
CATEGORIES=	net
MASTER_SITES=	SF

MAINTAINER=	pluknet@gmail.com
COMMENT=	Simple TCP proxy

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/${PORTNAME}

.if !defined(NO_INSTALL_MANPAGES)
MAN1=		simpleproxy.1
.endif

NO_STAGE=	yes
.include <bsd.port.mk>
