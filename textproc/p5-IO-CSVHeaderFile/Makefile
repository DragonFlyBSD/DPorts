# Created by: Vasek Balcar <vasek@ti.cz>
# $FreeBSD: textproc/p5-IO-CSVHeaderFile/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	IO-CSVHeaderFile
PORTVERSION=	0.04
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	vasek@ti.cz
COMMENT=	Perl module to automate reads from CSV formatted text files

BUILD_DEPENDS=	p5-Text-CSV_XS>=0:${PORTSDIR}/textproc/p5-Text-CSV_XS
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		IO::CSVHeaderFile.3

NO_STAGE=	yes
.include <bsd.port.mk>
