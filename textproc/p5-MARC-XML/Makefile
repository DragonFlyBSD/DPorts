# Created by: Dmitry Sivachenko <demon@FreeBSD.org>
# $FreeBSD: textproc/p5-MARC-XML/Makefile 340622 2014-01-21 17:03:00Z mat $

PORTNAME=	MARC-XML
PORTVERSION=	1.0.1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	demon@FreeBSD.org
COMMENT=	An extension to the MARC-Record distribution for working with XML data

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-MARC-Record>=2:${PORTSDIR}/textproc/p5-MARC-Record \
		p5-MARC-Charset>=0.98:${PORTSDIR}/textproc/p5-MARC-Charset \
		p5-XML-SAX>=0.12:${PORTSDIR}/textproc/p5-XML-SAX
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
