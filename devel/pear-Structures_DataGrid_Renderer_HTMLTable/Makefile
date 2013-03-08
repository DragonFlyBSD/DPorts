# Created by: Nick Hilliard <nick@foobar.org>
# $FreeBSD: ports/devel/pear-Structures_DataGrid_Renderer_HTMLTable/Makefile,v 1.4 2013/02/04 08:49:26 svnexp Exp $

PORTNAME=	Structures_DataGrid_Renderer_HTMLTable
PORTVERSION=	0.1.5
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	HTML_Table Renderer for pear-Structures_DataGrid

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/Structures/DataGrid.php:${PORTSDIR}/devel/pear-Structures_DataGrid \
		${PEARDIR}/HTML/Table.php:${PORTSDIR}/devel/pear-HTML_Table \
		${PEARDIR}/Structures/DataGrid/Renderer/Pager.php:${PORTSDIR}/www/pear-Structures_DataGrid_Renderer_Pager

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
