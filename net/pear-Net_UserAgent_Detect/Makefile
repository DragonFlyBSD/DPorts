# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: net/pear-Net_UserAgent_Detect/Makefile 318055 2013-05-13 09:55:51Z miwi $

PORTNAME=	Net_UserAgent_Detect
PORTVERSION=	2.5.2
PORTREVISION=	1
CATEGORIES=	net www pear

MAINTAINER=	joehorn@gmail.com
COMMENT=	PEAR class that determines the Web browser, version, and platform

LICENSE=	BSD

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
