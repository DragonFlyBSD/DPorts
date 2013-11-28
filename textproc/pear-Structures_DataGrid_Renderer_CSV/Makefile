# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: textproc/pear-Structures_DataGrid_Renderer_CSV/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	Structures_DataGrid_Renderer_CSV
PORTVERSION=	0.1.4
CATEGORIES=	textproc databases www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Renderer driver that generates a CSV string

BUILD_DEPENDS=	${PEARDIR}/Structures/DataGrid/DataSource/Array.php:${PORTSDIR}/databases/pear-Structures_DataGrid_DataSource_Array
RUN_DEPENDS=	${PEARDIR}/Structures/DataGrid/DataSource/Array.php:${PORTSDIR}/databases/pear-Structures_DataGrid_DataSource_Array

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
