# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: net/pear-Services_Pingback/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	Services_Pingback
PORTVERSION=	0.2.2
CATEGORIES=	net www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Pingback user-agent class

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
