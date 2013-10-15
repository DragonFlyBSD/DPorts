# $FreeBSD: x11/xmh/Makefile 327777 2013-09-20 23:43:19Z bapt $

PORTNAME=	xmh
PORTVERSION=	1.0.2
CATEGORIES=	x11 mail

MAINTAINER=	x11@FreeBSD.org
COMMENT=	Send and read mail with an X interface to MH

RUN_DEPENDS+=	repl:${PORTSDIR}/mail/nmh

XORG_CAT=	app
USE_XORG=	xaw xmu xt xbitmaps

MAN1=		xmh.1

NO_STAGE=	yes
.include <bsd.port.mk>
