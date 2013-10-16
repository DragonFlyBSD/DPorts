# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: net/pear-Net_UserAgent_Detect/Makefile 327755 2013-09-20 22:10:23Z bapt $

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

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
