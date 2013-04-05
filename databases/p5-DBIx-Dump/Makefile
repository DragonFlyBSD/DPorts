# Created by: Ryan Steinmetz <zi@FreeBSD.org>
# $FreeBSD: databases/p5-DBIx-Dump/Makefile 315307 2013-03-26 15:39:08Z zi $

PORTNAME=	DBIx-Dump
PORTVERSION=	0.04
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Module for dumping database (DBI) data into a variety of formats

BUILD_DEPENDS=	p5-DBI>=1.57:${PORTSDIR}/databases/p5-DBI
RUN_DEPENDS:=	${BUILD_DEPENDS} \
    		p5-Spreadsheet-WriteExcel>=0:${PORTSDIR}/textproc/p5-Spreadsheet-WriteExcel \
		p5-Text-CSV_XS>=0:${PORTSDIR}/textproc/p5-Text-CSV_XS

PERL_CONFIGURE=	yes

MAN3=		DBIx::Dump.3

.include <bsd.port.mk>
