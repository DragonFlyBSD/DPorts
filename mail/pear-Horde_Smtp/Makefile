# $FreeBSD: mail/pear-Horde_Smtp/Makefile 334186 2013-11-18 13:12:01Z mm $

PORTNAME=	Horde_Smtp
PORTVERSION=	1.3.0
CATEGORIES=	mail www pear
PKGNAMEPREFIX=	pear-

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde SMTP Client

USE_HORDE_RUN=	Horde_Exception \
		Horde_Mail \
		Horde_Socket_Client \
		Horde_Support

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
