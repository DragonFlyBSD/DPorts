# Created by: Jim Pirzyk <pirzyk@uiuc.edu>
# $FreeBSD: devel/p5-ParseLex/Makefile 341711 2014-01-29 10:57:06Z az $

PORTNAME=	ParseLex
PORTVERSION=	2.21
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN/Parse
PKGNAMEPREFIX=	p5-

MAINTAINER=	pirzyk@FreeBSD.org
COMMENT=	Object-oriented generator of lexical analyzers

BUILD_DEPENDS=	p5-ParseTemplate>=3.01:${PORTSDIR}/devel/p5-ParseTemplate
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
