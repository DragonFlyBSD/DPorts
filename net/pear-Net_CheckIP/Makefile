# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: net/pear-Net_CheckIP/Makefile 314274 2013-03-15 07:17:45Z miwi $

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
