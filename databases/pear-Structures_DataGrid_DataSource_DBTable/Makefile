# New ports collection makefile for:	Structures_DataGrid_DataSource_DBTable
# Date created:				19 Dec 2007
# Whom:					Martin Wilke <miwi@FreeBSD.org>
#
# $FreeBSD: ports/databases/pear-Structures_DataGrid_DataSource_DBTable/Makefile,v 1.4 2012/11/17 05:55:17 svnexp Exp $
#

PORTNAME=	Structures_DataGrid_DataSource_DBTable
PORTVERSION=	0.1.7
CATEGORIES=	databases www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	DataSource driver using PEAR::DB_Table

BUILD_DEPENDS=	${PEARDIR}/Structures/DataGrid.php:${PORTSDIR}/devel/pear-Structures_DataGrid \
		${PEARDIR}/DB/Table.php:${PORTSDIR}/databases/pear-DB_Table
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PHP=	mysql

CATEGORY=	Structures

FILES=		DataGrid/DataSource/DBTable.php

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
