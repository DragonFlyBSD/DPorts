# Created by: Ditesh Shashikant Gathani <ditesh@gathani.org>
# $FreeBSD: www/pear-Services_TinyURL/Makefile 334871 2013-11-25 17:59:58Z antoine $

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
