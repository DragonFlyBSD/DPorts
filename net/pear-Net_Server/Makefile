# Created by: Gerrit Beine (<tux@pinguru.net>)
# $FreeBSD: ports/net/pear-Net_Server/Makefile,v 1.9 2013/02/03 18:30:32 svnexp Exp $

PORTNAME=	Net_Server
PORTVERSION=	1.0.3
CATEGORIES=	net pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Generic server class

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

USE_PHP=	sockets pcntl

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
