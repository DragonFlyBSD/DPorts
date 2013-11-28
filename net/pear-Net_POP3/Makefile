# Created by: Gerrit Beine (<tux@pinguru.net>)
# $FreeBSD: net/pear-Net_POP3/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	Net_POP3
PORTVERSION=	1.3.8
CATEGORIES=	net pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Provides a POP3 class to access POP3 server

BUILD_DEPENDS=	${PEARDIR}/Net/Socket.php:${PORTSDIR}/net/pear-Net_Socket
RUN_DEPENDS:=	${BUILD_DEPENDS}

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
