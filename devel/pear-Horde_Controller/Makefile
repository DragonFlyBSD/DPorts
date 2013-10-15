# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: devel/pear-Horde_Controller/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Horde_Controller
PORTVERSION=	2.0.1
CATEGORIES=	devel www pear

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Controller libraries

USE_HORDE_RUN=	Horde_Exception \
		Horde_Injector \
		Horde_Log \
		Horde_Support \
		Horde_Util

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
