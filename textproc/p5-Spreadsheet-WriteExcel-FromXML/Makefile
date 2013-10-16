# Created by: Bill Swingle <unfurl@FreeBSD.org>
# $FreeBSD: textproc/p5-Spreadsheet-WriteExcel-FromXML/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	Spreadsheet-WriteExcel-FromXML
PORTVERSION=	1.1
PORTEPOCH=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Create an Excel Spreadsheet from XML

BUILD_DEPENDS=	p5-OLE-Storage_Lite>=0:${PORTSDIR}/devel/p5-OLE-Storage_Lite \
		p5-XML-Parser>=0:${PORTSDIR}/textproc/p5-XML-Parser \
		p5-Spreadsheet-WriteExcel>=0:${PORTSDIR}/textproc/p5-Spreadsheet-WriteExcel
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Spreadsheet::WriteExcel::FromXML::Workbook.3 \
		Spreadsheet::WriteExcel::FromXML::Worksheet.3 \
		Spreadsheet::WriteExcel::FromXML.3

NO_STAGE=	yes
.include <bsd.port.mk>
