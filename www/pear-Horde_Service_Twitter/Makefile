# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: www/pear-Horde_Service_Twitter/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	Horde_Service_Twitter
PORTVERSION=	2.0.1
CATEGORIES=	www pear

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Twitter client

USE_HORDE_RUN=	Horde_Controller \
		Horde_Exception \
		Horde_Http \
		Horde_Oauth \
		Horde_Url

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
