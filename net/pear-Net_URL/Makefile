# Created by: Roman Neuhauser (<neuhauser@bellavista.cz>)
# $FreeBSD: net/pear-Net_URL/Makefile 314207 2013-03-15 00:56:09Z miwi $

PORTNAME=	Net_URL
PORTVERSION=	1.0.15
CATEGORIES=	net www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Easy parsing of URLs

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
