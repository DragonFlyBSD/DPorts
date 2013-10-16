# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: net/pear-Net_URL_Mapper/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	Net_URL_Mapper
PORTVERSION=	0.9.1
CATEGORIES=	net www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Simple and flexible way to build nice URLs for web applications

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
