# Created by: Nick Hilliard <nick@foobar.org>
# $FreeBSD: www/pear-Structures_DataGrid_Renderer_Flexy/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	Structures_DataGrid_Renderer_Flexy
PORTVERSION=	0.1.4
CATEGORIES=	www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Renderer for pear-Structures_DataGrid using HTML_Template_Flexy

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/Structures/DataGrid.php:${PORTSDIR}/devel/pear-Structures_DataGrid \
		${PEARDIR}/HTML/Template/Flexy.php:${PORTSDIR}/devel/pear-HTML_Template_Flexy \
		${PEARDIR}/Structures/DataGrid/Renderer/Pager.php:${PORTSDIR}/www/pear-Structures_DataGrid_Renderer_Pager

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
