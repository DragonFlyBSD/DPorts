# Created by: Thierry Thomas (<thierry@pompo.net>)
# $FreeBSD: net/pear-Net_Socket/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	Net_Socket
PORTVERSION=	1.0.14
CATEGORIES=	net www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR Network Socket Interface

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
