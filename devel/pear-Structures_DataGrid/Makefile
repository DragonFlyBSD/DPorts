# Created by: Nick Hilliard <nick@foobar.org>
# $FreeBSD: devel/pear-Structures_DataGrid/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	Structures_DataGrid
PORTVERSION=	0.9.3
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	A full-featured tabular structured data management package

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/Console/Table.php:${PORTSDIR}/devel/pear-Console_Table

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
