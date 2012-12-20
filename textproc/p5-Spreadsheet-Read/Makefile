# New ports collection makefile for:	p5-Spreadsheet-Read
# Date created:		2010-03-08
# Whom:			Steve Wills <steve@mouf.net>
#
# $FreeBSD: ports/textproc/p5-Spreadsheet-Read/Makefile,v 1.11 2012/11/17 06:02:08 svnexp Exp $
#

PORTNAME=	Spreadsheet-Read
PORTVERSION=	0.47
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:HMBRAND
PKGNAMEPREFIX=	p5-
EXTRACT_SUFX=	.tgz

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Read the data from a spreadsheet

BUILD_DEPENDS=	p5-IO-stringy>0:${PORTSDIR}/devel/p5-IO-stringy \
		p5-Text-CSV_XS>0:${PORTSDIR}/textproc/p5-Text-CSV_XS \
		p5-Text-CSV>0:${PORTSDIR}/textproc/p5-Text-CSV \
		p5-Spreadsheet-ReadSXC>0:${PORTSDIR}/textproc/p5-Spreadsheet-ReadSXC \
		p5-Spreadsheet-ParseExcel>0:${PORTSDIR}/textproc/p5-Spreadsheet-ParseExcel
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-NoWarnings>0:${PORTSDIR}/devel/p5-Test-NoWarnings

PERL_CONFIGURE=	yes

MAN3=	Spreadsheet::Read.3

.include <bsd.port.mk>
