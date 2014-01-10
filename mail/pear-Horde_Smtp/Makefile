# $FreeBSD: mail/pear-Horde_Smtp/Makefile 337825 2013-12-27 23:49:33Z mm $

PORTNAME=	Horde_Smtp
PORTVERSION=	1.3.1
CATEGORIES=	mail www pear
PKGNAMEPREFIX=	pear-

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde SMTP Client

USE_HORDE_RUN=	Horde_Exception \
		Horde_Mail \
		Horde_Socket_Client \
		Horde_Support

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
