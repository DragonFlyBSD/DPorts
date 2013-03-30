# Created by: Nick Hilliard <nick@foobar.org>
# $FreeBSD: www/pear-Structures_DataGrid_Renderer_Pager/Makefile 314455 2013-03-17 15:28:55Z miwi $

PORTNAME=	Structures_DataGrid_Renderer_Pager
PORTVERSION=	0.1.3
CATEGORIES=	www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Pager Renderer for pear-Structures_DataGrid

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/Structures/DataGrid.php:${PORTSDIR}/devel/pear-Structures_DataGrid \
		${PEARDIR}/Pager/Pager.php:${PORTSDIR}/devel/pear-Pager

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
