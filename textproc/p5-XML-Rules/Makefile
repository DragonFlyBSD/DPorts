# $FreeBSD: ports/textproc/p5-XML-Rules/Makefile,v 1.7 2012/12/14 13:38:02 svnexp Exp $

PORTNAME=	XML-Rules
PORTVERSION=	1.16
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Parse XML and specify rules for individual tags

RUN_DEPENDS=	p5-XML-Parser>=2.00:${PORTSDIR}/textproc/p5-XML-Parser
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_MODBUILD=	yes

MAN3=	XML::Rules.3

.include <bsd.port.mk>
