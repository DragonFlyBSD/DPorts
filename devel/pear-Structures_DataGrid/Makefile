# Created by: Nick Hilliard <nick@foobar.org>
# $FreeBSD: devel/pear-Structures_DataGrid/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Structures_DataGrid
PORTVERSION=	0.9.3
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	A full-featured tabular structured data management package

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/Console/Table.php:${PORTSDIR}/devel/pear-Console_Table

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
