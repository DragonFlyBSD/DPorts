# Ports collection makefile for:  pear-Spreadsheet_Excel_Writer
# Date created:			  16 March 2004
# Whom:				  Pav Lucistnik <pav@FreeBSD.org>
#
# $FreeBSD: ports/textproc/pear-Spreadsheet_Excel_Writer/Makefile,v 1.12 2012/11/17 06:02:15 svnexp Exp $
#

PORTNAME=	Spreadsheet_Excel_Writer
PORTVERSION=	0.9.2
CATEGORIES=	textproc www pear

MAINTAINER=	pav@FreeBSD.org
COMMENT=	PEAR class for writing Microsoft Excel files

BUILD_DEPENDS=	${PEARDIR}/OLE/OLE.php:${PORTSDIR}/devel/pear-OLE \
		${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${BUILD_DEPENDS}

FILES=		Spreadsheet/Excel/Writer.php Spreadsheet/Excel/Writer/BIFFwriter.php \
		Spreadsheet/Excel/Writer/Format.php Spreadsheet/Excel/Writer/Parser.php \
		Spreadsheet/Excel/Writer/Validator.php Spreadsheet/Excel/Writer/Workbook.php \
		Spreadsheet/Excel/Writer/Worksheet.php

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
