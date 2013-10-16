# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: net/pear-Auth_RADIUS/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	Auth_RADIUS
PORTVERSION=	1.0.7
CATEGORIES=	net security pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR wrapper classes for the RADIUS PECL

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

USE_PHP=	radius

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
