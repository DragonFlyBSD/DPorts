# Created by: Wen heping <wenheping@gmail.com>)
# $FreeBSD: net/pear-Net_Vpopmaild/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	Net_Vpopmaild
PORTVERSION=	0.3.2
CATEGORIES=	net mail pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR Class for accessing Vpopmail's vpopmaild daemon

BUILD_DEPENDS=	${PEARDIR}/Net/Socket.php:${PORTSDIR}/net/pear-Net_Socket \
		${PEARDIR}/Log.php:${PORTSDIR}/sysutils/pear-Log
RUN_DEPENDS=	${PEARDIR}/Net/Socket.php:${PORTSDIR}/net/pear-Net_Socket \
		${PEARDIR}/Log.php:${PORTSDIR}/sysutils/pear-Log

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
