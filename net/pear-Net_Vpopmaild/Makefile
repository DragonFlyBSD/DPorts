# Created by: Wen heping <wenheping@gmail.com>)
# $FreeBSD: net/pear-Net_Vpopmaild/Makefile 327755 2013-09-20 22:10:23Z bapt $

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

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
