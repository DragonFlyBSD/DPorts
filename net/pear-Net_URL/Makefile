# Ports collection makefile for:  pear-Net_URL
# Date created:			  2003-04-04
# Whom:				  Roman Neuhauser (<neuhauser@bellavista.cz>)
#
# $FreeBSD: ports/net/pear-Net_URL/Makefile,v 1.11 2012/11/17 06:00:14 svnexp Exp $
#

PORTNAME=	Net_URL
PORTVERSION=	1.0.15
CATEGORIES=	net www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Easy parsing of URLs

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${BUILD_DEPENDS}

CATEGORY=	Net
FILES=		URL.php
EXAMPLES=	example.php
_EXAMPLESDIR=	docs

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
