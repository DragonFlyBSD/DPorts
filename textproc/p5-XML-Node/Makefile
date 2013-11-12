# Created by: Johann Visagie <johann@egenetics.com>
# $FreeBSD: textproc/p5-XML-Node/Makefile 333056 2013-11-07 03:52:41Z vanilla $

PORTNAME=	XML-Node
PORTVERSION=	0.11
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl5 module to extend and simplify XML::Parser

BUILD_DEPENDS=	p5-XML-Parser>=0:${PORTSDIR}/textproc/p5-XML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
