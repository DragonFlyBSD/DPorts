# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: sysutils/pear-Cache_Lite/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	Cache_Lite
PORTVERSION=	1.7.15
PORTEPOCH=	1
CATEGORIES=	sysutils www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR fast and safe little cache system

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
