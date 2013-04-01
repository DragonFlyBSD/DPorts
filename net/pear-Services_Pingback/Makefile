# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: net/pear-Services_Pingback/Makefile 314215 2013-03-15 01:29:36Z miwi $

PORTNAME=	Services_Pingback
PORTVERSION=	0.2.2
CATEGORIES=	net www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Pingback user-agent class

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
