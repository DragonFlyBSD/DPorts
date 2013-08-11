# ex:ts=8
# Ports collection makefile for:	p5-PDFLib
# Created by: ijliao
# $FreeBSD: print/p5-PDFLib/Makefile 324174 2013-08-02 18:52:07Z mat $

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

.include <bsd.port.mk>
