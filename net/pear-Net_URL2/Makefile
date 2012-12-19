# Ports collection makefile for:  pear-Net_URL2
# Date created:			  8 May 2007
# Whom:				  Zhen REN <bg1tpt@gmail.com>
#
# $FreeBSD: ports/net/pear-Net_URL2/Makefile,v 1.14 2012/11/17 06:00:14 svnexp Exp $
#

PORTNAME=	Net_URL2
PORTVERSION=	2.0.0
CATEGORIES=	net www pear

MAINTAINER=	joehorn@gmail.com
COMMENT=	PEAR Class for parsing and handling URL

LICENSE=	BSD

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
