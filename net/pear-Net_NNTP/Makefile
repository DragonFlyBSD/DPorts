# Created by: Clement Laforet <sheepkiller@cultdeadsheep.org>
# $FreeBSD: net/pear-Net_NNTP/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	Net_NNTP
PORTVERSION=	1.5.0
PORTEPOCH=	1
CATEGORIES=	net news pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR implementation of the NNTP protocol

BUILD_DEPENDS=	${PEARDIR}/Net/Socket.php:${PORTSDIR}/net/pear-Net_Socket
RUN_DEPENDS=	${PEARDIR}/Net/Socket.php:${PORTSDIR}/net/pear-Net_Socket

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
