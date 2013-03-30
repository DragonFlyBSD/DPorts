# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: databases/pear-Structures_DataGrid_DataSource_Array/Makefile 314395 2013-03-17 05:36:56Z miwi $

PORTNAME=	Structures_DataGrid_DataSource_Array
PORTVERSION=	0.1.4
CATEGORIES=	databases www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	DataSource driver using arrays

BUILD_DEPENDS=	${PEARDIR}/Structures/DataGrid.php:${PORTSDIR}/devel/pear-Structures_DataGrid
RUN_DEPENDS=	${PEARDIR}/Structures/DataGrid.php:${PORTSDIR}/devel/pear-Structures_DataGrid

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
