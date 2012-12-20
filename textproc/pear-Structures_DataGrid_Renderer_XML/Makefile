# New ports collection makefile for:	Structures_DataGrid_Renderer_XML
# Date created:				12 Jan 2008
# Whom:					Martin Wilke <miwi@FreeBSD.org>
#
# $FreeBSD: ports/textproc/pear-Structures_DataGrid_Renderer_XML/Makefile,v 1.2 2012/11/17 06:02:15 svnexp Exp $
#

PORTNAME=	Structures_DataGrid_Renderer_XML
PORTVERSION=	0.1.3
CATEGORIES=	textproc databases www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Renderer driver that generates a XML string

BUILD_DEPENDS=	${PEARDIR}/Structures/DataGrid/DataSource/Array.php:${PORTSDIR}/databases/pear-Structures_DataGrid_DataSource_Array \
		${PEARDIR}/XML/Util.php:${PORTSDIR}/devel/pear-XML_Util
RUN_DEPENDS=	${PEARDIR}/Structures/DataGrid/DataSource/Array.php:${PORTSDIR}/databases/pear-Structures_DataGrid_DataSource_Array \
		${PEARDIR}/XML/Util.php:${PORTSDIR}/devel/pear-XML_Util

CATEGORY=	Structures

FILES=		DataGrid/Renderer/XML.php

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
