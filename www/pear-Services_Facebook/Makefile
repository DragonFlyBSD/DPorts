# Created by: Wen heping <wenheping@gmail.com>)
# $FreeBSD: www/pear-Services_Facebook/Makefile 314411 2013-03-17 08:27:46Z miwi $

PORTNAME=	Services_Facebook
PORTVERSION=	0.2.14
CATEGORIES=	www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PHP interface to Facebook's API

BUILD_DEPENDS=	${PEARDIR}/Validate.php:${PORTSDIR}/devel/pear-Validate
RUN_DEPENDS=	${PEARDIR}/Validate.php:${PORTSDIR}/devel/pear-Validate

USE_PHP=	curl
PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
