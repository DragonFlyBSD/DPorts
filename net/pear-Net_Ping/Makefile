# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: net/pear-Net_Ping/Makefile 318060 2013-05-13 09:58:48Z miwi $

PORTNAME=	Net_Ping
PORTVERSION=	2.4.5
CATEGORIES=	net pear

MAINTAINER=	ports@FreeBSD.org
COMMENT=	PEAR class to execute ping

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
