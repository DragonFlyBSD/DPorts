# Created by: Gerrit Beine (<tux@pinguru.net>)
# $FreeBSD: net/pear-Net_Server/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	Net_Server
PORTVERSION=	1.0.3
CATEGORIES=	net pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Generic server class

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

USE_PHP=	sockets pcntl

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
