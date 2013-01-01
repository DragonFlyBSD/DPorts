# ex:ts=8
# Ports collection makefile for:	p5-PDFLib
# Date created:			May 13, 2002
# Whom:				ijliao
#
# $FreeBSD: ports/print/p5-PDFLib/Makefile,v 1.14 2012/11/17 06:00:53 svnexp Exp $
#

PORTNAME=	PDFLib
PORTVERSION=	0.14
CATEGORIES=	print perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	More OO interface to pdflib_pl.pm

BUILD_DEPENDS=	pdflib-perl>=0:${PORTSDIR}/print/pdflib-perl
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes
NO_BUILD=	yes

MAN3=	PDFLib.3

.include <bsd.port.mk>
