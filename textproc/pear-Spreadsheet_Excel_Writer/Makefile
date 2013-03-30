# Created by: Pav Lucistnik <pav@FreeBSD.org>
# $FreeBSD: textproc/pear-Spreadsheet_Excel_Writer/Makefile 314364 2013-03-16 15:49:47Z miwi $

PORTNAME=	Spreadsheet_Excel_Writer
PORTVERSION=	0.9.2
CATEGORIES=	textproc www pear

MAINTAINER=	pav@FreeBSD.org
COMMENT=	PEAR class for writing Microsoft Excel files

BUILD_DEPENDS=	${PEARDIR}/OLE.php:${PORTSDIR}/devel/pear-OLE \
		${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/OLE.php:${PORTSDIR}/devel/pear-OLE \
		${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
