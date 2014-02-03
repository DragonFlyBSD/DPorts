# Created by: Mike Bristow <mike@urgle.com>
# $FreeBSD: textproc/p5-XML-TokeParser/Makefile 341765 2014-01-29 17:46:33Z az $

PORTNAME=	XML-TokeParser
PORTVERSION=	0.05
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN/XML
PKGNAMEPREFIX=	p5-

MAINTAINER=	mike@urgle.com
COMMENT=	Simplified interface to XML::Parser

BUILD_DEPENDS=	p5-XML-Parser>=0:${PORTSDIR}/textproc/p5-XML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
