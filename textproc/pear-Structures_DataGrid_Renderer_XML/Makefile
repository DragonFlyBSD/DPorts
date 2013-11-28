# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: textproc/pear-Structures_DataGrid_Renderer_XML/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	Structures_DataGrid_Renderer_XML
PORTVERSION=	0.1.3
CATEGORIES=	textproc databases www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Renderer driver that generates a XML string

BUILD_DEPENDS=	${PEARDIR}/Structures/DataGrid/DataSource/Array.php:${PORTSDIR}/databases/pear-Structures_DataGrid_DataSource_Array \
		${PEARDIR}/XML/Util.php:${PORTSDIR}/devel/pear-XML_Util
RUN_DEPENDS=	${PEARDIR}/Structures/DataGrid/DataSource/Array.php:${PORTSDIR}/databases/pear-Structures_DataGrid_DataSource_Array \
		${PEARDIR}/XML/Util.php:${PORTSDIR}/devel/pear-XML_Util

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
