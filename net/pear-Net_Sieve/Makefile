# Created by: Thierry Thomas (<thierry@pompo.net>)
# $FreeBSD: net/pear-Net_Sieve/Makefile 314370 2013-03-16 16:16:05Z miwi $

PORTNAME=	Net_Sieve
PORTVERSION=	1.3.2
CATEGORIES=	net www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR class to handle talking to timsieved

BUILD_DEPENDS=	${PEARDIR}/Net/Socket.php:${PORTSDIR}/net/pear-Net_Socket
RUN_DEPENDS=	${PEARDIR}/Net/Socket.php:${PORTSDIR}/net/pear-Net_Socket

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
