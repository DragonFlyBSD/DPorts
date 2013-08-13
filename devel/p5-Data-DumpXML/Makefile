# Created by: Seamus Venasse <svenasse@polaris.ca>
# $FreeBSD: devel/p5-Data-DumpXML/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Data-DumpXML
PORTVERSION=	1.06
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Dump arbitrary data structures as XML

RUN_DEPENDS=	p5-Array-RefElem>=0.01:${PORTSDIR}/misc/p5-Array-RefElem \
		p5-XML-Parser>=2:${PORTSDIR}/textproc/p5-XML-Parser
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Data::DumpXML.3 \
		Data::DumpXML::Parser.3

.include <bsd.port.mk>
