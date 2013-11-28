# Created by: Zhen REN <bg1tpt@gmail.com>
# $FreeBSD: www/pear-Services_Digg/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	Services_Digg
PORTVERSION=	0.4.7
PORTREVISION=	1
CATEGORIES=	www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PHP interface to Digg's API

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

USE_PHP=	curl
PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
