# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: net/pear-Net_CheckIP/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	Net_CheckIP
PORTVERSION=	1.2.2
CATEGORIES=	net pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Check the syntax of IPv4 addresses

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
