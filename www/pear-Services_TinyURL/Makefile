# Created by: Ditesh Shashikant Gathani <ditesh@gathani.org>
# $FreeBSD: www/pear-Services_TinyURL/Makefile 314251 2013-03-15 06:21:53Z miwi $

PORTNAME=	Services_TinyURL
PORTVERSION=	0.1.2
CATEGORIES=	www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PHP interface to TinyURL's API

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

USE_PHP=	curl
PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
