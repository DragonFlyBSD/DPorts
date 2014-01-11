# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: devel/p5-Test-XML/Makefile 338916 2014-01-06 18:07:56Z az $

PORTNAME=	Test-XML
PORTVERSION=	0.08
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Compare XML in perl tests

BUILD_DEPENDS=	p5-XML-SemanticDiff>=0:${PORTSDIR}/textproc/p5-XML-SemanticDiff \
		p5-XML-Parser>=0:${PORTSDIR}/textproc/p5-XML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
