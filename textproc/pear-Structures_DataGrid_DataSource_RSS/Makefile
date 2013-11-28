# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: textproc/pear-Structures_DataGrid_DataSource_RSS/Makefile 334871 2013-11-25 17:59:58Z antoine $

PORTNAME=	Structures_DataGrid_DataSource_RSS
PORTVERSION=	0.1.1
CATEGORIES=	textproc databases www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	DataSource driver using RSS files

BUILD_DEPENDS=	${PEARDIR}/Structures/DataGrid/DataSource/Array.php:${PORTSDIR}/databases/pear-Structures_DataGrid_DataSource_Array
RUN_DEPENDS=	${PEARDIR}/Structures/DataGrid/DataSource/Array.php:${PORTSDIR}/databases/pear-Structures_DataGrid_DataSource_Array

USE_PHP=	mysql
PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
