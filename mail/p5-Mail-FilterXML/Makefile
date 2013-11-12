# Created by: will
# $FreeBSD: mail/p5-Mail-FilterXML/Makefile 332803 2013-11-05 02:54:53Z vanilla $

PORTNAME=	Mail-FilterXML
PORTVERSION=	0.3
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module that allows writing mail filter rules in XML

BUILD_DEPENDS=	p5-Mail-Audit>=0:${PORTSDIR}/mail/p5-Mail-Audit \
		p5-XML-Parser>=0:${PORTSDIR}/textproc/p5-XML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
