# Created by: ijliao
# $FreeBSD: print/p5-PDFLib/Makefile 327765 2013-09-20 22:43:59Z bapt $

PORTNAME=	PDFLib
PORTVERSION=	0.14
CATEGORIES=	print perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	More OO interface to pdflib_pl.pm

BUILD_DEPENDS=	pdflib-perl>=0:${PORTSDIR}/print/pdflib-perl
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_BUILD=	yes

MAN3=	PDFLib.3

NO_STAGE=	yes
.include <bsd.port.mk>
