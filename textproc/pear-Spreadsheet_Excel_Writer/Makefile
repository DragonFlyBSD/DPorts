# Created by: Pav Lucistnik <pav@FreeBSD.org>
# $FreeBSD: textproc/pear-Spreadsheet_Excel_Writer/Makefile 333430 2013-11-10 19:48:12Z sunpoet $

PORTNAME=	Spreadsheet_Excel_Writer
PORTVERSION=	0.9.3
CATEGORIES=	textproc www pear

MAINTAINER=	5u623l20@gmail.com
COMMENT=	PEAR class for writing Microsoft Excel files

LICENSE=	LGPL3

BUILD_DEPENDS=	${PEARDIR}/OLE.php:${PORTSDIR}/devel/pear-OLE \
		${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/OLE.php:${PORTSDIR}/devel/pear-OLE \
		${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
