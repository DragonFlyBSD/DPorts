# Ports collection makefile for:  pear-Horde_Date
# Date created:			  6 July 2011
# Whom:				  Martin Matuska <mm@FreeBSD.org>
#
# $FreeBSD: ports/devel/pear-Horde_Token/Makefile,v 1.11 2012/12/12 15:19:48 svnexp Exp $

PORTNAME=	Horde_Token
PORTVERSION=	2.0.1
CATEGORIES=	devel www pear

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Token API

USE_HORDE_RUN=	Horde_Exception \
		Horde_Translation \
		Horde_Url \
		Horde_Util
USE_PHP=	hash

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
