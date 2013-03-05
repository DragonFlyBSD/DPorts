# Ports collection makefile for:  pear-Horde_Mime
# Date created:			  6 July 2011
# Whom:				  Martin Matuska <mm@FreeBSD.org>
#
# $FreeBSD: ports/mail/pear-Horde_Mime/Makefile,v 1.21 2013/02/12 17:39:01 svnexp Exp $

PORTNAME=	Horde_Mime
PORTVERSION=	2.0.4
CATEGORIES=	mail www pear

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde MIME Library

USE_HORDE_RUN=	Horde_Exception \
		Horde_Mail \
		Horde_Stream_Filter \
		Horde_Support \
		Horde_Text_Flowed \
		Horde_Translation \
		Horde_Util

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
