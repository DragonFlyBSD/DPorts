# Created by: Hansjoerg Pehofer <hansjoerg.pehofer@uibk.ac.at>
# $FreeBSD: textproc/p5-XML-Generator-PerlData/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	XML-Generator-PerlData
PORTVERSION=	0.91
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl extension for generating SAX2 events from Perl data structures

BUILD_DEPENDS=	p5-XML-SAX>=0:${PORTSDIR}/textproc/p5-XML-SAX
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		XML::Generator::PerlData.3

NO_STAGE=	yes
.include <bsd.port.mk>
