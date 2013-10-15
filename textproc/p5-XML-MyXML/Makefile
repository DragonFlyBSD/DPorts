# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: textproc/p5-XML-MyXML/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	XML-MyXML
PORTVERSION=	0.10.02
PORTEPOCH=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:R}${PORTVERSION:E}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple-to-use XML module parsing and creating XML documents

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

TEST_DEPENDS=	p5-Test-Deep>=0:${PORTSDIR}/devel/p5-Test-Deep

USES=		perl5
USE_PERL5=	configure

MAN3=		XML::MyXML.3 XML::MyXML::II.3

NO_STAGE=	yes
.include <bsd.port.mk>
