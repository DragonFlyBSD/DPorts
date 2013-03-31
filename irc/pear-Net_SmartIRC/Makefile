# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: irc/pear-Net_SmartIRC/Makefile 314237 2013-03-15 02:42:22Z miwi $

PORTNAME=	Net_SmartIRC
PORTVERSION=	1.0.2
CATEGORIES=	irc www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR class for communication with IRC networks

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
