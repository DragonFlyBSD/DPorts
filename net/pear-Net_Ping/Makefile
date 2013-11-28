# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: net/pear-Net_Ping/Makefile 334871 2013-11-25 17:59:58Z antoine $

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
